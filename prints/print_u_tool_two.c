#include "../ft_printf.h"

ssize_t	calc_u(ssize_t width, ssize_t width_specification, ssize_t lensize, unsigned int u)
{
	ssize_t	size;

	size = width - lensize;
	if (width_specification >= 0)
	{
		if (width_specification - lensize > 0)
			size = size - (width_specification - lensize);
		if (u < 0 && width_specification > lensize)
			size--;
	}
	return (size);
}

