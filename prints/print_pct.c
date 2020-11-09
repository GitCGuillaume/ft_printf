/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:33:59 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/11 14:44:43 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	print_pct_zero(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;
	char	padding;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	padding = '0';
	if (0 > width)
		padding = ' ';
	if (width > 0)
		nb_print += print_width_c(width, padding);
	ft_putchar_fd(c, 1);
	nb_print += 1;
	if (0 > width)
		nb_print += print_width_c(-width, padding);
	return (nb_print);
}

ssize_t	print_pct_minus_point_star(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (0 > width)
		width = -width;
	ft_putchar_fd(c, 1);
	nb_print += 1;
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	print_pct_point_star(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;
	char	padding;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	padding = ' ';
	if (0 > width)
		return (nb_print += print_pct_minus_point_star(l_flags, c));
	if (l_flags->zero == 1)
		padding = '0';
	nb_print += print_width_c(width, padding);
	nb_print += 1;
	ft_putchar_fd(c, 1);
	return (nb_print);
}

ssize_t	check_flags_one_pct(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_pct_zero(l_flags, c));
	else if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_pct_rl(l_flags, c));
	else if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_pct_lr(l_flags, c));
	else if (l_flags->point == 1 && l_flags->minus == 0)
		return (print_pct_point_star(l_flags, c));
	else if (l_flags->point == 1 && l_flags->minus == 1)
		return (print_pct_minus_point_star(l_flags, c));
	return (nb_print);
}

ssize_t	print_pct(t_flags *l_flags, va_list ap)
{
	ssize_t			result;
	unsigned char	c;

	result = 0;
	c = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	c = '%';
	result = check_min_max_value_c(l_flags);
	if (result == 0)
		result = check_flags_one_pct(l_flags, c);
	return (result);
}
