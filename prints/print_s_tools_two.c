/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_tools_two.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:54:49 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/14 14:56:14 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		check_min_max_value_s(t_flags *l_flags)
{
	ssize_t	width;
	ssize_t	w_prec;

	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (width < -2147483646 || width > 2147483646)
			return (-1);
	}
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (w_prec < -2147483648)
		return (-1);
	return (0);
}
