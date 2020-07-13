/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 11:12:39 by gchopin           #+#    #+#             */
/*   Updated: 2020/05/07 11:23:18 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
void	ft_putnbr_precision_fd(int n, int fd, int max)
{
	if (max > 0)
	{
		if (n == -2147483648)
		{
			max = 0;
			ft_putstr_fd("-2147483648", fd);
		}
		else if (n < 0)
		{
			max--;
			ft_putchar_fd('-', fd);
			n = -n;
			ft_putnbr_precision_fd(n, fd, max);
		}
		else if (n >= 0 && n <= 9)
		{
			max--;
			ft_putchar_fd(n + '0', fd);
		}
		else
		{
			max--;
			ft_putnbr_precision_fd(n / 10, fd, max);
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
}
