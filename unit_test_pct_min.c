#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"
#include <limits.h>
int min = '%';
void	basic_value(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------1---------\n");
	one = printf("%0*%a", -5);
	printf("\n");
	two = ft_printf("%0*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%*%a", -5);
	printf("\n");
	two = ft_printf("%*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*%a", -5);
	printf("\n");
	two = ft_printf("%*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*%a", 0);
	printf("\n");
	two = ft_printf("%*%a", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*%a", 0);
	printf("\n");
	two = ft_printf("%-*%a", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*%a", 2);
	printf("\n");
	two = ft_printf("%*%a", 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*%a", 2);
	printf("\n");
	two = ft_printf("%-*%a", 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%2%a");
	printf("\n");
	two = ft_printf("%2%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%3%a");
	printf("\n");
	two = ft_printf("%3%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-3%a");
	printf("\n");
	two = ft_printf("%-3%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1%a");
	printf("\n");
	two = ft_printf("%1%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%-2%a");
	printf("\n");
	two = ft_printf("%-2%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------12---------\n");
	one = printf("%*.*%a", 2, 0);
	printf("\n");
	two = ft_printf("%*.*%a", 2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------13---------\n");
	   one = printf("%-*.*%a", 2, 0);
	printf("\n");
	two = ft_printf("%-*.*%a", 2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------13---------\n");
	   one = printf("%-*.*%a", 5, 0);
	printf("\n");
	two = ft_printf("%-*.*%a", 5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	
	printf("---------14---------\n");
	one = printf("%*.%a", 2);
	printf("\n");
	two = ft_printf("%*.%a", 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------14---------\n");
	one = printf("%*.%a", 5);
	printf("\n");
	two = ft_printf("%*.%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------15---------\n");
	   one = printf("%-*.*%a", 2, 0);
	printf("\n");
	two = ft_printf("%-*.*%a", 2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%*%a", -5);
	printf("\n");
	two = ft_printf("%*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*%a", -5);
	printf("\n");
	two = ft_printf("%*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*%a", 5);
	printf("\n");
	two = ft_printf("%*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*%a", 0);
	printf("\n");
	two = ft_printf("%*%a", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*%a", 0);
	printf("\n");
	two = ft_printf("%*%a", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*%a", -5);
	printf("\n");
	two = ft_printf("%-*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*%a", -5);
	printf("\n");
	two = ft_printf("%-*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*%a", -5);
	printf("\n");
	two = ft_printf("%-*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%-*%a", 5);
	printf("\n");
	two = ft_printf("%-*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-5%a");
	printf("\n");
	two = ft_printf("%-5%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-*%a", 20);
	printf("\n");
	two = ft_printf("%-*%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-20%a");
	printf("\n");
	two = ft_printf("%-20%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%%");
	printf("\n");
	two = ft_printf("%%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%%");
	printf("\n");
	two = ft_printf("%%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.0s---------\n");
	one = printf("%5.0%", -0);
	printf("\n");
	two = ft_printf("%5.0%", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.s---------\n");
	one = printf("%5.%");
	printf("\n");
	two = ft_printf("%5.%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.0s---------\n");
	one = printf("%-5.0%");
	printf("\n");
	two = ft_printf("%-5.0%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.s---------\n");
	one = printf("%-5.%");
	printf("\n");
	two = ft_printf("%-5.%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------(-)0s---------\n");
	one = printf("%0%");
	printf("\n");
	two = ft_printf("%0%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	
	printf("---------1--------\n");
	one = printf("%0%a");
	printf("\n");
	two = ft_printf("%0%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", -5);
	printf("\n");
	two = ft_printf("%0*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0.*%a", -5);
	printf("\n");
	two = ft_printf("%0.*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0*.*---------\n");
	one = printf("%0*.*%a", -29, 20);
	printf("\n");
	two = ft_printf("%0*.*%a", -29, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0*.*---------\n");
	one = printf("%0*.*%a", 29, 20);
	printf("\n");
	two = ft_printf("%0*.*%a", 29, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*%a", 7);
	printf("\n");
	two = ft_printf("%0*%a", 7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0*%a", -7);
	printf("\n");
	two = ft_printf("%0*%a", -7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*%a", 7);
	printf("\n");
	two = ft_printf("%0*%a", 7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", -7);
	printf("\n");
	two = ft_printf("%0*%a", -7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", 2);
	printf("\n");
	two = ft_printf("%0*%a", 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", -7);
	printf("\n");
	two = ft_printf("%0*%a", -7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*%a", 5);
	printf("\n");
	two = ft_printf("%0*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", -5);
	printf("\n");
	two = ft_printf("%0*%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*%", 7);
	printf("\n");
	two = ft_printf("%0*%", 7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%", 0);
	printf("\n");
	two = ft_printf("%0*%", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%", 1);
	printf("\n");
	two = ft_printf("%0*%", 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%0*%", 2);
	printf("\n");
	two = ft_printf("%0*%", 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", -7);
	printf("\n");
	two = ft_printf("%0*%a", -7);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%", 0);
	printf("\n");
	two = ft_printf("%0*%", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", -1);
	printf("\n");
	two = ft_printf("%0*%a", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%0*%a", -2);
	printf("\n");
	two = ft_printf("%0*%a", -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.*%b", -6 );
	printf("\n");
	two = ft_printf("%.*%b", -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.*%b", 6);
	printf("\n");
	two = ft_printf("%.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*%b", -6);
	printf("\n");
	two = ft_printf("%10.*%b", -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*%b", 10, 6);
	printf("\n");
	two = ft_printf("%*.*%b", 10, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%10.*%b", 6);
	printf("\n");
	two = ft_printf("%10.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*%b", 6);
	printf("\n");
	two = ft_printf("%10.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-10.*%b", 6);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*%b", 6);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*%a", 0);
	printf("\n");
	two = ft_printf("%0*%a", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------0*.*-1---------\n");
	one = printf("%0*.*%a", 0, 2);
	printf("\n");
	two = ft_printf("%0*.*%a", 0, 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------0*.*-1---------\n");
	one = printf("%*.*%a", 0, 2);
	printf("\n");
	two = ft_printf("%*.*%a", 0, 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------EMPTY .0s---------\n");
	one = printf("%.0%");
	printf("\n");
	two = ft_printf("%.0%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0s---------\n");
	one = printf("%0%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -s---------\n");
	one = printf("%-%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0s---------\n");
	one = printf("%-0%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-0%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -*s---------\n");
	one = printf("%-*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*s---------\n");
	one = printf("%-.*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -7.*s---------\n");
	one = printf("%-7.*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-7.*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------EMPTY 7.*s---------\n");
	one = printf("%7.*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%7.*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%.*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%.*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%-.*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY s---------\n");
	one = printf("%%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------0s  empty---------\n");
	one = printf("%0*%", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*%", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s---------\n");
	one = printf("%5.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------07.s---------\n");
	one = printf("%07.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%07.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0.s---------\n");
	one = printf("%0.0%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.0%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.4%");
	printf("one=%d\n");
	printf("\n");
	two = ft_printf("%0.4%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5.smin---------\n");
	one = printf("%5.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5.smin---------\n");
	one = printf("%-5.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-5.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------20.smin---------\n");
	one = printf("%20.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%20.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s-123---------\n");
	one = printf("%5.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.%");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------7.s-0---------\n");
	one = printf("%7.%");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%7.%");
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
	one = printf("%.*%b", -1);
	printf("\n");
	two = ft_printf("%.*%b", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*%b", 10, -2);
	printf("\n");
	two = ft_printf("%*.*%b", 10, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-*.*%b", 10, -2);
	printf("\n");
	two = ft_printf("%-*.*%b", 10, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%*.*%b", 0, -2 );
	printf("\n");
	two = ft_printf("%*.*%b", 0, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*%b", 0, -1);
	printf("\n");
	two = ft_printf("%*.*%b", 0, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*%sa", -5, 1);
	printf("\n");
	two = ft_printf("%*.*%sa", -5, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.%a", -5);
	printf("\n");
	two = ft_printf("%*.%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.%a", -5);
	printf("\n");
	two = ft_printf("%*.%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.*%a", -5, 0);
	printf("\n");
	two = ft_printf("%*.*%a", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1 5---------\n");
	one = printf("%*.%a", -5);
	printf("\n");
	two = ft_printf("%*.%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------pfffffff---------\n");
	one = printf("%*.*%a", -5, 0);
	printf("\n");
	two = ft_printf("%*.*%a", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.*s---------\n");
	one = printf("%.*%a", -1);
	printf("\n");
	two = ft_printf("%.*%a", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.*s---------\n");
	one = printf("%.*%a", -1);
	printf("\n");
	two = ft_printf("%.*%a", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*%a", -5, 0);
	printf("\n");
	two = ft_printf("%*.*%a", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*s---------\n");
	one = printf("%.*%a", 5);
	printf("\n");
	two = ft_printf("%.*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*%a", 5);
	printf("\n");
	two = ft_printf("%-.*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*%a", -5, 0);
	printf("\n");
	two = ft_printf("%-*.*%a", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*%a", -5, -5);
	printf("\n");
	two = ft_printf("%-*.*%a", -5, -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1 5---------\n");
	one = printf("%*.%a", -5);
	printf("\n");
	two = ft_printf("%*.%a", -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*s---------\n");
	one = printf("%.*%a", -1);
	printf("\n");
	two = ft_printf("%.*%a", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1.*s---------\n");
	one = printf("%.*%a", 5);
	printf("\n");
	two = ft_printf("%.*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*%a", 5);
	printf("\n");
	two = ft_printf("%-.*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*%a", 5);
	printf("\n");
	two = ft_printf("%-.*%a", 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1????---------\n");
	one = printf("%0*.*%b", 1, -1);
	printf("\n");
	two = ft_printf("%0*.*%b", 1, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1????---------\n");
	one = printf("%-*.*%b", 1, -1);
	printf("\n");
	two = ft_printf("%-*.*%b", 1, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1????---------\n");
	one = printf("%*.*%b", 1, -1);
	printf("\n");
	two = ft_printf("%*.*%b", 1, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*%b", 10, -6);
	printf("\n");
	two = ft_printf("%*.*%b", 10, -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*%b", 10, 6);
	printf("\n");
	two = ft_printf("%*.*%b", 10, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 10, -6);
	printf("\n");
	two = ft_printf("%*.*%b", 10, -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 10, 6);
	printf("\n");
	two = ft_printf("%*.*%b", 10, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 20, 6);
	printf("\n");
	two = ft_printf("%*.*%b", 20, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*%b", 6, 20);
	printf("\n");
	two = ft_printf("%*.*%b", 6, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 29, 20);
	printf("\n");
	two = ft_printf("%*.*%b", 29, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*%b", 29, 20);
	printf("\n");
	two = ft_printf("%*.*%b", 29, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 6, -20);
	printf("\n");
	two = ft_printf("%*.*%b", 6, -20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 6, -20);
	printf("\n");
	two = ft_printf("%*.*%b", 6, -20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", 10, 6);
	printf("\n");
	two = ft_printf("%*.*%b", 10, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%10.*%b", -6);
	printf("\n");
	two = ft_printf("%10.*%b", -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*%b", 6);
	printf("\n");
	two = ft_printf("%10.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%20.*%b", 6);
	printf("\n");
	two = ft_printf("%20.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*%b", 20);
	printf("\n");
	two = ft_printf("%6.*%b", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%29.*%b", 20);
	printf("\n");
	two = ft_printf("%29.*%b", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*%b", -20);
	printf("\n");
	two = ft_printf("%6.*%b", -20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*%b", 6);
	printf("\n");
	two = ft_printf("%10.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%*.*%", NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*%", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*%", NULL);
	printf("\n");
	two = ft_printf("%.*%", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*%", 0, 0);
	printf("\n");
	two = ft_printf("%*.*%", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*%", 0, 0);
	printf("\n");
	two = ft_printf("%0*.*%", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*%", 0);
	printf("\n");
	two = ft_printf("%.*%", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*%", 8, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*%", 8, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*%", 0, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*%", 0, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*%", 1, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*%", 1, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*%", 2, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*%", 2, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*%", 3, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*%", 3, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%-*.*%8", 8, NULL);
	printf("\n");
	two = ft_printf("%-*.*%8", 8, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*%", 0, 4);
	printf("\n");
	two = ft_printf("2%*.*%", 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*%", 0, -4);
	printf("\n");
	two = ft_printf("2%*.*%", 0, -4);
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
	one = printf("%-.*%b", -1);
	printf("\n");
	two = ft_printf("%-.*%b", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*%b", 10, -2);
	printf("\n");
	two = ft_printf("%-*.*%b", 10, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*%b", 0, -2);
	printf("\n");
	two = ft_printf("%-*.*%b", 0, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------(-).*s---------\n");
	one = printf("%-.*%b", -1);
	printf("\n");
	two = ft_printf("%-.*%b", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 10, -6);
	printf("\n");
	two = ft_printf("%-*.*%b", 10, -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 10, -6);
	printf("\n");
	two = ft_printf("%-*.*%b", 10, -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", -10, -6);
	printf("\n");
	two = ft_printf("%-*.*%b", -10, -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*%b", -10, -6);
	printf("\n");
	two = ft_printf("%*.*%b", -10, -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-0---------\n");
	one = printf("%*.%b", -10);
	printf("\n");
	two = ft_printf("%*.%b", -10);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 10, 6);
	printf("\n");
	two = ft_printf("%-*.*%b", 10, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 20, 6);
	printf("\n");
	two = ft_printf("%-*.*%b", 20, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 6, 20);
	printf("\n");
	two = ft_printf("%-*.*%b", 6, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 6, -20);
	printf("\n");
	two = ft_printf("%-*.*%b", 6, -20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 10, 6);
	printf("\n");
	two = ft_printf("%-*.*%b", 10, 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*%b", -6);
	printf("\n");
	two = ft_printf("%-10.*%b", -6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*%b", 6);
	printf("\n");
	two = ft_printf("%-10.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-20.*%b", 6);
	printf("\n");
	two = ft_printf("%-20.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*%b", 20);
	printf("\n");
	two = ft_printf("%-6.*%b", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*%b", -20);
	printf("\n");
	two = ft_printf("%-6.*%b", -20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*%b", 6);
	printf("\n");
	two = ft_printf("%-10.*%b", 6);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-0.*%b", 0);
	printf("\n");
	two = ft_printf("%-0.*%b", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 0, 0);
	printf("\n");
	two = ft_printf("%-*.*%b", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*%b", 6, 20);
	printf("\n");
	two = ft_printf("%-*.*%b", 6, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*%b", 0, -1);
	printf("\n");
	two = ft_printf("%-*.*%b", 0, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------?---------\n");
       one = printf("1%*.*%", 0, 4);
	printf("\n");
	two = ft_printf("2%*.*%", 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
       one = printf("1%-*.*%", 0, 4);
	printf("\n");
	two = ft_printf("2%-*.*%", 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*%", 0, -4);
	printf("\n");
	two = ft_printf("2%-*.*%", 0, -4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*%", NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*%", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*%", NULL);
	printf("\n");
	two = ft_printf("%-.*%", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-.*%", 0);
	printf("\n");
	two = ft_printf("%-.*%", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%-*.*%8", 8, NULL);
	printf("\n");
	two = ft_printf("%-*.*%8", 8, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*%a", -25, 20);
	printf("\n");
	two = ft_printf("%-*.*%a", -25, 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*%a", -5, -1);
	printf("\n");
	two = ft_printf("%-*.*%a", -5, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*%a", -5, 5);
	printf("\n");
	two = ft_printf("%-*.*%a", -5, 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*%a", -15, -15);
	printf("\n");
	two = ft_printf("%-*.*%a", -15, -15);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*%", 0, -4);
	printf("\n");
	two = ft_printf("%-*.*%", 0, -4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*%", 0, -4);
	printf("\n");
	two = ft_printf("%-*.*%", 0, -4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------7---------\n");
	   one = printf("%-*.*%", 0, 0);
	printf("\n");
	two = ft_printf("%-*.*%", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*%", 0, 0);
	printf("\n");
	two = ft_printf("%-*.*%", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------8---------\n");
	   one = printf("%-*.*%", 0, 10);
	printf("\n");
	two = ft_printf("%-*.*%", 0, 10);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------(-).*s---------\n");
	one = printf("%0-.*%b", -1);
	printf("\n");
	two = ft_printf("%0-.*%b", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*s---------\n");
	one = printf("%-0.*%b", -1);
	printf("\n");
	two = ft_printf("%-0.*%b", -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0-*.*%b", 0, -1);
	printf("\n");
	two = ft_printf("%0-*.*%b", 0, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-0*.*%b", 0, -1);
	printf("\n");
	two = ft_printf("%-0*.*%b", 0, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%0-*.*%", 0, 4);
	printf("\n");
	two = ft_printf("2%0-*.*%", 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%-0*.*%", 0, 4);
	printf("\n");
	two = ft_printf("2%-0*.*%", 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%0-*.*%", 0, -4);
	printf("\n");
	two = ft_printf("2%0-*.*%", 0, -4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-0*.*%", 0, -4);
	printf("\n");
	two = ft_printf("2%-0*.*%", 0, -4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0-*.*%", NULL, NULL);
	printf("\n");
	two = ft_printf("%0-*.*%", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-0*.*%", NULL, NULL);
	printf("\n");
	two = ft_printf("%-0*.*%", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*%", NULL, NULL);
	printf("\n");
	two = ft_printf("%0*.*%", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------a2---------\n");
	one = printf("%0*.*%", 1, NULL);
	printf("\n");
	two = ft_printf("%0*.*%", 1, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*%", NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*%", NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.%a", 20);
	printf("\n");
	two = ft_printf("%*.%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s min---------\n");
	one = printf("%7.%a");
	printf("\n");
	two = ft_printf("%7.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%-*.%a", 20);
	printf("\n");
	two = ft_printf("%-*.%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s min---------\n");
	one = printf("%-7.%a");
	printf("\n");
	two = ft_printf("%-7.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s 0---------\n");
	one = printf("%7.%a");
	printf("\n");
	two = ft_printf("%7.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------.s 0---------\n");
	one = printf("%.%a");
	printf("\n");
	two = ft_printf("%.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-.%a");
	printf("\n");
	two = ft_printf("%-.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)10.s 0---------\n");
	one = printf("%-10.%a");
	printf("\n");
	two = ft_printf("%-10.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-.4%a");
	printf("\n");
	two = ft_printf("%-.4%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-10.4%a");
	printf("\n");
	two = ft_printf("%-10.4%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.0%a", 20);
	printf("\n");
	two = ft_printf("%0*.0%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
		
	printf("---------utest---------\n");
	one = printf("%0*.ua", 20);
	printf("\n");
	two = ft_printf("%0*.ua", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1-5---------\n");
	one = printf("%0*.%a", 20);
	printf("\n");
	two = ft_printf("%0*.%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.%a", 0);
	printf("\n");
	two = ft_printf("%0*.%a", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-55---------\n");
	one = printf("%0*.%a", -20);
	printf("\n");
	two = ft_printf("%0*.%a", -20);
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
	one = printf("%-0*.%a", 20);
	printf("\n");
	two = ft_printf("%-0*.%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1-5---------\n");
	one = printf("%-*.%a", 20);
	printf("\n");
	two = ft_printf("%-*.%a", 20);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%-.%a");
	printf("\n");
	two = ft_printf("%-.%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH MIN---------\n");
    one = printf("%-*.*%", -2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*%", -2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MIN---------\n");
	   one = printf("%-*.*%", 0, -2147483649);
	printf("\n");
 	two = ft_printf("%-*.*%", 0, -2147483649);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH MAX---------\n");
	   one = printf("%-*.*%", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*%", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*%", 0, 2147483647);
	printf("\n");
	two = ft_printf("%-*.*%", 0, 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*%", 0, 2147483647);
	printf("\n");
	two = ft_printf("%-*.*%", 0, 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*%", 0, 0);
	printf("\n");
	two = ft_printf("%-*.*%", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*%", 20, 4);
	printf("\n");
	two = ft_printf("%-*.*%", 20, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*%", 4, 20);
	printf("\n");
	two = ft_printf("%-*.*%", 4, 20);
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
	one = printf("%2147483647%");
	printf("\n");
	two = ft_printf("%2147483647%");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647%");
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647%");
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647%a%%");
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647%a%%");
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647%a");
	printf("\n");
	two = ft_printf("%.2147483647%a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX*s ---------\n");
	one = printf("%*%", 2147483647);
	printf("\n");
	two = ft_printf("%*%", 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX -*s ---------\n");
	one = printf("%-*%", 2147483647);
	printf("\n");
	two = ft_printf("%-*%", 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%2147483647.*%", 2147483647);
	printf("\n");
	two = ft_printf("%2147483647.*%", 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%.*%", 2147483647);
	printf("\n");
	two = ft_printf("%.*%", 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX0.*s ---------\n");
	  one = printf("%0.*%", 2147483647);
	printf("\n");
	two = ft_printf("%0.*%", 2147483647);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX0s ---------\n");
	  one = printf("%0*%", 2147483647);
	printf("\n");
	two = ft_printf("%0*%", 2147483647);
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
	one = printf("%.2147483647%");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647%");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647%");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647%");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647%");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647%");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%20.2147483647%");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%20.2147483647%");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647%");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647%");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------WIsTH_MAX-.2147483647 abc---------\n");
	one = printf("%-20.2147483647%");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-20.2147483647%");
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
	/*minus_star_point_star_min();
	printf("WIsTH MIN MAX\n\n");
	wisth_min_max();
	printf("WIsTH MIN MAX SPECIAL\n\n");
	wisth_min_max_special();
	*/
	return (0);
}
