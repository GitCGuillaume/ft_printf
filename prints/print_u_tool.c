#include "../ft_printf.h"
#include <stdio.h>
size_t	print_u_zero(t_flags *l_flags, unsigned int value)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (value == 0 && width != 0)
		width--;
	if (width > 0)
		nb_print += print_width_u(width, value, '0');
	ft_putnbr_fd(value, &nb_print, 1);
	if (0 > width)
	{
		width = -width;
		nb_print += print_width_u(width, value, ' ');
	}
	return (nb_print);
}

size_t	print_u_rl(t_flags *l_flags, unsigned int value)
{
	size_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (value == 0)
		width--;
	ft_putnbr_fd(value, &nb_print, 1);
	nb_print += print_width_d(width, value, ' ');
	return (nb_print);
}

size_t	print_u_lr(t_flags *l_flags, unsigned int value)
{
	size_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (value == 0)
		width--;
	nb_print += print_width_d(width, value, ' ');
	ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}

size_t	print_u_stars(t_flags *l_flags, unsigned int value)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	handle_sizes(&width, &w_spec);
	if (value == 0 &&  w_spec <= -1)
		return (nb_print += print_w_spec(1, 0, '0'));
//	if (0 > value && w_spec > 0)
//		width--;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_lensize(value), value),
				nb_print, ' ');
	nb_print += print_w_spec(w_spec - ft_lensize(value), 0, '0');
	if (value != 0)
		ft_putnbr_fd(value, &nb_print, 1);
	return (nb_print);
}

size_t	print_u_stars_minus(t_flags *l_flags, unsigned int value)
{
	printf("ah");
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	handle_sizes(&width, &w_spec);
	if (value == 0 && w_spec <= -1)
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

