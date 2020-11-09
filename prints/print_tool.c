/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tool.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:04:10 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/18 14:22:37 by gchopin          ###   ########.fr       */
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
	if (l_flags->point == 1)
	{
		va_arg(ap, int);
		return (1);
	}
	return (0);
}

int		get_two_stars(t_flags *l_flags, va_list ap)
{
	if (l_flags->asterisk == 2)
	{
		del(l_flags->width);
		del(l_flags->width_specification);
		l_flags->width = ft_itoa(va_arg(ap, int));
		l_flags->width_specification = ft_itoa(va_arg(ap, int));
		return (1);
	}
	return (0);
}

int		check_min_max_value_all(t_flags *l_flags)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (width < -2147483646 || width > 2147483646)
			return (-1);
	}
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (w_spec < -2147483648 || w_spec > 2147483646)
		return (-1);
	return (0);
}

ssize_t	calc_u(ssize_t width, ssize_t width_specification,
	ssize_t lensize)
{
	ssize_t	size;

	size = width - lensize;
	if (width_specification >= 0)
	{
		if (width_specification - lensize > 0)
			size -= (width_specification - lensize);
		if (width_specification >= lensize)
			size--;
	}
	return (size);
}
