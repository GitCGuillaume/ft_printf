/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_special.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:07:56 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/03 15:23:46 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	handle_sizes(ssize_t *width)
{
	if (0 > *width)
	{
		*width = -(*width);
	}
}

ssize_t	astrsk_d_lr(va_list ap, int d)
{
	ssize_t	nb_print;
	ssize_t	width;
	int		value;

	nb_print = 0;
	width = d;
	value = 0;
	if (width < 0)
	{
		nb_print += astrsk_d_rl(ap, d);
		return (nb_print);
	}
	value = va_arg(ap, int);
	nb_print += print_basic_value_d(&width, value, ' ');
	return (nb_print);
}

ssize_t	astrsk_d_rl(va_list ap, int d)
{
	ssize_t	nb_print;
	ssize_t	width;
	int		value;

	nb_print = 0;
	width = 0;
	width = d;
	value = va_arg(ap, int);
	if (value < 0)
		negative_d(&nb_print, &value);
	if (0 > width)
		width = -width;
	ft_putnbr_fd(value, &nb_print, 1);
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	print_d_stars_minus(ssize_t width, ssize_t w_spec, int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	handle_sizes(&width);
	if (0 > value)
	{
		negative_d(&nb_print, &value);
		if (0 > value && w_spec > 0)
			w_spec++;
	}
	if (value == 0 && w_spec <= -1)
		w_spec = 1;
	if (w_spec > 0)
		nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	if (width > w_spec)
		nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	print_d_stars(t_flags *l_flags, ssize_t width, ssize_t w_spec, int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	handle_sizes(&width);
	if (l_flags->zero == 1 && 0 > w_spec)
		return (nb_print += print_zero_d(&width, value));
	if (value == 0 && w_spec <= -1)
		w_spec = 1;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value),
				nb_print, ' ');
	if (0 > value)
		negative_d(&nb_print, &value);
	if (0 > value && w_spec > 0)
		w_spec++;
	nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}
