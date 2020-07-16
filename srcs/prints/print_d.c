/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_indicators_d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin </var/mail/gchopin>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 14:49:22 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/25 11:32:38 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

#include <stdio.h>

int		check_flags_one_d(t_flags *l_flags, va_list ap, int d)
{
	//va_list	ap2;
	//int	d_copy;
	//size_t	result;
	ssize_t	width;
	size_t	nb_print;
	//result = 0;
	//d_copy = 0;
	nb_print = 0;
	(void)ap;

	width = ft_atoi(l_flags->width);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (d == 0)
			width--;
		nb_print += print_width_d(width, d, ' ');
		ft_putnbr_fd(d, &nb_print, 1);
		return (nb_print);
	}
	else if (l_flags->minus == 1)
	{
		specification_minus_d(l_flags, &nb_print, d);
		return (nb_print);
	}
	else if ()
	/*else if (l_flags->point == 1 && l_flags->asterisk == 1)
	{
		va_copy(ap2, ap);
		d_copy = va_arg(ap2, int);
		if (d > 0)
			result = print_zero_d(d, d_copy);
		d = va_arg(ap, int);
		ft_putnbr_fd(d, 1);
		va_end(ap2);
		return (result);
	}*/
	return (nb_print);
}
/*
int		check_flags_two_d(t_flags *l_flags, int d, size_t atoi)
{
	size_t	result;

	result = 0;
	if (l_flags->point == 1)
	{
		result = print_zero_d(atoi, d);
		ft_putnbr_fd(d, 1);
		return (result);
	}
	else if (l_flags->minus == 1)
	{
		ft_putnbr_fd(d, 1);
		result = print_space_d(atoi, d);
		return (result);
	}
	else if (l_flags->minus == 0 && l_flags->zero == 1)
	{
		result = print_zero_d(atoi, d);
		ft_putnbr_fd(d, 1);
		return (result);
	}
	return (0);
}*/

int		print_d(/*char const *fmt,*/ t_flags *l_flags, va_list ap)
{
	int	d;
	size_t	result;

	d = va_arg(ap, int);
	result = 0;
	if ((result = check_flags_one_d(l_flags, ap, d)) == 0)
	{
	//	result = check_flags_two_d(l_flags, d, atoi);
	}
	return (result);
}
