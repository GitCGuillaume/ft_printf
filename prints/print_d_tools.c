#include "../ft_printf.h"

void	negative_d(size_t *nb_print, int *d)
{
	if (*d < 0)
	{
		(*nb_print)++;
		ft_putchar_fd('-', 1);
		(*d) = -(*d);
	}
}

size_t	print_basic_value_d(ssize_t *width, int d, char c)
{
	size_t	nb_print;

	nb_print = 0;
	if (d == 0)
		(*width)--;
	nb_print += print_width_d(*width, d, c);
	ft_putnbr_fd(d, &nb_print, 1);
	return (nb_print);
}

ssize_t	calc(ssize_t width, ssize_t width_specification, ssize_t lensize, int d)
{
	ssize_t	size;

	size = 0;
	if (width_specification >= 0)
	{
		size = width - lensize;
		if (width_specification - lensize > 0)
			size = size - (width_specification - lensize);
		if (d < 0 && width_specification > lensize)
			size--;
	}
	return (size);
}

size_t	browse_two_stars_d(va_list ap, t_flags *l_flags, int d)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;
	int		value;

	width = d;
	w_spec = va_arg(ap, int);
	value = va_arg(ap, int);
	nb_print = 0;
	if (l_flags->minus == 1)
		nb_print += print_d_stars_minus(width, w_spec, value);
	else if (0 > width && l_flags->minus == 0)
		nb_print += print_d_stars_minus(width, w_spec, value);
	else
		nb_print += print_d_stars(width, w_spec, value);
	return (nb_print);
}
