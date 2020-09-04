/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:58:38 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/04 16:52:06 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t		print_zero_d(ssize_t *width, int value)
{
	ssize_t	nb_print;
	ssize_t	width_copy;
	int		value_copy;

	nb_print = 0;
	width_copy = *width;
	value_copy = value;
	if (0 > width_copy)
		width_copy = -width_copy;
	if (value == 0)
		width_copy--;
	if (0 > value)
		negative_d(&nb_print, &value);
	if (*width > 0)
		nb_print += print_w_spec(width_copy - ft_lensize(value_copy), 0, '0');
	ft_putnbr_fd(value, &nb_print, 1);
	if (0 > *width)
		nb_print += print_width_d(width_copy, value_copy, ' ');
	return (nb_print);
}

ssize_t		check_flags_two_d(t_flags *l_flags, va_list ap, int d)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (l_flags->minus == 1)
	{
		spec_minus_d(l_flags, ap, &nb_print, d);
	}
	else if (l_flags->asterisk == 1 && l_flags->point == 0)
	{
		nb_print += astrsk_d_lr(ap, d);
	}
	else if (l_flags->point == 1 && l_flags->minus == 0)
	{
		if (width < 0)
			spec_minus_d(l_flags, ap, &nb_print, d);
		else
			nb_print = check_flags_spec_d(l_flags, ap, d);
	}
	return (nb_print);
}

ssize_t		check_flags_one_d(t_flags *l_flags, va_list ap, int d)
{
	ssize_t	width;
	ssize_t	nb_print;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		nb_print += print_basic_value_d(&width, d, ' ');
		return (nb_print);
	}
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
	{
		if (l_flags->asterisk == 1)
		{
			width = d;
			d = va_arg(ap, int);
		}
		nb_print += print_zero_d(&width, d);
	}
	return (nb_print);
}

ssize_t		print_d(t_flags *l_flags, va_list ap)
{
	int		d;
	ssize_t	result;

	d = va_arg(ap, int);
	result = 0;
	if ((result = check_min_max_value(l_flags, d)) == 0)
	{
		if (l_flags->asterisk == 2)
			result = browse_two_stars_d(ap, l_flags, d);
		else if ((result = check_flags_one_d(l_flags, ap, d)) == 0)
		{
			result = check_flags_two_d(l_flags, ap, d);
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
