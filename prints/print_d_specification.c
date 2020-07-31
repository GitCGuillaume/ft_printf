#include "../ft_printf.h"

void	spec_minus_no_ast_d(t_flags *l_flags,
		size_t *nb_prt, ssize_t *width, int d)
{
	if (d < 0)
		negative_d(nb_prt, &d);
	(*nb_prt) += print_width_d(ft_atoi(l_flags->width_specification),
			d, '0');
	if (d != 0)
		ft_putnbr_fd(d, nb_prt, 1);
	(*nb_prt) += print_w_spec(*width, *nb_prt, ' ');
}

void	spec_minus_d(t_flags *l_flags, va_list ap, size_t *nb_print, int d)
{
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	if (l_flags->point == 0)
	{
		if (d == 0)
			width--;
		ft_putnbr_fd(d, nb_print, 1);
		(*nb_print) += print_width_d(width, d, ' ');
	}
	else
	{
		if (l_flags->asterisk == 0)
			spec_minus_no_ast_d(l_flags, nb_print, &width, d);
		else if (width == 0)
			(*nb_print) += astrsk_d_rl(ap, l_flags, d, &width);
		else
			spec_point_astrsk_d(l_flags, ap, nb_print, d);
		d--;
	}
}

void	spec_pnt_no_ast_d(t_flags *l_flags, size_t *nb_prt, int d)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (width > w_spec)
	{
		(*nb_prt) += print_w_spec(calc(width, w_spec,
					ft_lensize(d), d), *nb_prt, ' ');
	}
	if (d < 0)
	{
		(*nb_prt)++;
		ft_putchar_fd('-', 1);
		d = -d;
	}
	(*nb_prt) += print_w_spec(w_spec - ft_lensize(d), 0, '0');
	if (d != 0)
		ft_putnbr_fd(d, nb_prt, 1);
}

void	spec_point_astrsk_d(t_flags *l_flags, va_list ap, size_t *nb_prt, int d)
{
	va_list	ap2;
	ssize_t	lsize;
	ssize_t	width;
	ssize_t	w_spec;
	int		d_copy;

	va_copy(ap2, ap);
	d_copy = va_arg(ap2, int);
	lsize = ft_lensize(d_copy);
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (width > w_spec)
		(*nb_prt) += print_w_spec(calc(width, w_spec, lsize, d_copy),
				*nb_prt, ' ');
	negative_d(nb_prt, &d_copy);
	if (l_flags->width_specification[0] == '-')
	{
		if (width != 0 && 0 > d)
			lsize = 0;
		w_spec = -w_spec;
	}
	(*nb_prt) += print_w_spec(w_spec - lsize, 0, '0');
	if (d_copy != 0)
		ft_putnbr_fd(d_copy, nb_prt, 1);
	va_end(ap2);
}

size_t	check_flags_spec_d(t_flags *l_flags, va_list ap, int d)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->point == 1)
	{
		if (l_flags->asterisk == 0)
		{
			spec_pnt_no_ast_d(l_flags, &nb_print, d);
			return (nb_print);
		}
		else
		{
			spec_point_astrsk_d(l_flags, ap, &nb_print, d);
			return (nb_print);
		}
	}
	return (nb_print);
}
