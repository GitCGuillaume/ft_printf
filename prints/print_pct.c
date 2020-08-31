#include "../ft_printf.h"

ssize_t	print_pct_zero(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	nb_print += print_width_c(width, '0');
	ft_putchar_fd(c, 1);
	nb_print += 1;
	return (nb_print);
}
#include <stdio.h>
ssize_t	print_pct_minus_point_star(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (0 > width)
		width = -width;
	ft_putchar_fd(c, 1);
	nb_print += 1;
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

ssize_t	print_pct_point_star(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (0 > width)
		return (nb_print += print_pct_minus_point_star(l_flags, c));
	nb_print += print_w_spec(calc(width, 0, 1, 0), nb_print, ' ');
	nb_print += 1;
	ft_putchar_fd(c, 1);
	return (nb_print);
}

ssize_t	check_flags_one_pct(t_flags *l_flags, unsigned char c)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_pct_zero(l_flags, c));
	else if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_pct_rl(l_flags, c));
	else if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_pct_lr(l_flags, c));
	else if (l_flags->point == 1 && l_flags->minus == 0)
		return (print_pct_point_star(l_flags, c));
	else if (l_flags->point == 1 && l_flags->minus == 1)
		return (print_pct_minus_point_star(l_flags, c));
	return (nb_print);
}

ssize_t	print_pct(t_flags *l_flags, va_list ap)
{
	ssize_t	result;
	ssize_t	negative;
	unsigned char	c;

	result = 0;
	negative = -1;
	c = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	c = '%';
	if ((result = check_min_max_value_all(l_flags)) == 0)
		result = check_flags_one_pct(l_flags, c);
	/*else if (result == -negative)
	{
		ft_putchar_fd(c, 1);
		result = 1;
	}*/
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}