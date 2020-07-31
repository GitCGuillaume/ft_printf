#include "../ft_printf.h"

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

size_t	astrsk_d_lr(va_list ap, t_flags *l_flags, int d, ssize_t *width)
{
	va_list	ap2;
	size_t	nb_print;
	int		d_copy;

	nb_print = 0;
	va_copy(ap2, ap);
	d_copy = va_arg(ap2, int);
	if (d_copy == 0 && l_flags->zero == 0)
		d--;
	if (d < 0)
	{
		d = -d;
		d--;
		nb_print += astrsk_d_rl(ap, l_flags, d, width);
		return (nb_print);
	}
	if (l_flags->zero == 0)
	{
		nb_print += print_width_d(d, d_copy, ' ');
		ft_putnbr_fd(d_copy, &nb_print, 1);
	}
	*width = d;
	va_end(ap2);
	return (nb_print);
}

size_t	astrsk_d_rl(va_list ap, t_flags *l_flags, int d, ssize_t *width)
{
	va_list	ap2;
	size_t	nb_print;
	int		d_copy;

	nb_print = 0;
	va_copy(ap2, ap);
	d_copy = va_arg(ap2, int);
	if (d_copy == 0 && l_flags->zero == 0)
		d--;
	if (d < 0)
	{
		d = -d;
		nb_print += astrsk_d_rl(ap, l_flags, d, width);
		return (nb_print);
	}
	if (l_flags->zero == 0)
	{
		ft_putnbr_fd(d_copy, &nb_print, 1);
		nb_print += print_width_d(d, d_copy, ' ');
	}
	else
		spec_point_astrsk_d(l_flags, ap, &nb_print, d);
	*width = d;
	va_end(ap2);
	return (nb_print);
}

size_t	print_d_stars_minus(ssize_t width, ssize_t w_spec, int value)
{
	size_t	nb_print;

	nb_print = 0;
	if (0 > value)
	{
		negative_d(&nb_print, &value);
		if (w_spec >= 0)
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
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value),
					value), 0, ' ');
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
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value),
				nb_print, ' ');
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
