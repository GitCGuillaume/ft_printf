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

#include "../../ft_printf.h"
#include <stdio.h>

char	*ft_strlimit(char *s, size_t atoi)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!(ptr = malloc(atoi + 1)))
		return (NULL);
	while (atoi > i)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	check_flags_one_s(t_list_flags *l_flags, char *s, size_t atoi)
{
	char	*str;

	str = NULL;
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		print_space_s(atoi, s);
		ft_putstr_fd(s, 1);
		return (1);
	}
	else if (l_flags->point == 1 && atoi > 0)
	{
		str = ft_strlimit(s, atoi);
		ft_putstr_fd(str, 1);
		free(str);
		return (1);
	}
	return (0);
}
int	check_flags_two_s(t_list_flags *l_flags, char *s, size_t atoi)
{
	if (l_flags->minus == 1)
	{
		ft_putstr_fd(s, 1);
		print_space_s(atoi, s);
		return (1);
	}
	return (0);
}

int print_s(char const *fmt, t_list_flags *l_flags, size_t start, va_list ap)
{
	size_t atoi;
	char	*s;
	char	*width_str;

	width_str = 0;
	atoi = 0;
	s = va_arg(ap, char *);
	if (fmt[start] >= '0' && fmt[start] <= '9')
	{
		if (!(width_str = width_string(fmt, &start)))
			return (0);
		atoi = ft_atoi(width_str);
		free(width_str);
	}
	if (check_flags_one_s(l_flags, s, atoi) == 0)
	{
		check_flags_two_s(l_flags, s, atoi);
	}
	return (0);
}
