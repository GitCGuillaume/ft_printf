#include "../ft_printf.h"
#include <stdio.h>
int	get_one_star(t_flags *l_flags, va_list ap)
{
	if (l_flags->asterisk == 1 && l_flags->point == 0)
	{
		del(l_flags->width);
		l_flags->width = ft_itoa(va_arg(ap, int));
		return (1);
	}
	else if (l_flags->width != NULL && l_flags->width_specification == NULL && l_flags->point == 1)
	{
		del(l_flags->width_specification);
		l_flags->width_specification = ft_itoa(va_arg(ap, int));
		return (1);
	}
	else if (l_flags->point == 1)
	{
		va_arg(ap, int);
		return (1);
	}
	/*else if (l_flags->asterisk == 1 && l_flags->point == 1 && l_flags->width_specification == NULL)
	{
		del(l_flags->width_specification);
		l_flags->width_specification = ft_itoa(va_arg(ap, int));
		return (1);
	}
	else if (l_flags->asterisk == 1 && l_flags->point == 1 && l_flags->width_specification != NULL)
	{
		del(l_flags->width);
		l_flags->width = ft_itoa(va_arg(ap, int));
	}*/
	return (0);
}

int	get_two_stars(t_flags *l_flags, va_list ap)
{
	if (l_flags->asterisk == 2)
	{
		del(l_flags->width);
		del(l_flags->width_specification);
		l_flags->width = ft_itoa(va_arg(ap, int));
		l_flags->width_specification = ft_itoa(va_arg(ap, int));
		return (1);
	}
	return (0);
}

int	check_min_max_value_all(t_flags *l_flags)
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
	if (w_spec < -2147483648 || w_spec > 2147483646)
		return (-1);
	return (0);
}
