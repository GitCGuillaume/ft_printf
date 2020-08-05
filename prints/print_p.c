#include "../ft_printf.h"
#include <stdio.h>
size_t	print_p(t_flags *l_flags, va_list ap)
{
	size_t	result;

	result = 0;
	if (l_flags->percentage == 0)
	{
		if (l_flags->asterisk == 1)
			get_one_star(l_flags, ap);
		else if (l_flags->asterisk == 2)
			get_two_stars(l_flags, ap);
		printf("width=%s\n", l_flags->width);
		printf("w_spec=%s\n", l_flags->width_specification);
		result = check_min_max_value_all(l_flags);
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
