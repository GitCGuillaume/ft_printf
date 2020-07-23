#include "../ft_printf.h"

void	negative_d(size_t *nb_print, int *d)
{
	(*nb_print)++;
	ft_putchar_fd('-', 1);
	(*d) = -(*d);
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
#include <stdio.h>
size_t		astrsk_d_lr(va_list ap, t_flags *l_flags, int d, ssize_t *width)
{
	va_list	ap2;
	size_t	nb_print;
	int	d_copy;

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

size_t		astrsk_d_rl(va_list ap, t_flags *l_flags, int d, ssize_t *width)
{
	va_list	ap2;
	size_t	nb_print;
	int	d_copy;

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

