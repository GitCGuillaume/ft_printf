/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_convertor.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:58:14 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/01 09:58:18 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	is_convertor(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (1);
	else if (c == 'p')
		return (1);
	else if (c == 'd')
		return (1);
	else if (c == 'i')
		return (1);
	else if (c == 'u')
		return (1);
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
	else if (c == '%')
		return (1);
	return (0);
}

int	find_convertor(char const *fmt, t_flags *l_flags, va_list ap, size_t *i)
{
	size_t	result;

	result = 0;
	if (fmt[*i] == 'd')
		result = print_d(l_flags, ap);
	else if (fmt[*i] == 'i')
		result = print_d(l_flags, ap);
	else if (fmt[*i] == 'u')
		result = print_u(l_flags, ap);
	else if (fmt[*i] == 's')
		result = print_s(l_flags, ap);
	else if (fmt[*i] == 'p')
		result = print_p(l_flags, ap);
	else if (fmt[*i] == 'c')
		result = print_c(l_flags, ap);
	else if (fmt[*i] == 'x')
		result = print_x(l_flags, ap, "0123456789abcdef");
	else if (fmt[*i] == 'X')
		result = print_x(l_flags, ap, "0123456789ABCDEF");
	else if (fmt[*i] == '%')
		result = print_pct(l_flags, ap);
	return (result);
}
