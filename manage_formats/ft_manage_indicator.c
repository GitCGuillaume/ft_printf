/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_indicator.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:59:07 by gchopin           #+#    #+#             */
/*   Updated: 2021/02/12 15:51:02 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	init_list_flags(t_flags *lst_flags)
{
	lst_flags->minus = 0;
	lst_flags->zero = 0;
	lst_flags->point = 0;
	lst_flags->asterisk = 0;
	lst_flags->width = NULL;
	lst_flags->width_specification = NULL;
	lst_flags->space = 0;
}

int		check_value_indicator_one(t_flags *l_flags, char c)
{
	if (c == '-')
	{
		l_flags->minus = 1;
		return (1);
	}
	else if (c == '0')
	{
		l_flags->zero = 1;
		return (1);
	}
	else if (c == ' ')
	{
		l_flags->space = 1;
		return (1);
	}
	return (0);
}

int		check_value_indicator_two(t_flags *l_flags, size_t *i, char const *fmt)
{
	if (fmt)
	{
		if (fmt[*i] == '*')
		{
			if (l_flags->asterisk >= 1)
				l_flags->asterisk = 2;
			else
				l_flags->asterisk = 1;
			return (1);
		}
	}
	return (0);
}

int		find_indicators(const char *fmt, size_t *i, t_flags *l_flags)
{
	*i = *i + 1;
	if (fmt)
	{
		while (fmt[*i])
		{
			if (fmt[*i] == '-')
				check_value_indicator_one(l_flags, fmt[*i]);
			else if (fmt[*i] == '0')
				check_value_indicator_one(l_flags, fmt[*i]);
			else if (fmt[*i] == '*')
				check_value_indicator_two(l_flags, i, fmt);
			else if (fmt[*i] == ' ')
				check_value_indicator_one(l_flags, fmt[*i]);
			else
				return (1);
			*i = *i + 1;
		}
	}
	return (0);
}

int		is_indicator(char const *fmt, size_t *i, t_flags *l_flags)
{
	int	result;

	result = 0;
	if (fmt)
	{
		if (fmt[*i] == '-')
			result = check_value_indicator_one(l_flags, fmt[*i]);
		else if (fmt[*i] == '0')
			result = check_value_indicator_one(l_flags, fmt[*i]);
		else if (fmt[*i] == '*')
			result = check_value_indicator_two(l_flags, i, fmt);
		else if (fmt[*i] == ' ')
			check_value_indicator_one(l_flags, fmt[*i]);
	}
	return (result);
}
