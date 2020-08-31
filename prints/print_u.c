#include "../ft_printf.h"

ssize_t	check_flags_u_one(t_flags *l_flags, unsigned int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_u_zero(l_flags, value));
	if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_u_rl(l_flags, value));
	if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_u_lr(l_flags, value));
	if (l_flags->minus == 0 && l_flags->point == 1)
		return (nb_print += print_u_stars(l_flags, value));
	if (l_flags->minus == 1 && l_flags->point == 1)
		return (nb_print += print_u_stars_minus(l_flags, value));
	/*
	if (l_flags->point == 1 && l_flags->minus == 0)
		return (print_p_point_star(l_flags, addr));
	if (l_flags->point == 1 && l_flags->minus == 1)
		return (print_p_minus_point_star(l_flags, addr));
	*/
	return (nb_print);
}

ssize_t	print_u(t_flags *l_flags, va_list ap)
{
	ssize_t	result;
	unsigned int	value;

	result = 0;
	value = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	value = va_arg(ap, int);
	if ((result = check_min_max_value_all(l_flags)) == 0)
	{
		result += check_flags_u_one(l_flags, value);
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
