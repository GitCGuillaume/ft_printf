/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:03:28 by gchopin           #+#    #+#             */
/*   Updated: 2021/02/05 14:00:55 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	check_flags_one_p(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_p_zero(l_flags, addr));
	if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_p_rl(l_flags, addr));
	if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_p_lr(l_flags, addr));
	if (l_flags->point == 1 && l_flags->minus == 0)
		return (print_p_point_star(l_flags, addr));
	if (l_flags->point == 1 && l_flags->minus == 1)
		return (print_p_minus_point_star(l_flags, addr));
	return (nb_print);
}
#include <stdio.h>
ssize_t	print_hexa(va_list ap, t_flags *l_flags)
{
	ssize_t	nb_print;
	void	*addr;
	char	*hexa;

	hexa = 0;
	addr = va_arg(ap, void *);
	nb_print = 0;
	hexa = ft_putnbr_base(addr, "0123456789abcdef");
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
		nb_print += check_flags_one_p(l_flags, hexa);
	free(hexa);
	return (nb_print);
}

ssize_t	print_p(t_flags *l_flags, va_list ap)
{
	ssize_t	result;
	ssize_t	minus;

	result = 0;
	minus = -1;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	result = check_min_max_value_all(l_flags);
	if (result != minus)
	{
		result = print_hexa(ap, l_flags);
	}
	return (result);
}
