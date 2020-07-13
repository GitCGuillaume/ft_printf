/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:46:07 by gchopin           #+#    #+#             */
/*   Updated: 2020/05/13 20:47:55 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive_itoa(ssize_t n, ssize_t i, char *ptr)
{
	if (n >= 0 && n <= 9)
		ptr[i] = (n % 10) + '0';
	else
	{
		ptr[i] = (n % 10) + '0';
		i--;
		recursive_itoa(n / 10, i, ptr);
	}
}

static void	recursive_itoa_negative(ssize_t n, ssize_t i, char *ptr)
{
	if (n < 0)
	{
		ptr[0] = '-';
		i--;
		n = -n;
		recursive_itoa_negative(n, i, ptr);
	}
	else if (n >= 0 && n <= 9)
		ptr[i] = (n % 10) + '0';
	else
	{
		ptr[i] = (n % 10) + '0';
		i--;
		recursive_itoa_negative(n / 10, i, ptr);
	}
}

static int	ft_lensize(ssize_t n)
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

char		*ft_itoa(ssize_t n)
{
	char	*ptr;
	ssize_t		size;

	size = ft_lensize(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (!(ptr = malloc(((sizeof(char) * size + 1) + 1))))
		return (NULL);
	if (n > 0)
	{
		recursive_itoa(n, size - 1, ptr);
		ptr[size] = '\0';
	}
	if (n < 0)
	{
		recursive_itoa_negative(n, size + 1, ptr);
		ptr[size + 1] = '\0';
	}
	return (ptr);
}
