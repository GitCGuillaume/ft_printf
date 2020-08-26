/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 09:03:12 by gchopin           #+#    #+#             */
/*   Updated: 2020/08/26 17:46:13 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_char_tab(char *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = size;
	while (i < size / 2)
	{
		swap(&tab[i], &tab[j]);
		i = i + 1;
		j = j - 1;
	}
}

void	ft_size_memory(ssize_t nbr, ssize_t *size)
{
	ssize_t	i;

	i = 16;
	(*size)++;
	if (nbr > 9)
	{
		ft_size_memory((nbr / i), size);
	}
}

ssize_t	ft_memstr(ssize_t nbr, char *ptr, char *base)
{
	ssize_t	i;

	i = 0;
	while (nbr != 0)
	{
		ptr[i] = base[nbr % 16];
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

char	*ft_putnbr_base(void *nbr, char *base)
{
	size_t	i;
	ssize_t	size;
	ssize_t	convert_nbr;
	char	*ptr;

	//i = ft_check_error(base);
	size = 0;
	i = 0;
	convert_nbr = (ssize_t)nbr;
	ft_size_memory(convert_nbr, &size);
	if (!(ptr = malloc(size + 1)))
		return (NULL);
	if (nbr)
	{
		//if (i > 1)
		i = ft_memstr(convert_nbr, ptr, base);
		//else
		//	ptr[0] = '0';
	}
	ft_rev_char_tab(ptr, i - 1);
	ptr[i] = '\0';
	return (ptr);
}
