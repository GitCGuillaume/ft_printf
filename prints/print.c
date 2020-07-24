/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 18:39:51 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/25 10:09:22 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
int	print_w_spec(ssize_t width, ssize_t sum, char c)
{
	size_t	nb_value;

	nb_value = 0;
	if (width != 0)
	{
		while (width > sum)
		{
			ft_putchar_fd(c, 1);
			nb_value++;
			sum++;
		}
	}
	return (nb_value);
}

int	print_width_d(ssize_t width, int d, char c)
{
	ssize_t	i;
	size_t	nb_value;

	i = 0;
	nb_value = 0;
	if (width != 0)
	{
		i = ft_lensize(d);
		while (width > i)
		{
			ft_putchar_fd(c, 1);
			nb_value++;
			i++;
		}
	}
	return (nb_value);
}

int	print_width_s(ssize_t width, char *s, char c)
{
	ssize_t	i;
	size_t	nb_value;

	i = 0;
	nb_value = 0;
	if (width != 0 && s != NULL)
	{
		i = ft_strlen(s);
		while (width > i)
		{
			ft_putchar_fd(c, 1);
			nb_value++;
			i++;
		}
	}
	return (nb_value);
}

int	print_zero_p(size_t atoi, char *p)
{
	size_t	i;

	i = ft_strlen(p);
	while (atoi > i)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
	return (i);
}

