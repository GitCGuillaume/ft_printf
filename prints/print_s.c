/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_indicators_s.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:58:32 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/25 11:14:26 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

char	*ft_strlimit(char *s, ssize_t width)
{
	ssize_t	i;
	char	*ptr;

	i = 0;
	if (s != NULL)
	{
		if (!(ptr = malloc(width + 1)))
			return (NULL);
		while (s[i] != '\0' && width > i)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	else
		ptr = NULL;
	return (ptr);
}

size_t	check_flags_spec_s(t_flags *l_flags, va_list ap, char *s)
{
	size_t	nb_print;

	nb_print = 0;
	(void)ap;
	if (l_flags->point == 1)
	{
		if (l_flags->asterisk == 0)
		{
			if (s == NULL)
				s = ft_strdup("(null)");
			spec_pnt_no_ast_s(l_flags, &nb_print, s);
			if (ft_strstr(s, "(null)"))
				free(s);
			return (nb_print);
		}
	}
	return (nb_print);
}

size_t	check_flags_one_s(t_flags *l_flags, char *s)
{
	ssize_t	width;
	size_t	nb_print;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (s == NULL)
			s = ft_strdup("(null)");
		nb_print += print_width_s(width, s, ' ');
		ft_putstr_fd(s, &nb_print, 1);
		if (ft_strstr(s, "(null)"))
			free(s);
		return (nb_print);
	}
	else if (l_flags->minus == 1)
	{
		spec_minus_s(l_flags, &nb_print, s);
		if (s && ft_strstr(s, "(null)"))
			free(s);
		return (nb_print);
	}
	return (nb_print);
}

size_t	check_flags_two_s(t_flags *l_flags, va_list ap, char *s)
{
	size_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	/*if (l_flags->point == 1 && l_flags->zero == 1)
		nb_print += check_flags_spec_s(l_flags, ap, s);
	else*/
       	if (l_flags->point == 1 && l_flags->zero == 0)
		nb_print += check_flags_spec_s(l_flags, ap, s);
	else if (l_flags->zero == 1)
	{
		if (s == NULL)
			s = ft_strdup("(null)");
		nb_print += print_width_s(width, s, ' ');
		ft_putstr_fd(s, &nb_print, 1);
		if (ft_strstr(s, "(null)"))
			free(s);
		return (nb_print);
	}
	return (nb_print);
}

size_t print_s(t_flags *l_flags, va_list ap)
{
	size_t	result;
	char	*s;

	result = 0;
	s = va_arg(ap, char *);
	if (l_flags->percentage == 0)
	{
		if ((result = check_flags_one_s(l_flags, s)) == 0)
		{
			result = check_flags_two_s(l_flags, ap, s);
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
