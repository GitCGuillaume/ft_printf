#include "../ft_printf.h"
#include <stdio.h>

size_t	print_c_lr(t_flags *l_flags, char c)
{
	size_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	nb_print += print_width_c(width, ' ');
	//ft_putstr_limit_fd(c, 0, &nb_print, 1);
	ft_putchar_fd(c, 1);
	nb_print += 1;
	return (nb_print);
}

size_t	print_c_rl(t_flags *l_flags, char c)
{
	size_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	//ft_putstr_limit_fd(c, 0, &nb_print, 1);
	ft_putchar_fd(c, 1);
	nb_print += 1;
	nb_print += print_width_c(width, ' ');
	return (nb_print);
}

size_t	print_c_zero(t_flags *l_flags, char c)
{
	size_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	nb_print += print_width_c(width, '0');
	//ft_putstr_limit_fd(c, 0, &nb_print, 1);
	ft_putchar_fd(c, 1);
	nb_print += 1;
	return (nb_print);
}

#include <stdio.h>
size_t	print_c_point_star(t_flags *l_flags, char c)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	//if (width > w_spec)
		nb_print += print_w_spec(calc(width, 0, 1, 0), nb_print, ' ');
	//ft_putstr_	ft_putchar_fd(c, 1);
	nb_print += 1;
	ft_putchar_fd(c, 1);
	return (nb_print);
}

size_t	print_c_minus_point_star(t_flags *l_flags, char c)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	//nb_print += print_w_spec(w_spec - 1, 0, '0');
	//ft_putstr_limit_fd(c, 0, &nb_print, 1);
	ft_putchar_fd(c, 1);
	nb_print += 1;
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

size_t	check_flags_one_c(t_flags *l_flags, char c)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_c_zero(l_flags, c));
	if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_c_rl(l_flags, c));
	if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_c_lr(l_flags, c));
	if (l_flags->point == 1 && l_flags->minus == 0)
		return (print_c_point_star(l_flags, c));
	if (l_flags->point == 1 && l_flags->minus == 1)
		return (print_c_minus_point_star(l_flags, c));
	return (nb_print);
}

/*size_t	print_empty(t_flags *l_flags)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->minus == 0 && l_flags->point == 0)
	{
	}
	if (l_flags->minus == 1 && l_flags->point == 0)
	{
	}
	if (l_flags->minus == 0 && l_flags->point == 1)
	{
		nb_print += print_w_spec(width, w_spec, ' ');
		if (w_spec >= 0)
		{
		}
		else
		{
		}
		nb_print += print_w_spec(w_spec, 0, '0');
	}
	if (l_flags->minus == 1 && l_flags->point == 1)
	{
		if (w_spec >= 0)
		{
		}
		else
		{
		}
		nb_print += print_w_spec(w_spec, 0, '0');
		nb_print += print_w_spec(width, w_spec + 2, ' ');
	}
	return (nb_print);
}*/
#include <stdio.h>
size_t	print_c(t_flags *l_flags, va_list ap)
{
	size_t	result;
	size_t	negative;
	char	c;

	result = 0;
	negative = -1;
	c = 0;
	if (l_flags->percentage == 0)
	{
		if (l_flags->asterisk == 1)
			get_one_star(l_flags, ap);
		else if (l_flags->asterisk == 2)
			get_two_stars(l_flags, ap);
		if ((result = check_min_max_value_c(l_flags)) == 0)
		{
			c = va_arg(ap, int);
			//if (c == NULL)
			//	return (print_empty(l_flags));
			result = check_flags_one_c(l_flags, c);
		}
		else if (result == -negative)/*&& c != 1*/
		{
			ft_putchar_fd(va_arg(ap, int), 1);
			printf("c=%c\n", c);
			result = 1;
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
