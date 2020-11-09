/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:00:30 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/01 10:00:31 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*width_string(char const *fmt, size_t *i)
{
	unsigned int	min;
	char			*width;

	min = *i;
	width = 0;
	while (fmt[*i] >= '0' && fmt[*i] <= '9')
		*i = *i + 1;
	if ((fmt[min] >= '0' && fmt[min] <= '9')
			&& (fmt[*i - 1] >= '0' && fmt[*i - 1] <= '9'))
	{
		width = ft_substr(fmt, min, *i - min);
		if (width == NULL)
			return (NULL);
	}
	return (width);
}

ssize_t	ft_lensize(ssize_t n)
{
	ssize_t	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int		is_digit(t_flags *l_flags, size_t *i, char const *fmt)
{
	if (fmt[*i] >= '1' && fmt[*i] <= '9')
	{
		if (l_flags->width == 0)
			l_flags->width = width_string(fmt, i);
		return (1);
	}
	return (0);
}
