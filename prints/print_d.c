/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:58:38 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/10 13:42:26 by gchopin          ###   ########.fr       */
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

ssize_t		check_flags_one_d(t_flags *l_flags, int d)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_zero_d(&width, d));
	if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += astrsk_d_rl(l_flags, d));
	if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += astrsk_d_lr(l_flags, d));
	if (l_flags->minus == 0 && l_flags->point == 1 && width >= 0)
		return (nb_print += print_d_stars(l_flags, width, w_spec, d));
	else if (0 > width && l_flags->minus == 0 && l_flags->point == 1)
		return (nb_print += print_d_stars_minus(width, w_spec, d));
	if (l_flags->minus == 1 && l_flags->point == 1)
		return (nb_print += print_d_stars_minus(width, w_spec, d));
	return (nb_print);
}

ssize_t		print_d(t_flags *l_flags, va_list ap)
{
	int		value;
	ssize_t	result;

	result = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	value = va_arg(ap, int);
	if ((result = check_min_max_value(l_flags)) == 0)
	{
		result += check_flags_one_d(l_flags, value);
	}
	//del(l_flags->width);
	//del(l_flags->width_specification);
	return (result);
}
