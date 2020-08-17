#include "../ft_printf.h"

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

void	ft_memstr_x(unsigned int nbr, size_t size, char *ptr, char *base)
{
	ptr[size] = '\0';
	while (size > 0)
	{
		size--;
		ptr[size] = base[nbr % 16];
		nbr = nbr / 16;
	}
}

char	*ft_putnbr_base_x(unsigned int nbr, char *base)
{
	size_t	i;
	size_t	size;
	unsigned int	convert_nbr;
	char	*ptr;

	i = ft_check_error_x(base);
	size = 0;
	convert_nbr = nbr;
	ft_size_memory_x(convert_nbr, &size);
	if (!(ptr = malloc(size + 1)))
		return (NULL);
	ft_check_error_x(base);
	if (nbr)
	{
		if (i > 1)
			ft_memstr_x(convert_nbr, size, ptr, base);
		else
			ptr[0] = '0';
	}
	return (ptr);
}
