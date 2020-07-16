#include "../ft_printf.h"

#include <stdio.h>
int	is_convertor(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (1);
	else if (c == 'p')
		return (1);
	else if (c == 'd')
		return (1);
	else if (c == 'i')
		return (1);
	else if (c == 'u')
		return (1);
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
	return (0);
}

int	find_convertor(char const *fmt, t_flags *l_flags, va_list ap, size_t *i)
{
	//size_t	start;
	size_t	result;

	result = 0;
	//start = 0;
	//if (fmt[*i] >= '0' && fmt[*i] <= '9')
	//	start = *i;
	//while (fmt[*i] && fmt[*i] >= '0' && fmt[*i] <= '9')
	//	*i = *i + 1;
	if (fmt[*i] == 'd')
		result = print_d(l_flags, ap);
		//result = print_s(l_flags, ap);
	/*else if (fmt[*i] == 'd')
		result = print_d(l_flags, ap);
	else if (fmt[*i] == 'p')
		//result = print_p(l_flags, va_arg(ap, void *));
	*/
	//(*i)++;
	return (result);
}

