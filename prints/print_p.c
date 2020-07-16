/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_indicators_s.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:58:32 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/25 14:49:42 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_p_space(t_flags *l_flags, void *addr, size_t atoi)
{
	char *nbr_hex;

	if (!(nbr_hex = ft_putnbr_base(addr, "0123456789abcdef")))
		return (0);
	if (atoi  > 2)
		atoi = atoi - 2;
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		print_space_s(atoi, nbr_hex);
		ft_putchar_fd('0', 1);
		ft_putchar_fd('x', 1);
		ft_putstr_fd(nbr_hex, 1);
	}
	else if (l_flags->zero == 0 && l_flags->minus == 1
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		ft_putchar_fd('0', 1);
		ft_putchar_fd('x', 1);
		ft_putstr_fd(nbr_hex, 1);
		print_space_s(atoi, nbr_hex);
	}
	free(nbr_hex);
	return (1);
}

int	print_p_zero(t_flags *l_flags, void *addr, size_t atoi)
{
	char *nbr_hex;

	if (!(nbr_hex = ft_putnbr_base(addr, "0123456789abcdef")))
		return (0);
	if (l_flags->zero == 1 && l_flags->minus == 0
		&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (atoi > 2)
			atoi = atoi - 2;
		ft_putchar_fd('0', 1);
		ft_putchar_fd('x', 1);
		print_zero_p(atoi, nbr_hex);
		ft_putstr_fd(nbr_hex, 1);
		free(nbr_hex);
		return (1);
	}
	free(nbr_hex);
	return (0);
}

int print_p(t_flags *l_flags, void *addr)
{
	//char	*width_str;
	size_t atoi;

	//width_str = 0;
	atoi = 0;
	/*if (fmt[start] >= '0' && fmt[start] <= '9')
	{
		if (!(width_str = width_string(fmt, &start)))
			return (0);
		atoi = ft_atoi(width_str);
		free(width_str);
	}*/
	print_p_space(l_flags, addr, atoi);
	print_p_zero(l_flags, addr, atoi);
	return (0);
}
