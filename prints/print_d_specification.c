/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_specification.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:26:03 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/09 11:51:11 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	spec_minus_d(t_flags *l_flags, ssize_t *nb_print, int d)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	(*nb_print) += print_d_stars_minus(width, w_spec, d);
}

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
		nb_print += print_d_stars(l_flags, width, w_spec, d);
	}
	return (nb_print);
}
