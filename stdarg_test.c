#include <stdarg.h>
#include <stdio.h>

int		ft_printf(const char *, ...);

void	test(char	*fmt, ...)
{
	va_list	ap;
	int		d;
	char	c;
	char	*s;
	int		i = 0;

	va_start(ap, fmt);
	//va_copy(ap2, ap);
	while (fmt[i])
	{
		if (fmt[i] == 's')
		{
			s = va_arg(ap, char *);
			printf("string %s\n", s);
		}
		else if (fmt[i] == 'd')
		{
			d = va_arg(ap, int);
			printf("int %d", d);
		}
		else if (fmt[i] == 'c')
		{
			c = va_arg(ap, int);
			printf("char c %c", c);
		}
		i++;
	}
	va_end(ap);
}

int		main(void)
{
	ft_printf("%.*d", 267);
	return (0);
}
