/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:57:58 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/02 10:58:25 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_size_memory_x(unsigned int nbr, ssize_t *size)
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

char	*ft_putnbr_base_x(unsigned int nbr, char *base)
{
	size_t			i;
	ssize_t			size;
	unsigned int	convert_nbr;
	char			*ptr;

	size = 0;
	i = 0;
	convert_nbr = nbr;
	if (!(ptr = malloc(size + 1)))
		return (NULL);
	if (nbr)
	{
		i = ft_memstr_x(convert_nbr, ptr, base);
		ft_rev_char_tab(ptr, i);
	}
	ptr[i] = '\0';
	return (ptr);
}
