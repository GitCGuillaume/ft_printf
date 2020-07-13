#include "../../ft_printf.h"

#include <stdio.h>
int	is_specification(t_list_flags *l_flags, char const *fmt, size_t *i)
{
	if (fmt[*i] == '.')
	{
		if (l_flags->point >= 1)
			l_flags->point = 2;
		else
		{
			l_flags->point = 1;
			//*i = *i + 1;
			if (fmt[*i] >= '0' && fmt[*i] <= 9)
			{
				l_flags->width_specification = width_string(fmt, i);
				//printf("width_specification == %s\n", l_flags->width_specification);
			}
		}
	}
	return (0);
}
