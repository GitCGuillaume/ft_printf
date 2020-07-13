/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 10:50:36 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/23 12:15:18 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"

int			find_percentage(const char *fmt, size_t *i, t_list_flags *lst_flags)
{
	while (fmt[*i])
	{
		if (fmt[*i] == '%')
		{
			init_list_flags(lst_flags);
			*i = *i + 1;
			return (1);
		}
		else
		{
			write(1, &fmt[*i], 1);
			*i = *i + 1;
		}
	}
	return (0);
}
#include <stdio.h>
int				ft_printf(const char *fmt, ...)
{
	va_list		ap;
	t_list_flags	l_flags;
	size_t		i;
	size_t		result;

	i = 0;
	result = 0;
	//(void)l_flags;
	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if (find_percentage(fmt, &i, &l_flags) == 1)
		{
			//if (is_indicator(fmt, &i, &l_flags) == 1)
			//	find_indicators(fmt, &i, &l_flags);
			//is_digit(&l_flags, &i, fmt);
			//is_specification(&l_flags, fmt, &i);
			//if (is_convertor(fmt[i]))
			//	find_convertor(fmt, &l_flags, ap, &i);
		}
		i++;
	}
	va_end(ap);
	return (result);
}
