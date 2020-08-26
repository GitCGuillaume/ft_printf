#include "../ft_printf.h"

ssize_t	print_c_lr(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (0 > width)
		return (nb_print += print_c_rl(l_flags, c));
	nb_print += print_width_c(width, ' ');
	ft_putchar_fd(c, 1);
	nb_print += 1;
	return (nb_print);
}

ssize_t	print_c_rl(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	ft_putchar_fd(c, 1);
	nb_print += 1;
	if (0 > width)
		width = -width;
	nb_print += print_width_c(width, ' ');
	return (nb_print);
}

int		check_min_max_value_c(t_flags *l_flags)
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
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	else if (w_spec < -2147483648 || w_spec > 2147483646)
		return (1);
	return (0);
}
