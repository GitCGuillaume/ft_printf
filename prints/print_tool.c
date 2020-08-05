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
	else if (l_flags->asterisk == 1 && l_flags->point == 1)
	{
		del(l_flags->width_specification);
		l_flags->width_specification = ft_itoa(va_arg(ap, int));
		return (1);

	}
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
