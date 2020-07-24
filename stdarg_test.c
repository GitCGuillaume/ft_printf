#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"
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
	//ft_printf("azer0%5dqaz", -123);
	//printf("printf=%d\n", printf("azer0%5dqaz", 123));
	ft_printf("%3s\n", "abc");
	printf("\n%3d\n", -1);
	printf("%05.08d", 34);
	printf("\n");
	printf("%.5da", -216);
	printf("\n%6d", -532);
	printf("\n");
	ft_printf("%0-8.5da", 34);
	printf("\n");
	printf("%0-8.5da", 34);
	//ft_printf("\n");
	//ft_printf("%-5.0da", 0);
	ft_printf("%0-8.5da", 34);
	ft_printf("\n");
	ft_printf("%0-8.3da", 8375);
	ft_printf("\n");
	printf("%0-8.5db", 34);
	printf("\n");
	printf("%0-8.3db", 8375);
	printf("\n");
	ft_printf("%-8.5da", 0);
	printf("\n");
	printf("%-8.5db", 0);
	printf("\n");
	ft_printf("this %d test", 17);
	printf("\n");
	printf("%-0.*dz", 5, 123);
	printf("\n");
	printf("%0.*de", 5, 123);
	printf("\n");
	printf("%.*d", 1, 0);
	printf("\n");
	printf("%.*d", 0, 0);
	printf("\n");
	printf("%.*d", 0, 12);
	printf("\n");
	printf("\n");
	printf("%08.*d", 5, 34);
	printf("\n");
	ft_printf("%08.*d", 5, 34);
	printf("\n");
	printf("printf1=%d\n", printf("%08.4d", 34));
	printf("\n");
	ft_printf("ft_printf1=%d\n", ft_printf("%08.4d", 34));
	printf("\n");
	printf("printf2=%d\n", printf("%08.*d", -3, -8375));
	printf("\n");
	ft_printf("ft_printf2=%d\n", ft_printf("%08.*d", -3, -8375));
	printf("\n");
	printf("printf3=%d\n", printf("%08.*d", 2, 8375));
	printf("\n");
	ft_printf("ft_printf3=%d\n", ft_printf("%08.*d", 2, 8375));
	printf("\n");
	printf("pfvide=%d\n", printf("%d\n", 0));
	ft_printf("ft_pfvide=%d\n", ft_printf("%d\n", 0));
	//ft_printf("%0-014-013.*d", 44, 267);
	//printf("%0-01-013.*d", 4, 267);
	ft_printf("\n");
	ft_printf("%%d 0000042 == |%d|", 0000042);
	ft_printf("\n");
	printf("str_nb == %d\n", ft_printf("str == %4s", "abc"));
	ft_printf("ft_str_nb == %d\n", ft_printf("str == %4s", "abc"));
	ft_printf("str == %d%4d\n", NULL, 456);
	ft_printf("str == %3ss\n", "abc");
	ft_printf("str == %3ss\n", NULL);
	ft_printf("str == %-1.5s\n", "abc");
	ft_printf("str == %-7.5s", "yolo");
	ft_strlen(NULL);
	printf("str == %-8.s", "hi low\0don't print me lol\0");
	ft_printf("\n");
	ft_printf("str == %-8.s", "hi low\0don't print me lol\0");
	ft_printf("\n");
	printf("%-9.1s", NULL);
	ft_printf("\n");
	ft_printf("%-9.1s", NULL);
	ft_printf("\n");
	ft_printf("ah!%-20.6s", NULL);
	ft_printf("\n");
	printf("ah%-3.1s", NULL);
	ft_printf("\n");
	ft_printf("%7.5s\n", "s");
	ft_printf("%3.6s\n", "hi low\0don't print me lol\0");
	printf("%3.6s\n", "hi low\0don't print me lol\0");
	ft_printf("%20.6s\n", "hi low\0don't print me lol\0");
	printf("%20.6s\n", "hi low\0don't print me lol\0");
	
	ft_printf("%-32s\n", "abc");
	ft_printf("%-3.s\n", NULL);
	ft_printf("----------------------\n");
	ft_printf("a%.9s\n", NULL);
	printf("b%.9s\n", NULL);
	printf("d1=%d", printf("d1=%%-*.3s LYDI == |%-*s|\n", -10, "zbcd"));
	ft_printf("d2=%d", ft_printf("d2=%%-.*3s LYDI == |%-*s|\n", -10, "zbcd"));
	//printf("d3=%d", printf("%%-*.3s LYDI == |%-3.*s|\n", 10, "abcd"));
	//ft_printf("d4=%d", ft_printf("%%-*.3s LYDI == |%-3.*s|\n", 10, "abcd"));
	printf("\ngneeee1%-*.*sa\n", 7, 3, "yolo");
	ft_printf("\ngneee2%-*.*sb\n", 7, 3, "yolo");
	printf("d=%d\n", printf("\n%0*s\n", 6, "abc"));
	printf("\n");
	//ft_printf("d=%d", ft_printf("\n%0*.s\n", 6, "abc"));
	printf("\n");
	printf("d1=%d",printf("%*s", 10, NULL));
	printf("\n");
	ft_printf("d2=%d", ft_printf("%*s", 10, NULL));
	printf("\n");
	
	printf("\n");
	printf("d3=%d",printf("%*s", -10, NULL));
	printf("\n");
	ft_printf("d4=%d", ft_printf("%*s", -10, NULL));
	printf("\n");
	printf("d5=%d",printf("%*s", NULL, NULL));
	printf("\n");
	ft_printf("d6=%d", ft_printf("%*s", NULL, NULL));
	printf("\n");

	return (0);
}
