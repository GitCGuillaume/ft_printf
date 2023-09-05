/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tool.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:04:10 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 20:41:52 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		get_one_star(t_flags *l_flags, va_list ap)
{
	if (l_flags->asterisk == 1 && l_flags->point == 0)
	{
		del(l_flags->width);
		l_flags->width = ft_itoa(va_arg(ap, int));
		return (1);
	}
	return (0);
}

int		check_min_max_value_all(t_flags *l_flags)
{
	ssize_t	width;
	ssize_t	w_prec;

	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (width < -2147483646 || width > 2147483646)
			return (-1);
	}
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (w_prec < -2147483648 || w_prec > 2147483646)
		return (-1);
	return (0);
}

/*
 ** Need to substract space width and
 ** precision width
*/

ssize_t	calc_u(ssize_t width, ssize_t width_precision,
		ssize_t lensize)
{
	ssize_t	size;

	size = width - lensize;
	if (width_precision >= 0)
	{
		if (width_precision - lensize > 0)
			size -= (width_precision - lensize);
	}
	return (size);
}
