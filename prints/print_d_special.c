#include "../ft_printf.h"
#include <stdio.h>
size_t	print_d_stars_minus(ssize_t width, ssize_t w_spec, int value)
{
	size_t	nb_print;

	nb_print = 0;
	if (0 > value)
	{
		negative_d(&nb_print, &value);
		if (w_spec > 0)
			width--;
		if (width < 0)
			width = width + 2;
	}
	if (0 > w_spec)
	{
		w_spec++;
		w_spec = -w_spec;
	}
	if (w_spec > 0)
		nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	if (0 > width)
		width = -width;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value), 0, ' ');
	return (nb_print);
}
