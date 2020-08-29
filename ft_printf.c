/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 10:50:36 by gchopin           #+#    #+#             */
/*   Updated: 2020/08/29 13:40:27 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			find_percentage(t_flags *lst_flags, size_t *i, ssize_t *nb_print, const char *fmt)
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
			*nb_print = *nb_print + 1;
			write(1, &fmt[*i], 1);
			*i = *i + 1;
		}
	}
	return (0);
}
#include <stdio.h>
int	browse_fmt(t_flags *l_flags, va_list ap, size_t *i, char const *fmt)
{
	size_t	nb_print;

	nb_print = 0;
	while (fmt[*i])
	{
		printf("l_flags->%d%c", l_flags->percentage, fmt[*i]);
		if (is_indicator(fmt, i, l_flags) == 1)
			find_indicators(fmt, i, l_flags);
		printf("l_flags->%d%c", l_flags->percentage, fmt[*i]);
		is_digit(l_flags, i, fmt);
		is_specification(l_flags, ap, fmt, i);
		if (is_convertor(fmt[*i]))
		{
			nb_print += find_convertor(fmt, l_flags, ap, i);
			(*i)++;
			return (nb_print);
		}
		else
			return (nb_print);
		(*i)++;
	}
	return (nb_print);
}

void del(void *lst)
{
	if (lst)
		free(lst);
}
#include <stdio.h>
int				ft_printf(const char *fmt, ...)
{
	va_list		ap;
	t_flags	l_flags;
	size_t		i;
	ssize_t		nb_print;
	
	i = 0;
	nb_print = 0;
	va_start(ap, fmt);
	while (fmt[i] && nb_print != -1)
	{
		if (find_percentage(&l_flags, &i, &nb_print, fmt) == 1)
		{
			nb_print += browse_fmt(&l_flags, ap, &i, fmt);
		}
		//i++;
	}
	/*while (fmt[i])
	{
		write(1, &fmt[i], 1);
		nb_print++;
		i++;
	}*/
	va_end(ap);
	return (nb_print);
}
