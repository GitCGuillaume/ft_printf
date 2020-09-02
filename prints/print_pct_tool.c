/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pct_tool.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:38:57 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/02 11:38:58 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	print_pct_lr(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;
	char	padding;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	padding = ' ';
	if (0 > width)
		return (nb_print += print_c_rl(l_flags, c));
	nb_print += print_width_c(width, padding);
	ft_putchar_fd(c, 1);
	nb_print += 1;
	return (nb_print);
}

ssize_t	print_pct_rl(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	ft_putchar_fd(c, 1);
	nb_print += 1;
	if (0 > width)
		width = -width;
	nb_print += print_width_c(width, ' ');
	return (nb_print);
}
