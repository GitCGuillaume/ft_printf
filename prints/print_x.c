/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:05:20 by gchopin           #+#    #+#             */
/*   Updated: 2021/02/13 17:54:24 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	check_flags_one_x(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (hexa)
	{
		if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
			return (nb_print += print_x_zero(l_flags, hexa));
		if (l_flags->minus == 1 && l_flags->point == 0)
			return (nb_print += print_x_rl(l_flags, hexa));
		if (l_flags->minus == 0 && l_flags->point == 0)
			return (nb_print += print_x_lr(l_flags, hexa));
		if (l_flags->point == 1 && l_flags->minus == 0)
			return (print_x_point_star(l_flags, hexa));
		if (l_flags->point == 1 && l_flags->minus == 1)
			return (print_x_minus_point_star(l_flags, hexa));
	}
	return (nb_print);
}

ssize_t	print_hexa_x(va_list ap, t_flags *l_flags, char *base)
{
	ssize_t			nb_print;
	unsigned int	value;
	char			*hexa;

	hexa = 0;
	value = va_arg(ap, unsigned int);
	nb_print = 0;
	hexa = ft_putnbr_base_x(value, base);
	if (hexa == NULL)
	{
		return (-1);
	}
	if (hexa[0] == '\0')
	{
		free(hexa);
		if (!(hexa = ft_strdup("0")))
			return (-1);
	}
	if (hexa)
		nb_print += check_flags_one_x(l_flags, hexa);
	free(hexa);
	return (nb_print);
}

ssize_t	print_x(t_flags *l_flags, va_list ap, char *base)
{
	ssize_t	result;

	result = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	result = check_min_max_value_all(l_flags);
	if (result == 0)
	{
		if (base)
			result = print_hexa_x(ap, l_flags, base);
	}
	return (result);
}
