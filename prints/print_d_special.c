#include "../ft_printf.h"

void	handle_sizes(ssize_t *width, ssize_t *w_spec)
{
	if (0 > *w_spec)
	{
		//(*w_spec)++;
	}
	if (0 > *width)
	{
		*width = -(*width);
	}
}

#include <stdio.h>
ssize_t	astrsk_d_lr(va_list ap, t_flags *l_flags, int d)
{
	va_list	ap2;
	ssize_t	nb_print;
	ssize_t	width;
	int		value;
	
	nb_print = 0;
	va_copy(ap2, ap);
	width = d;
	value = va_arg(ap2, int);
	//if (d_copy == 0 && l_flags->zero == 0)
	//	d--;
	if (width < 0)
	{
		nb_print += astrsk_d_rl(ap, l_flags, d);
		return (nb_print);
	}
	nb_print += print_basic_value_d(&width, value, ' ');
	/*if (l_flags->zero == 0)
	{
		nb_print += print_width_d(d, d_copy, ' ');
		ft_putnbr_fd(d_copy, &nb_print, 1);
	}*/
	va_end(ap2);
	return (nb_print);
}

ssize_t	astrsk_d_rl(va_list ap, t_flags *l_flags, int d)
{
	//va_list	ap2;
	ssize_t	nb_print;
	ssize_t	width;
	int		value;
	//int		d_copy;

	nb_print = 0;
	width = 0;
	(void)l_flags;
	//if (l_flags->point == 0)
	//{
		width = d;
		value = va_arg(ap, int);
		if (value < 0)
			negative_d(&nb_print, &value);
		if (0 > width)
			width = -width;
		ft_putnbr_fd(value, &nb_print, 1);
		nb_print += print_w_spec(width, nb_print, ' ');
	//}
	//else
	//	spec_point_astrsk_d(ap, l_flags, &nb_print, d);
	//va_copy(ap2, ap);
	//d_copy = va_arg(ap2, int);
	//if (d_copy == 0 && l_flags->zero == 0)
	//	d--;
	/*if (l_flags->zero == 0)
	{
		if (d < 0)
		{
			negative_d(&nb_print, &d_copy);
			return (nb_print);
		}
		ft_putnbr_fd(d_copy, &nb_print, 1);
		nb_print += print_width_d(d, d_copy, ' ');
	}
	else
		spec_point_astrsk_d(ap, l_flags, &nb_print, d);
	*/
	//*width = d;
	//va_end(ap2);
	return (nb_print);
}
#include <stdio.h>
ssize_t	print_d_stars_minus(ssize_t width, ssize_t w_spec, int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	handle_sizes(&width, &w_spec);
	if (0 > value)
	{
		//width--;
		negative_d(&nb_print, &value);
		if (0 > value && w_spec > 0)
			w_spec++;
	}
	if (value == 0 && w_spec <= -1)
		w_spec = 1;
	if (w_spec > 0)
		nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	if (width > w_spec)
		nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	print_d_stars(ssize_t width, ssize_t w_spec, int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	handle_sizes(&width, &w_spec);
	if (value == 0 &&  w_spec <= -1)
		return (nb_print += print_w_spec(1, 0, '0'));
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value),
				nb_print, ' ');
	if (0 > value)
	{
		negative_d(&nb_print, &value);
	}
	if (0 > value && w_spec > 0)
		w_spec++;
	nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}
