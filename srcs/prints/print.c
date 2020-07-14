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

#include "../../ft_printf.h"
#include <stdio.h>
int	print_width_d(char *width, int d, char c)
{
	size_t	i;
	size_t	atoi;
	size_t	nb_value;

	i = 0;
	atoi = 0;
	nb_value = 0;
	if (width != NULL)
	{
		atoi = ft_atoi(width);
		i = ft_lensize(d);
		while (atoi > i)
		{
			ft_putchar_fd(c, 1);
			nb_value++;
			i++;
		}
	}
	return (nb_value);
}

/*int	print_space_d(size_t atoi, int d)
{
	size_t	i;

	i = ft_lensize(d);
	while (atoi > i)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	return (i);
}

int	print_zero_d(size_t atoi, int d)
{
	size_t	i;

	i = ft_lensize(d);
	while (atoi > i)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
	return (i);
}*/

int	print_space_s(size_t atoi, char *s)
{
	size_t	i;

	i = ft_strlen(s);
	while (atoi > i)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	return (i);
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

