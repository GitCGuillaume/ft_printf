#include "../ft_printf.h"

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
	size_t	result;

	result = 0;
	if (fmt[*i] == 'd')
		result = print_d(l_flags, ap);
	else if (fmt[*i] == 's')
		result = print_s(l_flags, ap);
	else if (fmt[*i] == 'p')
		result = print_p(l_flags, ap);
	return (result);
}

