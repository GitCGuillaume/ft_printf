/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:19:41 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/11 14:43:46 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t		check_flags_spec_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (l_flags->point == 1)
	{
		if (l_flags->asterisk == 0)
		{
			spec_pnt_no_ast_s(l_flags, &nb_print, value);
			return (nb_print);
		}
		else
			spec_pnt_ast_s(l_flags, &nb_print, value);
	}
	return (nb_print);
}

ssize_t		check_flags_one_s(t_flags *l_flags, char *value)
{
	ssize_t	width;
	ssize_t	nb_print;
	ssize_t	result;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	result = check_min_max_value_s(l_flags);
	if (result == -1)
		return (-1);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		nb_print += print_basic_value_s(&width, value, ' ');
	}
	else if (l_flags->minus == 1)
	{
		if (l_flags->asterisk == 0)
			nb_print += spec_minus_no_ast_s(l_flags, value);
		else if (l_flags->point == 1)
			nb_print += spec_minus_ast_s(l_flags, value);
	}
	return (nb_print);
}

ssize_t		check_flags_two_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	result;

	nb_print = 0;
	result = check_min_max_value_s(l_flags);
	if (result == -1)
		return (-1);
	if (l_flags->asterisk == 1 && l_flags->point == 0 && l_flags->zero == 0)
	{
		nb_print += astrsk_s(l_flags, value);
		return (nb_print);
	}
	else if (l_flags->minus == 0 && l_flags->point == 1)
	{
		nb_print += check_flags_spec_s(l_flags, value);
		return (nb_print);
	}
	return (nb_print);
}

ssize_t		check_flags_three_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	result;

	nb_print = 0;
	result = check_min_max_value_s(l_flags);
	if (result == -1)
		return (-1);
	if (l_flags->zero == 1 && l_flags->point == 0 && l_flags->point == 0)
	{
		nb_print += print_s_zero(l_flags, value);
		return (nb_print);
	}
	return (nb_print);
}

ssize_t		print_s(t_flags *l_flags, va_list ap)
{
	ssize_t	result;
	char	*value;
	char	*strnstr;

	result = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	value = va_arg(ap, char *);
	if (value == NULL)
		if (!(value = ft_strdup("(null)")))
			result = -1;
	result_s(l_flags, &result, value);
	/*if (result != -1)
	{
		result = check_flags_three_s(l_flags, value);
		if (result == 0)
		{
			result = check_flags_one_s(l_flags, value);
			if (result == 0)
				result = check_flags_two_s(l_flags, value);
		}
	}*/
	strnstr = ft_strnstr(value, "(null)", 6);
	if (strnstr != NULL)
		free(value);
	return (result);
}
