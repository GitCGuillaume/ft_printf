/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:52:21 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/09 11:53:07 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	negative_d(ssize_t *nb_print, int *d)
{
	if (*d < 0)
	{
		(*nb_print)++;
		ft_putchar_fd('-', 1);
		(*d) = -(*d);
	}
}

ssize_t	print_basic_value_d(ssize_t *width, int d, char c)
{
	ssize_t	nb_print;
	int		value;

	nb_print = 0;
	value = d;
	if (0 > d)
	{
		d = -d;
	}
	if (0 > *width)
	{
		*width = -(*width);
	}
	if (d == 0)
	{
		(*width)--;
	}
	nb_print += print_width_d(*width, value, c);
	if (0 > value)
	{
		negative_d(&nb_print, &value);
	}
	ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}

ssize_t	calc(ssize_t width, ssize_t width_specification, ssize_t lensize, int d)
{
	ssize_t	size;

	size = width - lensize;
	if (width_specification >= 0)
	{
		if (width_specification - lensize > 0)
			size -= (width_specification - lensize);
		if (d < 0 && width_specification >= lensize)
			size--;
	}
	return (size);
}

int		check_min_max_value(t_flags *l_flags)
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
	if (l_flags->point == 0 && l_flags->asterisk == 1)
	{
		if (width < -2147483646 || width > 2147483646)
			return (-1);
	}
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (w_spec > 2147483646)
		return (-1);
	return (0);
}
