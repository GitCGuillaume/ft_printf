#include "../../ft_printf.h"

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

int	find_convertor(char *fmt, t_flags *l_flags, va_list ap, size_t *i)
{
	size_t	start;
	size_t	result;

	result = 0;
	start = 0;
	if (fmt[*i] >= '0' && fmt[*i] <= '9')
		start = *i;
	while (fmt[*i] && fmt[*i] >= '0' && fmt[*i] <= '9')
		*i = *i + 1;
	if (fmt[*i] == 's')
		result = print_s(fmt, l_flags, start, ap);
	else if (fmt[*i] == 'd')
		result = print_d(fmt, l_flags, start, ap);
	else if (fmt[*i] == 'p')
		result = print_p(fmt, l_flags, start, va_arg(ap, void *));
	//(*i)++;
	return (result);
}

