/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 11:12:39 by gchopin           #+#    #+#             */
/*   Updated: 2020/08/20 16:13:23 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_putnbr_fd(ssize_t n, ssize_t *nb_print, int fd)
{
	if (n < 0)
	{
		//if (n != -2147483648)
		//{
		//	ft_putchar_fd('-', fd);
		//	(*nb_print)++;
		//}
		n = -n;
		ft_putnbr_fd(n, nb_print, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		(*nb_print)++;
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		(*nb_print)++;
		ft_putnbr_fd(n / 10, nb_print, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
