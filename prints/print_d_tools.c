/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:52:21 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 20:42:13 by gchopin          ###   ########.fr       */
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

/*
 ** Need to substract space width and
 ** precision width
*/

ssize_t	calc(ssize_t width, ssize_t width_precision, ssize_t lensize, int d)
{
	ssize_t	size;

	size = width - lensize;
	if (width_precision >= 0)
	{
		if (width_precision - lensize > 0)
			size -= (width_precision - lensize);
		if (d < 0 && width_precision >= lensize)
			size--;
	}
	return (size);
}
