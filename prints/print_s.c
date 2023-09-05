/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:19:41 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/14 11:20:19 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
 ** Indicator s is divide by three functions,
 ** it call functions from the settings in struct
*/

ssize_t		check_flags_one_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	result;

	nb_print = 0;
	result = check_min_max_value_s(l_flags);
	if (result == -1)
		return (-1);
	if (value)
	{
		if (l_flags->minus == 1)
		{
			result = spec_minus_s(l_flags, value);
			if (result == -1)
				return (-1);
			nb_print += result;
		}
	}
	return (nb_print);
}

/*
 ** Will check * alone or .
*/

ssize_t		check_flags_two_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	result;

	nb_print = 0;
	result = check_min_max_value_s(l_flags);
	if (result == -1)
		return (-1);
	if (value)
	{
		if (l_flags->point == 0 && l_flags->zero == 0)
		{
			result = astrsk_s(l_flags, value);
			if (result == -1)
				return (-1);
			nb_print += result;
		}
		else if (l_flags->minus == 0 && l_flags->point == 1)
		{
			spec_pnt_ast_s(l_flags, &nb_print, value);
			if (nb_print == -1)
				return (-1);
		}
	}
	return (nb_print);
}

/*
 ** Handle undefined behavior 0
*/

ssize_t		check_flags_three_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	result;

	nb_print = 0;
	result = check_min_max_value_s(l_flags);
	if (result == -1)
		return (-1);
	if (value)
	{
		if (l_flags->zero == 1 && l_flags->point == 0)
		{
			result = print_s_zero(l_flags, value);
			if (result == -1)
				return (-1);
			nb_print += result;
			return (nb_print);
		}
	}
	return (nb_print);
}

void		result_s(t_flags *l_flags, ssize_t *result, char *value)
{
	if (*result != -1)
	{
		*result = check_flags_three_s(l_flags, value);
		if (*result == 0)
		{
			*result = check_flags_one_s(l_flags, value);
			if (*result == 0)
				*result = check_flags_two_s(l_flags, value);
		}
	}
}

ssize_t		print_s(t_flags *l_flags, va_list ap)
{
	ssize_t	result;
	char	*value;
	char	*strnstr;

	result = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	value = va_arg(ap, char *);
	if (value == NULL)
	{
		value = ft_strdup("(null)");
		if (value == NULL)
			return (-1);
	}
	result_s(l_flags, &result, value);
	strnstr = ft_strnstr(value, "(null)", 6);
	if (strnstr != NULL)
		free(value);
	return (result);
}
