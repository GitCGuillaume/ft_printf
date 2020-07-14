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
	ft_printf("azer0%5dqaz", 123);
	printf("\n%4d\n", 123);
	printf("%05.08d", 34);
	printf("\n");
	printf("%.5da", -216);
	printf("\n%6d", -532);
	printf("\n");
	//ft_printf("%0-014-013.*d", 44, 267);
	//printf("%0-01-013.*d", 4, 267);
	return (0);
}
