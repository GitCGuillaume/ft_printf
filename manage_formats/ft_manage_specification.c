#include "../ft_printf.h"

int	asterisk_precision_specification(t_flags *l_flags, va_list ap)
{
	va_list	ap2;
	size_t	d_copy;

	va_copy(ap2, ap);
	d_copy = va_arg(ap2, int);
	l_flags->width_specification = ft_itoa(d_copy);
	if (l_flags->asterisk == 0)
		l_flags->asterisk = 1;
	else
		l_flags->asterisk = 2;
	return (0);
}

int	is_specification(t_flags *l_flags, va_list ap, char const *fmt, size_t *i)
{
	if (fmt[*i] == '.')
	{
		if (l_flags->point >= 1)
			l_flags->point = 2;
		else
		{
			*i = *i + 1;
			l_flags->point = 1;
			if (fmt[*i] >= '0' && fmt[*i] <= '9')
				l_flags->width_specification = width_string(fmt, i);
			else if (fmt[*i] == '*' && l_flags->width_specification == 0)
			{
				asterisk_precision_specification(l_flags, ap);
				*i = *i + 1;
			}
			else
			{
				l_flags->width_specification = 0;
				//*i = *i - 1;
			}
		}
	}
	return (0);
}
