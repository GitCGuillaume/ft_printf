/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 09:03:12 by gchopin           #+#    #+#             */
/*   Updated: 2021/02/05 15:24:55 by gchopin          ###   ########.fr       */
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
	j = size - 1;
	if (size == 1 && (size / 2 == 0))
	{
		swap(&tab[i], &tab[j]);
		return ;
	}
	while (i < size / 2)
	{
		swap(&tab[i], &tab[j]);
		i = i + 1;
		j = j - 1;
	}
}

void	ft_size_memory(size_t nbr, ssize_t *size)
{
	ssize_t	i;

	i = 16;
	(*size)++;
	if (nbr > 9)
	{
		ft_size_memory((nbr / i), size);
	}
}

size_t	ft_memstr(size_t nbr, char *ptr, char *base)
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
	char	*ptr;
	ssize_t	size;
	size_t	i;
	size_t	convert_nbr;

	size = 0;
	i = 0;
	convert_nbr = (size_t)nbr;
	ft_size_memory(convert_nbr, &size);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	if (nbr)
	{
		i = ft_memstr(convert_nbr, ptr, base);
		ft_rev_char_tab(ptr, i);
	}
	ptr[i] = '\0';
	return (ptr);
}
