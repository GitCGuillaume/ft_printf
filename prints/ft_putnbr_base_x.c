#include "../ft_printf.h"
/*
int		check_value_x(char c)
{
	if (c == '+' || c == '-')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_check_error_x(char *base)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[0] == '\0' || base[1] == '\0' || check_value_x(base[i]) == 1)
		{
			return (0);
		}
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}
*/

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
	size_t	i;
	ssize_t	size;
	unsigned int	convert_nbr;
	char	*ptr;

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
