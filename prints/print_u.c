/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:55:56 by gchopin           #+#    #+#             */
/*   Updated: 2021/03/23 14:41:47 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	check_flags_u_one(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_u_zero(l_flags, value));
	if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_u_rl(l_flags, value));
	if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_u_lr(l_flags, value));
	if (l_flags->minus == 0 && l_flags->point == 1)
		return (nb_print += print_u_stars(l_flags, value));
	if (l_flags->minus == 1 && l_flags->point == 1)
		return (nb_print += print_u_stars_minus(l_flags, value));
	return (nb_print);
}

ssize_t	print_u(t_flags *l_flags, va_list ap)
{
	ssize_t			result;
	unsigned int	value;

	result = 0;
	value = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	value = va_arg(ap, unsigned int);
	result = check_min_max_value_all(l_flags);
	if (result == 0)
	{
		result += check_flags_u_one(l_flags, value);
	}
	return (result);
}
