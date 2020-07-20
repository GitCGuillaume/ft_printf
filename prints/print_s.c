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
/*
char	*ft_strlimit(char *s, size_t width)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!(ptr = malloc(atoi + 1)))
		return (NULL);
	while (width > i)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}*/

int	check_flags_one_s(t_flags *l_flags, char *s)
{
	ssize_t	width;
	size_t	nb_print;
	char	*str;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	str = NULL;
	(void)str;
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (s == NULL)
			s = ft_strdup("(null)");
		nb_print += print_width_s(width, s, ' ');
		ft_putstr_fd(s, &nb_print, 1);
		return (nb_print);
	}
	else if (l_flags->minus == 1)
	{
		spec_minus_s(l_flags, &nb_print, s);
		return (nb_print);
	}
	/*else if (l_flags->point == 1)
	{
		str = ft_strlimit(s, atoi);
		ft_putstr_fd(str, 1);
		free(str);
		return (1);
	}*/
	return (nb_print);
}/*
int	check_flags_two_s(t_flags *l_flags, char *s, size_t atoi)
{
	if (l_flags->minus == 1)
	{
		ft_putstr_fd(s, 1);
		print_space_s(atoi, s);
		return (1);
	}
	return (0);
}*/

int print_s(t_flags *l_flags, va_list ap)
{
	size_t	result;
	char	*s;

	result = 0;
	s = va_arg(ap, char *);
	if (l_flags->percentage == 0)
	{
		if ((result = check_flags_one_s(l_flags, s)) == 0)
		{
			//result = check_flags_two_s(l_flags, s);
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
