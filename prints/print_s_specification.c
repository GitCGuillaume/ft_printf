/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_specification.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:05:11 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/02 14:01:17 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	spec_pnt_no_ast_s(t_flags *l_flags, ssize_t *nb_prt, char *value)
{
	ssize_t	width;
	ssize_t	w_spec;
	char	*width_to_str;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	width_to_str = ft_strlimit(value, w_spec);
	if (l_flags->zero == 0)
		(*nb_prt) += print_w_spec(width, ft_strlen(width_to_str), ' ');
	else
		(*nb_prt) += print_w_spec(width, ft_strlen(width_to_str), '0');
	if (w_spec > 0)
		ft_putstr_limit_fd(value, w_spec, nb_prt, 1);
	free(width_to_str);
}

ssize_t	spec_pnt_ast_s(t_flags *l_flags, ssize_t *nb_prt, char *s)
{
	ssize_t	width;
	ssize_t	w_spec;
	char	*strlimit;
	char	padding;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	strlimit = 0;
	padding = ' ';
	if (l_flags->zero == 1 && width > 0)
		padding = '0';
	if (0 > w_spec)
		w_spec = ft_strlen(s);
	if (l_flags->asterisk == 1 && w_spec == 0
			&& l_flags->width_specification == NULL)
		w_spec = ft_strlen(s);
	if (0 > width)
		return ((*nb_prt) += spec_minus_ast_s(l_flags, s));
	strlimit = ft_strlimit(s, w_spec);
	if (w_spec > 0 && l_flags->width_specification != NULL)
		(*nb_prt) += astrsk_s_lr(width, strlimit, padding);
	else
		(*nb_prt) += print_width_s(width, 0, padding);
	free(strlimit);
	return (*nb_prt);
}

ssize_t	spec_minus_ast_s(t_flags *l_flags, char *value)
{
	ssize_t	width;
	ssize_t	w_spec;
	ssize_t	nb_print;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (0 > width)
		width = -width;
	if (0 > w_spec)
		w_spec = ft_strlen(value);
	if (l_flags->asterisk == 1 && w_spec == 0
			&& l_flags->width_specification == NULL)
		w_spec = ft_strlen(value);
	if (w_spec > 0 && l_flags->width_specification != NULL)
		ft_putstr_limit_fd(value, w_spec, &nb_print, 1);
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	spec_minus_no_ast_s(t_flags *l_flags, char *value)
{
	ssize_t	width;
	ssize_t	nb_print;
	size_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	nb_print = 0;
	if (0 > width)
		width = -width;
	if (l_flags->point == 0)
		nb_print += astrsk_s_rl(width, value, ' ');
	else
	{
		if (w_spec > 0)
			ft_putstr_limit_fd(value, w_spec, &nb_print, 1);
		nb_print += print_w_spec(width, nb_print, ' ');
	}
	return (nb_print);
}
