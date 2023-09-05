/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_tool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:09:57 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/12 11:35:20 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	print_p_rl(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		width = -width;
	if (width > 0)
		width = width - 2;
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	if (addr)
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	if (addr)
		nb_print += print_width_s(width, addr, ' ');
	return (nb_print);
}

ssize_t	print_p_lr(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		return (nb_print += print_p_rl(l_flags, addr));
	if (width > 0)
		width = width - 2;
	if (addr != NULL)
		nb_print += 2;
	if (addr)
		nb_print += print_width_s(width, addr, ' ');
	ft_putstr_fd("0x", 1);
	if (addr)
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_p_zero(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (width > 2)
		width = width - 2;
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	if (addr)
		nb_print += print_width_s(width, addr, '0');
	if (addr)
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	if (0 > width)
	{
		width = -width;
		nb_print += print_width_s(width - 2, addr, ' ');
	}
	return (nb_print);
}

ssize_t	print_p_point_star(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_prec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	if (0 > width)
		return (nb_print += print_p_minus_point_star(l_flags, addr));
	if (addr != NULL)
		nb_print += 2;
	if (addr == NULL)
		return (-1);
	if ((addr[0] == '0' && addr[1] == '\0')
			&& (w_prec == 0 || l_flags->width_precision == NULL))
		width++;
	if (width > w_prec)
		nb_print += print_w_spec(calc(width, w_prec, ft_strlen(addr), 0),
			nb_print, ' ');
	ft_putstr_fd("0x", 1);
	nb_print += print_w_spec(w_prec, ft_strlen(addr), '0');
	if (!(addr[0] == '0' && addr[1] == '\0')
			|| (w_prec <= -1 || w_prec >= 1))
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_p_minus_point_star(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_prec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	if (addr == NULL)
		return (-1);
	if (addr != NULL)
		nb_print += 2;
	ft_putstr_fd("0x", 1);
	nb_print += print_w_spec(w_prec - ft_strlen(addr), 0, '0');
	if (!(addr[0] == '0' && addr[1] == '\0') || (w_prec <= -1 || w_prec >= 1))
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	if (0 > width)
		width = -width;
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}
