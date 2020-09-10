/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_tool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:15:25 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/10 16:38:20 by gchopin          ###   ########.fr       */
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
	ft_putnbr_fd(value, &nb_print, 1);
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
	ft_putnbr_fd(value, &nb_print, 1);
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
	ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_u_stars(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->zero == 1 && 0 > w_spec)
		return (nb_print += print_u_zero(l_flags, value));
	if (0 > width)
		return (nb_print += print_u_stars_minus(l_flags, value));
	handle_sizes(&width);
	if (value == 0 && w_spec <= -1)
		w_spec = 1;
	if (value == 2147483648 && w_spec >= ft_lensize(value) && width > 0)
		width++;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec,
			ft_lensize(value), value), nb_print, ' ');
	nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_u_stars_minus(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	handle_sizes(&width);
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
