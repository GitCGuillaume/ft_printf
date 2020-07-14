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

#include "libft.h"

void	ft_putnbr_fd(ssize_t n, size_t *nb_print, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
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
