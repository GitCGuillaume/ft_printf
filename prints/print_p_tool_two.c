#include "../ft_printf.h"

size_t	print_empty_part_one(t_flags *l_flags, ssize_t *width, ssize_t *w_spec)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->minus == 0 && l_flags->point == 1)
	{
		nb_print += print_w_spec(*width, *w_spec + 2, ' ');
		if (*w_spec >= 0)
		{
			ft_putstr_fd("0x", 1);
			nb_print += 2;
		}
		else
		{
			ft_putstr_fd("0x0", 1);
			nb_print += 3;
		}
		nb_print += print_w_spec(*w_spec, 0, '0');
	}
	return (nb_print);
}

size_t	print_empty_part_two(t_flags *l_flags, ssize_t *width, ssize_t *w_spec)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->minus == 1 && l_flags->point == 1)
	{
		if (*w_spec >= 0)
		{
			ft_putstr_fd("0x", 1);
			nb_print += 2;
		}
		else
		{
			ft_putstr_fd("0x0", 1);
			nb_print += 3;
		}
		nb_print += print_w_spec(*w_spec, 0, '0');
		nb_print += print_w_spec(*width, *w_spec + 2, ' ');
	}
	return (nb_print);
}

size_t	print_empty(t_flags *l_flags)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->minus == 0 && l_flags->point == 0)
	{
		nb_print += print_width_s(width, "0x0", ' ');
		ft_putstr_fd("0x0", 1);
		nb_print += 3;
	}
	if (l_flags->minus == 1 && l_flags->point == 0)
	{
		ft_putstr_fd("0x0", 1);
		nb_print += 3;
		nb_print += print_width_s(width, "0x0", ' ');
	}
	nb_print += print_empty_part_one(l_flags, &width, &w_spec);
	nb_print += print_empty_part_two(l_flags, &width, &w_spec);
	return (nb_print);
}
