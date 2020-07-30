#include "../ft_printf.h"
#include <stdio.h>

void	handle_sizes(ssize_t *width, ssize_t *w_spec)
{
	if (0 > *w_spec)
	{
		(*w_spec)++;
		*w_spec = -(*w_spec);
	}
	if (0 > *width)
	{
		*width = -(*width);
	}
}

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
	handle_sizes(&width, &w_spec);
	if (value == 0 && w_spec)
		w_spec = 1;
	if (w_spec > 0)
		nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value), 0, ' ');
	return (nb_print);
}

size_t	print_d_stars(ssize_t width, ssize_t w_spec, int value)
{
	size_t	nb_print;

	nb_print = 0;
	handle_sizes(&width, &w_spec);
	if (0 > value && w_spec > 0)
		width--;
	if (value == 0 && w_spec)
		w_spec = 1;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value), nb_print, ' ');
	if (0 > value)
	{
		negative_d(&nb_print, &value);
		if (width < 0)
			width = width + 2;
	}
	nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}
