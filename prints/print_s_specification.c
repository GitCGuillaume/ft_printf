/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_specification.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:05:11 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/14 11:29:51 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	spec_pnt_ast_s(t_flags *l_flags, ssize_t *nb_prt, char *s)
{
	char	*strlimit;
	ssize_t	width;
	ssize_t	w_prec;
	char	padding;

	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	padding = ' ';
	if (l_flags->zero == 1 && width > 0)
		padding = '0';
	if (0 > w_prec)
		w_prec = ft_strlen(s);
	if (l_flags->asterisk == 1 && l_flags->width_precision == NULL)
		w_prec = ft_strlen(s);
	if (0 > width)
		return ((*nb_prt) += spec_minus_s(l_flags, s));
	strlimit = ft_strlimit(s, w_prec);
	if (strlimit == NULL)
		return (*nb_prt = -1);
	if (w_prec > 0 && l_flags->width_precision != NULL)
		(*nb_prt) += astrsk_s_lr(width, strlimit, padding);
	else
		(*nb_prt) += print_width_s(width, 0, padding);
	free(strlimit);
	return (*nb_prt);
}

ssize_t	spec_minus_s(t_flags *l_flags, char *value)
{
	ssize_t	width;
	ssize_t	nb_print;
	size_t	w_prec;

	width = ft_atoi(l_flags->width);
	w_prec = ft_atoi(l_flags->width_precision);
	nb_print = 0;
	if (0 > width)
		width = -width;
	if (value)
	{
		if (l_flags->point == 0)
			nb_print += astrsk_s_rl(width, value, ' ');
		else
		{
			if (w_prec > 0)
				ft_putstr_limit_fd(value, w_prec, &nb_print, 1);
			nb_print += print_w_spec(width, nb_print, ' ');
		}
	}
	return (nb_print);
}

ssize_t	print_s_zero(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	width;
	char	padding;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	padding = '0';
	if (value == NULL)
		return (-1);
	if (0 > width)
		padding = ' ';
	if (l_flags->minus == 0 && width > 0)
		nb_print += astrsk_s_lr(width, value, padding);
	else if (l_flags->minus == 0)
		nb_print += astrsk_s_rl(width, value, padding);
	else if (l_flags->minus == 1)
	{
		if (0 > width)
			width = -width;
		if (value)
			nb_print += astrsk_s_rl(width, value, ' ');
	}
	return (nb_print);
}
