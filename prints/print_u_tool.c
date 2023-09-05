/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_tool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:15:25 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 11:29:58 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	print_u_zero(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	width_copy;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	width_copy = width;
	if (0 > width)
		width_copy = -width_copy;
	if (value == 0 && width != 0)
		width_copy--;
	if (width > 0)
		nb_print += print_width_u(width_copy, value, '0');
	ft_putnbr_fd_u(value, &nb_print, 1);
	if (0 > width)
	{
		nb_print += print_width_u(width_copy, value, ' ');
	}
	return (nb_print);
}

ssize_t	print_u_rl(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (0 > width)
		width = -width;
	ft_putnbr_fd_u(value, &nb_print, 1);
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	print_u_lr(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (0 > width)
		return (nb_print += print_u_rl(l_flags, value));
	if (value == 0)
		width--;
	nb_print += print_width_u(width, value, ' ');
	ft_putnbr_fd_u(value, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_u_stars(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_prec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	if (l_flags->zero == 1 && 0 > w_prec)
		return (nb_print += print_u_zero(l_flags, value));
	if (0 > width)
		return (nb_print += print_u_stars_minus(l_flags, value));
	handle_sizes(&width);
	if (value == 0 && w_prec <= -1)
		w_prec = 1;
	if (width > w_prec)
		nb_print += print_w_spec(calc_u(width, w_prec,
			ft_lensize(value)), nb_print, ' ');
	nb_print += print_w_spec(w_prec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd_u(value, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_u_stars_minus(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_prec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	handle_sizes(&width);
	if (value == 0 && w_prec <= -1)
		w_prec = 1;
	if (w_prec > 0)
		nb_print += print_w_spec(w_prec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd_u(value, &nb_print, 1);
	if (width > w_prec)
		nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}
