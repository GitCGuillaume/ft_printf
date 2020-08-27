#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"
#include <limits.h>
char min[] = "-1111111111";
void	basic_value(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------1---------\n");
	one = printf("%*pa", -5, min);
	printf("\n");
	two = ft_printf("%*pa", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*pa", -5, -2);
	printf("\n");
	two = ft_printf("%*pa", -5, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*pa", 0, NULL);
	printf("\n");
	two = ft_printf("%*pa", 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*pa", 0, NULL);
	printf("\n");
	two = ft_printf("%-*pa", 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*pa", 2, NULL);
	printf("\n");
	two = ft_printf("%*pa", 2, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*pa", 2, NULL);
	printf("\n");
	two = ft_printf("%-*pa", 2, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%2pa", NULL);
	printf("\n");
	two = ft_printf("%2pa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%3pa", NULL);
	printf("\n");
	two = ft_printf("%3pa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-3pa", NULL);
	printf("\n");
	two = ft_printf("%-3pa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%1pa", NULL);
	printf("\n");
	two = ft_printf("%1pa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%-2pa", NULL);
	printf("\n");
	two = ft_printf("%-2pa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*pa", 2, 0, NULL);
	printf("\n");
	two = ft_printf("%*.*pa", 2, 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	   one = printf("%-*.*pa", 2, 0, NULL);
	printf("\n");
	two = ft_printf("%-*.*pa", 2, 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*pa", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%*pa", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*pa", -5, 0);
	printf("\n");
	two = ft_printf("%*pa", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*pa", 5, 0);
	printf("\n");
	two = ft_printf("%*pa", 5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*pa", 0, 0);
	printf("\n");
	two = ft_printf("%*pa", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*pa", 0, "123");
	printf("\n");
	two = ft_printf("%*pa", 0, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*pa", -5, min);
	printf("\n");
	two = ft_printf("%-*pa", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*pa", -5, "-1");
	printf("\n");
	two = ft_printf("%-*pa", -5, "-1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*pa", -5, "1");
	printf("\n");
	two = ft_printf("%-*pa", -5, "1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%-*pa", 5, min);
	printf("\n");
	two = ft_printf("%-*pa", 5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-5pa", min);
	printf("\n");
	two = ft_printf("%-5pa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%p", min);
	printf("\n");
	two = ft_printf("%p", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%p", min);
	printf("\n");
	two = ft_printf("%p", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------1---------\n");
	one = printf("%p", min);
	printf("\n");
	two = ft_printf("%p", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%p", NULL);
	printf("\n");
	two = ft_printf("%p", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.0s---------\n");
	one = printf("%5.0p", -0);
	printf("\n");
	two = ft_printf("%5.0p", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.s---------\n");
	one = printf("%5.p", -0);
	printf("\n");
	two = ft_printf("%5.p", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.0s---------\n");
	one = printf("%-5.0p", -0);
	printf("\n");
	two = ft_printf("%-5.0p", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.s---------\n");
	one = printf("%-5.p", -0);
	printf("\n");
	two = ft_printf("%-5.p", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	

	printf("---------(-)0s---------\n");
	one = printf("%0p", -0);
	printf("\n");
	two = ft_printf("%0p", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	
	printf("---------1--------\n");
	one = printf("%0pa", "-43");
	printf("\n");
	two = ft_printf("%0pa", "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", -5, min);
	printf("\n");
	two = ft_printf("%0*pa", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0.*pa", -5, min);
	printf("\n");
	two = ft_printf("%0.*pa", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0*.*---------\n");
	one = printf("%0*.*pa", -29, 20, min);
	printf("\n");
	two = ft_printf("%0*.*pa", -29, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0*.*---------\n");
	one = printf("%0*.*pa", 29, 20, min);
	printf("\n");
	two = ft_printf("%0*.*pa", 29, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*pa", 7, "1111111111");
	printf("\n");
	two = ft_printf("%0*pa", 7, "1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0*pa", -7, min);
	printf("\n");
	two = ft_printf("%0*pa", -7, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*pa", 7, "-43");
	printf("\n");
	two = ft_printf("%0*pa", 7, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", -7, "-43");
	printf("\n");
	two = ft_printf("%0*pa", -7, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", 2, "-43");
	printf("\n");
	two = ft_printf("%0*pa", 2, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", -7, "-43");
	printf("\n");
	two = ft_printf("%0*pa", -7, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*pa", 5, "-43");
	printf("\n");
	two = ft_printf("%0*pa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", -5, "-43");
	printf("\n");
	two = ft_printf("%0*pa", -5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*p", 7, "-123");
	printf("\n");
	two = ft_printf("%0*p", 7, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*p", 0, "-123");
	printf("\n");
	two = ft_printf("%0*p", 0, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*p", 1, "-123");
	printf("\n");
	two = ft_printf("%0*p", 1, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%0*p", 2, -123);
	printf("\n");
	two = ft_printf("%0*p", 2, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", -7, -123);
	printf("\n");
	two = ft_printf("%0*pa", -7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%0*p", 0, -123);
	printf("\n");
	two = ft_printf("%0*p", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", -1, -123);
	printf("\n");
	two = ft_printf("%0*pa", -1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	
	printf("---------1---------\n");
	one = printf("%0*pa", -2, min);
	printf("\n");
	two = ft_printf("%0*pa", -2, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%.*pb", -6 , 123);
	printf("\n");
	two = ft_printf("%.*pb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%.*pb", 6 , "-123");
	printf("\n");
	two = ft_printf("%.*pb", 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*pb", -6 , -123);
	printf("\n");
	two = ft_printf("%10.*pb", -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*pb", 10, 6 , 1);
	printf("\n");
	two = ft_printf("%*.*pb", 10, 6, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%10.*pb", 6 , -123);
	printf("\n");
	two = ft_printf("%10.*pb", 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*pb", 6 , min);
	printf("\n");
	two = ft_printf("%10.*pb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-10.*pb", 6 , "-123");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*pb", 6, "-123");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*pa", 0, 0);
	printf("\n");
	two = ft_printf("%0*pa", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------0*.*-1---------\n");
	one = printf("%0*.*pa", 0, 2, 123);
	printf("\n");
	two = ft_printf("%0*.*pa", 0, 2, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------0*.*-1---------\n");
	one = printf("%*.*pa", 0, 2, 123);
	printf("\n");
	two = ft_printf("%*.*pa", 0, 2, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);




	printf("---------EMPTY .0s---------\n");
	one = printf("%.0p", 0);
	printf("\n");
	two = ft_printf("%.0p", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0s---------\n");
	one = printf("%0p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -s---------\n");
	one = printf("%-p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0s---------\n");
	one = printf("%-0p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-0p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY -*s---------\n");
	one = printf("%-*p", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*p", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*s---------\n");
	one = printf("%-.*p", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*p", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -7.*s---------\n");
	one = printf("%-7.*p", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-7.*p", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------EMPTY 7.*s---------\n");
	one = printf("%7.*p", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%7.*p", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%.*p", 0, "123");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%.*p", 0, "123");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%-.*p", 0, "123");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*p", 0, "123");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY s---------\n");
	one = printf("%p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------0s  empty---------\n");
	one = printf("%0*p", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*p", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s---------\n");
	one = printf("%5.p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------07.s---------\n");
	one = printf("%07.p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%07.p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0.s---------\n");
	one = printf("%0.0p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.0p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.4p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.4p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5.smin---------\n");
	one = printf("%5.p", 1);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.p", 1);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------20.smin---------\n");
	one = printf("%20.p", min);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%20.p", min);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s-123---------\n");
	one = printf("%5.p", 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.p", 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------7.s-0---------\n");
	one = printf("%7.p", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%7.p", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
}

void	star_point_star(void)
{
	int one;
	int two;

	printf("---------1---------\n");
	one = printf("%.*pb", -1 , 0);
	printf("\n");
	two = ft_printf("%.*pb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*pb", 10, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*pb", 10, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");

printf("---------2---------\n");
	one = printf("%*.*pb", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*pb", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*pb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*pb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%*.*psa", -5, 1, 43);
	printf("\n");
	two = ft_printf("%*.*psa", -5, 1, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.pa", -5, 1);
	printf("\n");
	two = ft_printf("%*.pa", -5, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.pa", -5, -1);
	printf("\n");
	two = ft_printf("%*.pa", -5, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	
	printf("---------1-5---------\n");
	one = printf("%*.*pa", -5, 0, -45);
	printf("\n");
	two = ft_printf("%*.*pa", -5, 0, -45);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1 5---------\n");
	one = printf("%*.pa", -5, 5);
	printf("\n");
	two = ft_printf("%*.pa", -5, 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------pfffffff---------\n");
	one = printf("%*.*pa", -5, 0, -5);
	printf("\n");
	two = ft_printf("%*.*pa", -5, 0, -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1.*s---------\n");
	one = printf("%.*pa", -1, 43);
	printf("\n");
	two = ft_printf("%.*pa", -1, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1.*s---------\n");
	one = printf("%.*pa", -1, min);
	printf("\n");
	two = ft_printf("%.*pa", -1, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*pa", -5, 0, 43);
	printf("\n");
	two = ft_printf("%*.*pa", -5, 0, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*s---------\n");
	one = printf("%.*pa", 5, 43);
	printf("\n");
	two = ft_printf("%.*pa", 5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%-.*pa", 5, 43);
	printf("\n");
	two = ft_printf("%-.*pa", 5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*pa", -5, 0, 43);
	printf("\n");
	two = ft_printf("%-*.*pa", -5, 0, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*pa", -5, -5, 43);
	printf("\n");
	two = ft_printf("%-*.*pa", -5, -5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1 5---------\n");
	one = printf("%*.pa", -5, 5);
	printf("\n");
	two = ft_printf("%*.pa", -5, 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*s---------\n");
	one = printf("%.*pa", -1, -43);
	printf("\n");
	two = ft_printf("%.*pa", -1, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1.*s---------\n");
	one = printf("%.*pa", 5, -3);
	printf("\n");
	two = ft_printf("%.*pa", 5, -3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*pa", 5, -43);
	printf("\n");
	two = ft_printf("%-.*pa", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*pa", 5, INT_MIN);
	printf("\n");
	two = ft_printf("%-.*pa", 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1????---------\n");
	one = printf("%0*.*pb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%0*.*pb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1????---------\n");
	one = printf("%-*.*pb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%-*.*pb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1????---------\n");
	one = printf("%*.*pb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*pb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*pb", 10, -6 , 123);
	printf("\n");
	two = ft_printf("%*.*pb", 10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*pb", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%*.*pb", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*pb", 10, -6 , 3);
	printf("\n");
	two = ft_printf("%*.*pb", 10, -6, 3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*pb", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%*.*pb", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*pb", 20, 6, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*pb", 20, 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*pb", 6, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*pb", 6, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*pb", 29, 20, min);
	printf("\n");
	two = ft_printf("%*.*pb", 29, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*pb", 29, 20, INT_MAX);
	printf("\n");
	two = ft_printf("%*.*pb", 29, 20, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*pb", 6, -20, min);
	printf("\n");
	two = ft_printf("%*.*pb", 6, -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*pb", 10, 6 , -2);
	printf("\n");
	two = ft_printf("%*.*pb", 10, 6, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%10.*pb", -6 , 123);
	printf("\n");
	two = ft_printf("%10.*pb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*pb", 6 , 123);
	printf("\n");
	two = ft_printf("%10.*pb", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%20.*pb", 6, INT_MIN);
	printf("\n");
	two = ft_printf("%20.*pb", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*pb", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%6.*pb", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%29.*pb", 20, min);
	printf("\n");
	two = ft_printf("%29.*pb", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1-123---------\n");
	one = printf("%6.*pb", -20, 1234567891);
	printf("\n");
	two = ft_printf("%6.*pb", -20, 1234567891);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*pb", 6 , min);
	printf("\n");
	two = ft_printf("%10.*pb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------2---------\n");
	one = printf("%*.*p", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*p", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*p", NULL, NULL);
	printf("\n");
	two = ft_printf("%.*p", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*p", 0, 0, 0);
	printf("\n");
	two = ft_printf("%*.*p", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*p", 0, 0, 0);
	printf("\n");
	two = ft_printf("%0*.*p", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%.*p", 0, 0);
	printf("\n");
	two = ft_printf("%.*p", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%*.*p8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*p8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*p", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*p", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*p", 0, -4, NULL);
	printf("\n");
	two = ft_printf("2%*.*p", 0, -4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
}

void	minus_star_point_star(void)
{
	int	one;
	int	two;
	printf("---------1---------\n");
	one = printf("%-.*pb", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*pb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-*.*pb", 10, -2 , 0);
	printf("\n");
	two = ft_printf("%-*.*pb", 10, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");

printf("---------2---------\n");
	one = printf("%-*.*pb", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%-*.*pb", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");

	printf("---------(-).*s---------\n");
	one = printf("%-.*pb", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*pb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 10, -6 , 123);
	printf("\n");
	two = ft_printf("%-*.*pb", 10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 10, -6 , -123);
	printf("\n");
	two = ft_printf("%-*.*pb", 10, -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", -10, -6 , 123);
	printf("\n");
	two = ft_printf("%-*.*pb", -10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*pb", -10, -6 , 123);
	printf("\n");
	two = ft_printf("%*.*pb", -10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-0---------\n");
	one = printf("%*.pb", -10, 0);
	printf("\n");
	two = ft_printf("%*.pb", -10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 10, 6 , 123);
	printf("\n");
	two = ft_printf("%-*.*pb", 10, 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 20, 6, min);
	printf("\n");
	two = ft_printf("%-*.*pb", 20, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-*.*pb", 6, 20, 12345678);
	printf("\n");
	two = ft_printf("%-*.*pb", 6, 20, 12345678);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-*.*pb", 6, -20, 12345678);
	printf("\n");
	two = ft_printf("%-*.*pb", 6, -20, 12345678);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 10, 6 , min);
	printf("\n");
	two = ft_printf("%-*.*pb", 10, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%-10.*pb", -6 , 123);
	printf("\n");
	two = ft_printf("%-10.*pb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1-123---------\n");
	one = printf("%-10.*pb", 6 , 123);
	printf("\n");
	two = ft_printf("%-10.*pb", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-20.*pb", 6, INT_MIN);
	printf("\n");
	two = ft_printf("%-20.*pb", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*pb", 20, min);
	printf("\n");
	two = ft_printf("%-6.*pb", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*pb", -20, min);
	printf("\n");
	two = ft_printf("%-6.*pb", -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*pb", 6 , min);
	printf("\n");
	two = ft_printf("%-10.*pb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1-123---------\n");
	one = printf("%-0.*pb", 0 , min);
	printf("\n");
	two = ft_printf("%-0.*pb", 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 0, 0 , min);
	printf("\n");
	two = ft_printf("%-*.*pb", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*pb", 6, 20 , min);
	printf("\n");
	two = ft_printf("%-*.*pb", 6, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%-*.*pb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%-*.*pb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
       one = printf("1%-*.*p", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-*.*p", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*p", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-*.*p", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*p", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*p", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*p", NULL, NULL);
	printf("\n");
	two = ft_printf("%-.*p", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-.*p", 0, "123");
	printf("\n");
	two = ft_printf("%-.*p", 0, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%-*.*p8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*p8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*pa", -25, 20, min);
	printf("\n");
	two = ft_printf("%-*.*pa", -25, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*pa", -5, -1, min);
	printf("\n");
	two = ft_printf("%-*.*pa", -5, -1, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*pa", -5, 5, min);
	printf("\n");
	two = ft_printf("%-*.*pa", -5, 5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*pa", -15, -15, min);
	printf("\n");
	two = ft_printf("%-*.*pa", -15, -15, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------6---------\n");
	   one = printf("%-*.*p", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*p", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*p", 0, -4, 1);
	printf("\n");
	two = ft_printf("%-*.*p", 0, -4, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------7---------\n");
	   one = printf("%-*.*p", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*p", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------8---------\n");
	   one = printf("%-*.*p", 0, 10, 0);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------(-).*s---------\n");
	one = printf("%0-.*pb", -1 , 0);
	printf("\n");
	two = ft_printf("%0-.*pb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*s---------\n");
	one = printf("%-0.*pb", -1 , 0);
	printf("\n");
	two = ft_printf("%-0.*pb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%0-*.*pb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%0-*.*pb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-0*.*pb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%-0*.*pb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%0-*.*p", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%0-*.*p", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%-0*.*p", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-0*.*p", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
	   one = printf("1%0-*.*p", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%0-*.*p", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-0*.*p", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-0*.*p", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%0-*.*p", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%0-*.*p", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-0*.*p", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-0*.*p", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*p", NULL, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*p", NULL, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------a2---------\n");
	one = printf("%0*.*p", 1, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*p", 1, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*p", NULL, 1, 1);
	printf("\n");
	two = ft_printf("%0*.*p", NULL, 1, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.pa", 20, "abc");
	printf("\n");
	two = ft_printf("%*.pa", 20, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s min---------\n");
	one = printf("%7.pa", min);
	printf("\n");
	two = ft_printf("%7.pa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%-*.pa", 20, "abc");
	printf("\n");
	two = ft_printf("%-*.pa", 20, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s min---------\n");
	one = printf("%-7.pa", min);
	printf("\n");
	two = ft_printf("%-7.pa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1.s 0---------\n");
	one = printf("%7.pa", 0);
	printf("\n");
	two = ft_printf("%7.pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------.s 0---------\n");
	one = printf("%.pa", 0);
	printf("\n");
	two = ft_printf("%.pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-.pa", 0);
	printf("\n");
	two = ft_printf("%-.pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)10.s 0---------\n");
	one = printf("%-10.pa", 0);
	printf("\n");
	two = ft_printf("%-10.pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-.4pa", 0);
	printf("\n");
	two = ft_printf("%-.4pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-10.4pa", 0);
	printf("\n");
	two = ft_printf("%-10.4pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.pa", 20, min);
	printf("\n");
	two = ft_printf("%0*.pa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.pa", 0, min);
	printf("\n");
	two = ft_printf("%0*.pa", 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%0*.pa", -20, min);
	printf("\n");
	two = ft_printf("%0*.pa", -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

void	minus_star_point_star_min(void)
{
	int	one;
	int	two;

	printf("---------1-5---------\n");
	one = printf("%-*.pa", 20, min);
	printf("\n");
	two = ft_printf("%-*.pa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%-.sa", min);
	printf("\n");
	two = ft_printf("%-.sa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH MIN---------\n");
    one = printf("%-*.*p", -2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*p", -2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MIN---------\n");
	   one = printf("%-*.*p", 0, -2147483649, 0);
	printf("\n");
 	two = ft_printf("%-*.*p", 0, -2147483649,  0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH MAX---------\n");
	   one = printf("%-*.*p", 2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*p", 2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*p", 0, 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*p", 0, 2147483647, min);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 2147483647, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*p", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*p", 20, 4, min);
	printf("\n");
	two = ft_printf("%-*.*p", 20, 4, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*p", 4, 20, min);
	printf("\n");
	two = ft_printf("%-*.*p", 4, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

void	wisth_min_max(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------WIsTH_MAX---------\n");
	one = printf("%2147483647p", 0);
	printf("\n");
	two = ft_printf("%2147483647p", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647p", 0);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647p", 0);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647pa%p", 0, -1);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647pa%p", 0, -1);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647pa", 0);
	printf("\n");
	two = ft_printf("%.2147483647pa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX*s ---------\n");
	one = printf("%*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX -*s ---------\n");
	one = printf("%-*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%2147483647.*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%2147483647.*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%.*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%.*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX0.*s ---------\n");
	  one = printf("%0.*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX0s ---------\n");
	  one = printf("%02147483647*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%02147483647*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

void	wisth_min_max_special(void)
{
	int	one;
	int	two;

	one = 0;
	two = 0;
	printf("---------WIsTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647p", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647p", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647p", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647p", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647p", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647p", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%20.2147483647p", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%20.2147483647p", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	

	printf("---------WIsTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647p", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647p", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

int	main(void)
{
	printf("BASIC INPUTS\n\n");
	basic_value();
	printf("STAR POINT STAR\n\n");
	star_point_star();
	printf("MINUS STAR POINT STAR\n\n");
	minus_star_point_star();
	minus_star_point_star_min();
	printf("WIsTH MIN MAX\n\n");
	wisth_min_max();
	printf("WIsTH MIN MAX SPECIAL\n\n");
	wisth_min_max_special();
	return (0);
}
