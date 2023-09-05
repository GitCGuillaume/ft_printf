/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_specification.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:43:27 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 11:47:55 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	asterisk_precision_wd(t_flags *l_flags, va_list ap)
{
	int	d_copy;

	d_copy = va_arg(ap, int);
	l_flags->width_precision = ft_itoa(d_copy);
	if (l_flags->asterisk == 0)
		l_flags->asterisk = 1;
	else
		l_flags->asterisk = 2;
}

void	asterisk_width(t_flags *l_flags, va_list ap)
{
	int	d_copy;

	d_copy = va_arg(ap, int);
	l_flags->width = ft_itoa(d_copy);
}

/*
 ** Check width and width precision
 ** get width from string or from asterisk
*/

void	is_specification(t_flags *l_flags, va_list ap,
		char const *fmt, size_t *i)
{
	if (fmt)
	{
		if (fmt[*i] == '.')
		{
			if (fmt[*i - 1] == '*')
				asterisk_width(l_flags, ap);
			if (l_flags->point >= 1)
				l_flags->point = 2;
			else
			{
				*i = *i + 1;
				l_flags->point = 1;
				if (fmt[*i] >= '0' && fmt[*i] <= '9')
					l_flags->width_precision = width_string(fmt, i);
				else if (fmt[*i] == '*' && l_flags->width_precision == 0)
				{
					asterisk_precision_wd(l_flags, ap);
					*i = *i + 1;
				}
				else
					l_flags->width_precision = 0;
			}
		}
	}
}
