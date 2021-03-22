/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:57:58 by gchopin           #+#    #+#             */
/*   Updated: 2021/02/13 17:51:21 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_size_memory_x(unsigned int nbr, size_t *size)
{
	size_t	i;

	i = 16;
	(*size)++;
	if (nbr > 9)
	{
		ft_size_memory_x((nbr / i), size);
	}
}

size_t	ft_memstr_x(unsigned int nbr, char *ptr, char *base)
{
	size_t	i;

	i = 0;
	if (ptr)
	{
		while (nbr != 0)
		{
			ptr[i] = base[nbr % 16];
			nbr = nbr / 16;
			i++;
		}
	}
	return (i);
}

char	*ft_putnbr_base_x(unsigned int nbr, char *base)
{
	size_t			i;
	size_t			size;
	unsigned int	convert_nbr;
	char			*ptr;

	size = 0;
	i = 0;
	convert_nbr = nbr;
	ft_size_memory_x(convert_nbr, &size);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	if (nbr && base)
	{
		i = ft_memstr_x(convert_nbr, ptr, base);
		ft_rev_char_tab(ptr, i);
	}
	ptr[i] = '\0';
	return (ptr);
}
