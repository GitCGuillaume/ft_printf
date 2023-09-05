/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 10:50:36 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 17:45:52 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		find_percentage(t_flags *l_flags, size_t *i,
		ssize_t *nb_prt, const char *fmt)
{
	if (fmt)
	{
		while (fmt[*i])
		{
			init_list_flags(l_flags);
			if (fmt[*i] == '%')
			{
				*i = *i + 1;
				return (1);
			}
			else
			{
				*nb_prt = *nb_prt + 1;
				write(1, &fmt[*i], 1);
				*i = *i + 1;
			}
		}
	}
	return (0);
}

int		browse_fmt(t_flags *l_flags, va_list ap, size_t *i, char const *fmt)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (fmt)
	{
		if (is_indicator(fmt, i, l_flags) == 1)
			find_indicators(fmt, i, l_flags);
		is_digit(l_flags, i, fmt);
		is_specification(l_flags, ap, fmt, i);
		if (is_convertor(fmt[*i]))
		{
			nb_print += find_convertor(fmt, l_flags, ap, i);
			(*i)++;
			del(l_flags->width);
			del(l_flags->width_precision);
			l_flags->width = NULL;
			l_flags->width_precision = NULL;
			return (nb_print);
		}
		else
			return (nb_print);
	}
	return (nb_print);
}

void	del(void *lst)
{
	if (lst)
		free(lst);
}

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;
	t_flags		l_flags;
	size_t		i;
	ssize_t		nb_print;
	ssize_t		res;

	i = 0;
	nb_print = -1;
	res = 0;
	if (fmt)
	{
		nb_print = 0;
		va_start(ap, fmt);
		while (fmt[i] && res != -1)
		{
			res = 0;
			if (find_percentage(&l_flags, &i, &nb_print, fmt) == 1)
				res = browse_fmt(&l_flags, ap, &i, fmt);
			if (res == -1)
				return (-1);
			nb_print += res;
		}
		va_end(ap);
	}
	return (nb_print);
}
