/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_specification.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin </var/mail/gchopin>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:25:36 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/24 13:27:59 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../ft_printf.h"
#include <stdio.h>

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
		if (!(width = ft_substr(fmt, min, *i - min)))
			return (NULL);
	}
	return (width);
}

int	ft_lensize(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
#include <stdio.h>
int	is_digit(t_list_flags *l_flags, size_t *i, char const *fmt)
{
	if (fmt[*i] >= '1' && fmt[*i] <= '9')
	{
		l_flags->width = width_string(fmt, i);
		//printf("width == %s\n", l_flags->width);
		return (1);
	}
	return (0);
}
