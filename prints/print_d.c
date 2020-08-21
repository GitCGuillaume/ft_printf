#include "../ft_printf.h"
#include <stdio.h>

ssize_t		print_zero_d(ssize_t *width, int value)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (0 > value)
	{
		nb_print++;
		ft_putchar_fd('-', 1);
		value = -value;
		if (*width > 0)
			(*width)--;
		if (*width < 0)
			(*width)++;
	}
	if (value == 0 && *width != 0)
		(*width)--;
	if (*width > 0)
		nb_print += print_width_d(*width, value, '0');
	ft_putnbr_fd(value, &nb_print, 1);
	if (0 > *width)
	{
		*width = -(*width);
		nb_print += print_width_d(*width, value, ' ');
	}
	return (nb_print);
}
#include <stdio.h>
ssize_t		check_flags_two_d(t_flags *l_flags, va_list ap, int d)
{
	ssize_t	nb_print;
	ssize_t	width;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (l_flags->minus == 1)
	{
		spec_minus_d(l_flags, ap, &nb_print, d);
	}
	else if ((l_flags->asterisk == 1 && l_flags->point == 0)
			|| (l_flags->asterisk == 1 && l_flags->point == 1 && l_flags->width_specification == NULL))
	{
		nb_print += astrsk_d_lr(ap, l_flags, d);
	}
	else if (l_flags->point == 1 && l_flags->minus == 0
			/*&& l_flags->width_specification != NULL*/)
	{
		if (width < 0)
			spec_minus_d(l_flags, ap, &nb_print, d);
		else
			nb_print = check_flags_spec_d(l_flags, ap, d);
	}
	return (nb_print);
}

ssize_t		check_flags_one_d(t_flags *l_flags, va_list ap, int d)
{
	ssize_t	width;
	ssize_t	nb_print;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		nb_print += print_basic_value_d(&width, d, ' ');
		return (nb_print);
	}
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
	{
		if (l_flags->asterisk == 1)
		{
			width = d;
			d = va_arg(ap, int);
		}
		nb_print += print_zero_d(&width, d);
	}
	return (nb_print);
}

ssize_t		print_d(t_flags *l_flags, va_list ap)
{
	int		d;
	ssize_t	result;

	d = va_arg(ap, int);
	result = 0;
	if ((result = check_min_max_value(l_flags, d)) == 0)
	{
		if (l_flags->percentage == 0)
		{
			if (l_flags->asterisk == 2)
				result = browse_two_stars_d(ap, l_flags, d);
			else if ((result = check_flags_one_d(l_flags, ap, d)) == 0)
			{
				result = check_flags_two_d(l_flags, ap, d);
			}
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
