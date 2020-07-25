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

#include "../ft_printf.h"
#include <stdio.h>


size_t		check_flags_two_d(t_flags *l_flags, va_list ap, int d)
{
	size_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	//if (l_flags->asterisk == 1)
	//	nb_print += astrsk_d_lr(ap, l_flags, d, &width);
	if(l_flags->point == 1)
	{
		nb_print = check_flags_spec_d(l_flags, ap, d);
		return (nb_print);
	}
	else if (l_flags->zero == 1)
	{
		if (l_flags->asterisk == 1)
			d = va_arg(ap, int);
		if (d < 0)
		{
			nb_print++;
			ft_putchar_fd('-', 1);
			d = -d;
			width--;
		}
		if (d == 0)
			width--;
		nb_print += print_width_d(width, d, '0');
		ft_putnbr_fd(d, &nb_print, 1);
		return (nb_print);
	}
	return (nb_print);
}

size_t		check_flags_one_d(t_flags *l_flags, va_list ap, int d)
{
	ssize_t	width;
	size_t	nb_print;

	nb_print = 0;
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
		spec_minus_d(l_flags, ap,&nb_print, d);
		return (nb_print);
	}
	else if (l_flags->asterisk == 1)
		nb_print += astrsk_d_lr(ap, l_flags, d, &width);	
	return (nb_print);
}

size_t		print_d(t_flags *l_flags, va_list ap)
{
	int	d;
	size_t	result;

	d = va_arg(ap, int);
	result = 0;
	if (l_flags->percentage == 0)
	{
		if ((result = check_flags_one_d(l_flags, ap, d)) == 0)
		{
			result = check_flags_two_d(l_flags, ap, d);
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
