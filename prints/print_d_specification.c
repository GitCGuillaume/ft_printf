/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_specification.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:26:03 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/08 16:22:24 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
/*
ssize_t	spec_minus_no_ast_d(t_flags *l_flags,
		ssize_t *width, ssize_t w_spec, int d)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (d < 0)
		negative_d(&nb_print, &d);
	if (d == 0 && width > 0 && l_flags->point == 0)
		w_spec++;
	nb_print += print_width_d(w_spec, d, '0');
	if (d != 0)
		ft_putnbr_fd(d, &nb_print, 1);
	if (0 > *width)
		*width = -(*width);
	nb_print += print_w_spec(*width, nb_print, ' ');
	return (nb_print);
}
*/
void	spec_minus_d(t_flags *l_flags, ssize_t *nb_print, int d)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	//if (l_flags->asterisk == 1 && l_flags->point == 0)
	//	width = d;
	/*if (l_flags->asterisk == 1 && l_flags->point == 1
			&& l_flags->width_specification != NULL)
		w_spec = d;
	*/
	/*if (l_flags->asterisk == 1)
		d = va_arg(ap, int);
	*/
	(*nb_print) += print_d_stars_minus(width, w_spec, d);
	/*if (l_flags->asterisk == 0 || (l_flags->asterisk == 1
				&& l_flags->width_specification == NULL))
		(*nb_print) += spec_minus_no_ast_d(l_flags, &width, w_spec, d);
	else
		(*nb_print) += print_d_stars_minus(width, w_spec, d);
	*/
}
/*
void	spec_pnt_no_ast_d(t_flags *l_flags, ssize_t *nb_prt, int d)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (width > w_spec)
	{
		(*nb_prt) += print_w_spec(calc(width, w_spec,
					ft_lensize(d), d), *nb_prt, ' ');
	}
	if (d < 0)
	{
		(*nb_prt)++;
		ft_putchar_fd('-', 1);
		d = -d;
	}
	(*nb_prt) += print_w_spec(w_spec - ft_lensize(d), 0, '0');
	if (d != 0)
		ft_putnbr_fd(d, nb_prt, 1);
}*/
/*
void	spec_point_astrsk_d(va_list ap, t_flags *l_flags,
		ssize_t *nb_prt, ssize_t w_spec)
{
	ssize_t	width;
	int		value;
	char	padding;

	width = ft_atoi(l_flags->width);
	value = va_arg(ap, int);
	padding = ' ';
	handle_sizes(&width);
	if (l_flags->zero == 1 && 0 > w_spec)
		padding = '0';
	if (value == 0 && w_spec <= -1)
		w_spec = 1;
	if (width > w_spec)
		(*nb_prt) += print_w_spec(calc(width, w_spec, ft_lensize(value), value),
				*nb_prt, padding);
	if (0 > value)
	{
		negative_d(nb_prt, &value);
	}
	if (0 > value && w_spec > 0)
		w_spec++;
	(*nb_prt) += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, nb_prt, 1);
}
*/
#include <stdio.h>
ssize_t	check_flags_spec_d(t_flags *l_flags, int d)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	nb_print = 0;
	if (l_flags->point == 1)
	{
	//	if (l_flags->asterisk == 0)
	//	{
	//		nb_print += print_d_stars(l_flags, width, w_spec, d);
	//		return (nb_print);
	//	}
	//	else
	//	{
			nb_print += print_d_stars(l_flags, width, w_spec, d);
			//spec_point_astrsk_d(ap, l_flags, &nb_print, d);
	//		return (nb_print);
	//	}
	}
	return (nb_print);
}
