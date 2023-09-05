/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_tool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:56:39 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 11:32:54 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	print_x_lr(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		return (nb_print += print_x_rl(l_flags, hexa));
	if (hexa)
	{
		nb_print += print_width_s(width, hexa, ' ');
		ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	}
	return (nb_print);
}

ssize_t	print_x_rl(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		width = -width;
	if (hexa)
	{
		ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
		nb_print += print_width_s(width, hexa, ' ');
	}
	return (nb_print);
}

ssize_t	print_x_zero(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		return (nb_print += print_x_rl(l_flags, hexa));
	if (hexa)
	{
		nb_print += print_width_s(width, hexa, '0');
		ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	}
	return (nb_print);
}

ssize_t	print_x_point_star(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_prec;
	char	padding;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	padding = ' ';
	if (0 > width)
		return (nb_print += print_x_minus_point_star(l_flags, hexa));
	if (l_flags->zero && 0 > w_prec)
		padding = '0';
	if (hexa)
	{
		if ((hexa[0] == '0' && hexa[1] == '\0') && w_prec == 0)
			width++;
		if (width > w_prec)
			nb_print += print_w_spec(calc(width, w_prec, ft_strlen(hexa), 0),
					nb_print, padding);
		nb_print += print_w_spec(w_prec, ft_strlen(hexa), '0');
		if (w_prec != 0 || !(hexa[0] == '0' && hexa[1] == '\0'))
			ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	}
	return (nb_print);
}

ssize_t	print_x_minus_point_star(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_prec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	if (0 > width)
		width = -width;
	if (hexa)
	{
		nb_print += print_w_spec(w_prec - ft_strlen(hexa), 0, '0');
		if (w_prec != 0 || !(hexa[0] == '0' && hexa[1] == '\0'))
			ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
		nb_print += print_w_spec(width, nb_print, ' ');
	}
	return (nb_print);
}
