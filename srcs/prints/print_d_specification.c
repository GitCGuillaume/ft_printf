#include "../../ft_printf.h"

void	specification_minus_d(t_flags *l_flags, size_t *nb_print, int d)
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
		if (d < 0)
		{
			(*nb_print)++;
			ft_putchar_fd('-', 1);
			d = -d;
		}
		(*nb_print) += print_width_d(ft_atoi(l_flags->width_specification), d, '0');
		if (d != 0)
			ft_putnbr_fd(d, nb_print, 1);
		(*nb_print) += print_width_specification(width, *nb_print, ' ');
	}
}

