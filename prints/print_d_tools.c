#include "../ft_printf.h"

void	negative_d(ssize_t *nb_print, int *d)
{
	if (*d < 0)
	{
		(*nb_print)++;
		ft_putchar_fd('-', 1);
		(*d) = -(*d);
	}
}

ssize_t	print_basic_value_d(ssize_t *width, int d, char c)
{
	ssize_t	nb_print;

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

	size = width - lensize;
	if (width_specification >= 0)
	{
		if (width_specification - lensize > 0)
			size = size - (width_specification - lensize);
		if (d < 0 && width_specification > lensize)
			size--;
	}
	return (size);
}

ssize_t	browse_two_stars_d(va_list ap, t_flags *l_flags, int d)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	width_spec;
	int		value;

	width = d;
	width_spec = va_arg(ap, int);
	value = va_arg(ap, int);
	nb_print = 0;
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (width_spec < -2147483648 || width_spec > 2147483646)
		return (-1);
	if (l_flags->minus == 1)
		nb_print += print_d_stars_minus(width, width_spec, value);
	else if (0 > width && l_flags->minus == 0)
		nb_print += print_d_stars_minus(width, width_spec, value);
	else
		nb_print += print_d_stars(width, width_spec, value);
	return (nb_print);
}

int		check_min_max_value(t_flags *l_flags, int d)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (width < -2147483646 || width > 2147483646)
			return (-1);
	}
	if (l_flags->point == 0 && l_flags->asterisk == 1)
	{
		if (d < -2147483646 || d > 2147483646)
			return (-1);
	}
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (w_spec < -2147483648 || w_spec > 2147483646)
		return (-1);
	return (0);
}
