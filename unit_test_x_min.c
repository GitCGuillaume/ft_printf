#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"
#include <limits.h>
int min = INT_MAX;
void	basic_value(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------1---------\n");
	one = printf("%0*xa", -5, 123);
	printf("\n");
	two = ft_printf("%0*xa", -5, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%*xa", -5, 123);
	printf("\n");
	two = ft_printf("%*xa", -5, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*xa", -5, -2);
	printf("\n");
	two = ft_printf("%*xa", -5, -2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*xa", 0, NULL);
	printf("\n");
	two = ft_printf("%*xa", 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*xa", 0, NULL);
	printf("\n");
	two = ft_printf("%-*xa", 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*xa", 2, NULL);
	printf("\n");
	two = ft_printf("%*xa", 2, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*xa", 2, NULL);
	printf("\n");
	two = ft_printf("%-*xa", 2, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%2xa", NULL);
	printf("\n");
	two = ft_printf("%2xa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%3xa", NULL);
	printf("\n");
	two = ft_printf("%3xa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-3xa", NULL);
	printf("\n");
	two = ft_printf("%-3xa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1xa", NULL);
	printf("\n");
	two = ft_printf("%1xa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%-2xa", NULL);
	printf("\n");
	two = ft_printf("%-2xa", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------12---------\n");
	one = printf("%*.*xa", 2, 0, NULL);
	printf("\n");
	two = ft_printf("%*.*xa", 2, 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------13---------\n");
	   one = printf("%-*.*xa", 2, 0, NULL);
	printf("\n");
	two = ft_printf("%-*.*xa", 2, 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------13---------\n");
	   one = printf("%-*.*xa", 5, 0, 12);
	printf("\n");
	two = ft_printf("%-*.*xa", 5, 0, 12);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	
	printf("---------14---------\n");
	one = printf("%*.xa", 2, NULL);
	printf("\n");
	two = ft_printf("%*.xa", 2, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------14---------\n");
	one = printf("%*.xa", 5, 12);
	printf("\n");
	two = ft_printf("%*.xa", 5, 12);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------15---------\n");
	   one = printf("%-*.*xa", 2, 0, NULL);
	printf("\n");
	two = ft_printf("%-*.*xa", 2, 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%*xa", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%*xa", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*xa", -5, 0);
	printf("\n");
	two = ft_printf("%*xa", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*xa", 5, 0);
	printf("\n");
	two = ft_printf("%*xa", 5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*xa", 0, 0);
	printf("\n");
	two = ft_printf("%*xa", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*xa", 0, 123);
	printf("\n");
	two = ft_printf("%*xa", 0, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*xa", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%-*xa", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*xa", -5, "-1");
	printf("\n");
	two = ft_printf("%-*xa", -5, "-1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*xa", -5, 1);
	printf("\n");
	two = ft_printf("%-*xa", -5, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%-*xa", 5, INT_MIN);
	printf("\n");
	two = ft_printf("%-*xa", 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-5xa", INT_MIN);
	printf("\n");
	two = ft_printf("%-5xa", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-*xa", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%-*xa", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-20xa", INT_MIN);
	printf("\n");
	two = ft_printf("%-20xa", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%p", INT_MIN);
	printf("\n");
	two = ft_printf("%p", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%x", INT_MIN);
	printf("\n");
	two = ft_printf("%x", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------1---------\n");
	one = printf("%x", INT_MIN);
	printf("\n");
	two = ft_printf("%x", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%x", NULL);
	printf("\n");
	two = ft_printf("%x", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.0s---------\n");
	one = printf("%5.0x", -0);
	printf("\n");
	two = ft_printf("%5.0x", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.s---------\n");
	one = printf("%5.x", -0);
	printf("\n");
	two = ft_printf("%5.x", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.0s---------\n");
	one = printf("%-5.0x", -0);
	printf("\n");
	two = ft_printf("%-5.0x", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------5.s---------\n");
	one = printf("%-5.x", -0);
	printf("\n");
	two = ft_printf("%-5.x", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------(-)0s---------\n");
	one = printf("%0x", -0);
	printf("\n");
	two = ft_printf("%0x", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	
	printf("---------1--------\n");
	one = printf("%0xa", -43);
	printf("\n");
	two = ft_printf("%0xa", -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0.*xa", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%0.*xa", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0*.*---------\n");
	one = printf("%0*.*xa", -29, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%0*.*xa", -29, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0*.*---------\n");
	one = printf("%0*.*xa", 29, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%0*.*xa", 29, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*xa", 7, INT_MAX);
	printf("\n");
	two = ft_printf("%0*xa", 7, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0*xa", -7, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", -7, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*xa", 7, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", 7, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", -7, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", -7, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", 2, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", 2, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", -7, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", -7, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*xa", 5, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*x", 7, -123);
	printf("\n");
	two = ft_printf("%0*x", 7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*x", 0, -123);
	printf("\n");
	two = ft_printf("%0*x", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*x", 1, -123);
	printf("\n");
	two = ft_printf("%0*x", 1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%0*x", 2, -123);
	printf("\n");
	two = ft_printf("%0*x", 2, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", -7, -123);
	printf("\n");
	two = ft_printf("%0*xa", -7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%0*x", 0, -123);
	printf("\n");
	two = ft_printf("%0*x", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", -1, -123);
	printf("\n");
	two = ft_printf("%0*xa", -1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	
	printf("---------1---------\n");
	one = printf("%0*xa", -2, INT_MIN);
	printf("\n");
	two = ft_printf("%0*xa", -2, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%.*xb", -6 , 123);
	printf("\n");
	two = ft_printf("%.*xb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%.*xb", 6 , -123);
	printf("\n");
	two = ft_printf("%.*xb", 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*xb", -6 , -123);
	printf("\n");
	two = ft_printf("%10.*xb", -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*xb", 10, 6 , 1);
	printf("\n");
	two = ft_printf("%*.*xb", 10, 6, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%10.*xb", 6 , 123);
	printf("\n");
	two = ft_printf("%10.*xb", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*xb", 6 , INT_MIN);
	printf("\n");
	two = ft_printf("%10.*xb", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-10.*xb", 6 , 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*xb", 6, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*xa", 0, 0);
	printf("\n");
	two = ft_printf("%0*xa", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------0*.*-1---------\n");
	one = printf("%0*.*xa", 0, 2, 123);
	printf("\n");
	two = ft_printf("%0*.*xa", 0, 2, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------0*.*-1---------\n");
	one = printf("%*.*xa", 0, 2, 123);
	printf("\n");
	two = ft_printf("%*.*xa", 0, 2, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------EMPTY .0s---------\n");
	one = printf("%.0x", 0);
	printf("\n");
	two = ft_printf("%.0x", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0s---------\n");
	one = printf("%0x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -s---------\n");
	one = printf("%-x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0s---------\n");
	one = printf("%-0x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-0x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY -*s---------\n");
	one = printf("%-*x", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*x", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*s---------\n");
	one = printf("%-.*x", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*x", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -7.*s---------\n");
	one = printf("%-7.*x", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-7.*x", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------EMPTY 7.*s---------\n");
	one = printf("%7.*x", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%7.*x", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%.*x", 0, 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%.*x", 0, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%-.*x", 0, 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*x", 0, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY s---------\n");
	one = printf("%x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------0s  empty---------\n");
	one = printf("%0*x", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*x", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s---------\n");
	one = printf("%5.x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------07.s---------\n");
	one = printf("%07.x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%07.x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------0.s---------\n");
	one = printf("%0.0x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.0x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.4x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.4x", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5.smin---------\n");
	one = printf("%5.x", 1);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.x", 1);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5.smin---------\n");
	one = printf("%-5.x", 1);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-5.x", 1);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------20.smin---------\n");
	one = printf("%20.x", INT_MAX);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%20.x", INT_MAX);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s-123---------\n");
	one = printf("%5.x", 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.x", 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------7.s-0---------\n");
	one = printf("%7.x", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%7.x", 0);
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
	one = printf("%.*xb", -1 , 0);
	printf("\n");
	two = ft_printf("%.*xb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*xb", 10, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*xb", 10, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-*.*xb", 10, -2 , 0);
	printf("\n");
	two = ft_printf("%-*.*xb", 10, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%*.*xb", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*xb", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*xb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*xb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*xsa", -5, 1, 43);
	printf("\n");
	two = ft_printf("%*.*xsa", -5, 1, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.xa", -5, 1);
	printf("\n");
	two = ft_printf("%*.xa", -5, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.xa", -5, -1);
	printf("\n");
	two = ft_printf("%*.xa", -5, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.*xa", -5, 0, 45);
	printf("\n");
	two = ft_printf("%*.*xa", -5, 0, 45);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1 5---------\n");
	one = printf("%*.xa", -5, 5);
	printf("\n");
	two = ft_printf("%*.xa", -5, 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------pfffffff---------\n");
	one = printf("%*.*xa", -5, 0, 5);
	printf("\n");
	two = ft_printf("%*.*xa", -5, 0, 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.*s---------\n");
	one = printf("%.*xa", -1, 43);
	printf("\n");
	two = ft_printf("%.*xa", -1, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.*s---------\n");
	one = printf("%.*xa", -1, INT_MIN);
	printf("\n");
	two = ft_printf("%.*xa", -1, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*xa", -5, 0, 43);
	printf("\n");
	two = ft_printf("%*.*xa", -5, 0, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*s---------\n");
	one = printf("%.*xa", 5, 43);
	printf("\n");
	two = ft_printf("%.*xa", 5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*xa", 5, 43);
	printf("\n");
	two = ft_printf("%-.*xa", 5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*xa", -5, 0, 43);
	printf("\n");
	two = ft_printf("%-*.*xa", -5, 0, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*xa", -5, -5, 43);
	printf("\n");
	two = ft_printf("%-*.*xa", -5, -5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1 5---------\n");
	one = printf("%*.xa", -5, 5);
	printf("\n");
	two = ft_printf("%*.xa", -5, 5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*s---------\n");
	one = printf("%.*xa", -1, 43);
	printf("\n");
	two = ft_printf("%.*xa", -1, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1.*s---------\n");
	one = printf("%.*xa", 5, 3);
	printf("\n");
	two = ft_printf("%.*xa", 5, 3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*xa", 5, 43);
	printf("\n");
	two = ft_printf("%-.*xa", 5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*xa", 5, INT_MAX);
	printf("\n");
	two = ft_printf("%-.*xa", 5, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1????---------\n");
	one = printf("%0*.*xb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%0*.*xb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1????---------\n");
	one = printf("%-*.*xb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%-*.*xb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1????---------\n");
	one = printf("%*.*xb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*xb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*xb", 10, -6 , 123);
	printf("\n");
	two = ft_printf("%*.*xb", 10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*xb", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%*.*xb", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 10, -6 , 3);
	printf("\n");
	two = ft_printf("%*.*xb", 10, -6, 3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 10, 6 , 123);
	printf("\n");
	two = ft_printf("%*.*xb", 10, 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 20, 6, INT_MAX);
	printf("\n");
	two = ft_printf("%*.*xb", 20, 6, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*xb", 6, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*xb", 6, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 29, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*xb", 29, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*xb", 29, 20, INT_MAX);
	printf("\n");
	two = ft_printf("%*.*xb", 29, 20, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 6, -20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*xb", 6, -20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 6, -20, INT_MAX);
	printf("\n");
	two = ft_printf("%*.*xb", 6, -20, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", 10, 6 , 2);
	printf("\n");
	two = ft_printf("%*.*xb", 10, 6, 2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%10.*xb", -6 , 123);
	printf("\n");
	two = ft_printf("%10.*xb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*xb", 6 , 123);
	printf("\n");
	two = ft_printf("%10.*xb", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%20.*xb", 6, INT_MIN);
	printf("\n");
	two = ft_printf("%20.*xb", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*xb", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%6.*xb", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%29.*xb", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%29.*xb", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*xb", -20, 1234567891);
	printf("\n");
	two = ft_printf("%6.*xb", -20, 1234567891);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*xb", 6 , INT_MAX);
	printf("\n");
	two = ft_printf("%10.*xb", 6, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%*.*x", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*x", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*x", NULL, NULL);
	printf("\n");
	two = ft_printf("%.*x", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*x", 0, 0, 0);
	printf("\n");
	two = ft_printf("%*.*x", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*x", 0, 0, 0);
	printf("\n");
	two = ft_printf("%0*.*x", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*x", 0, 0);
	printf("\n");
	two = ft_printf("%.*x", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*x", 8, NULL, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*x", 8, NULL, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*x", 0, NULL, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*x", 0, NULL, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*x", 1, NULL, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*x", 1, NULL, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*x", 2, NULL, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*x", 2, NULL, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*x", 3, NULL, NULL);
	printf("\n");
	printf("one=%d\n", one);
	two = ft_printf("%*.*x", 3, NULL, NULL);
	printf("\n");
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%-*.*x8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*x8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*x", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*x", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*x", 0, -4, NULL);
	printf("\n");
	two = ft_printf("2%*.*x", 0, -4, NULL);
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
	one = printf("%-.*xb", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*xb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*xb", 10, -2 , 0);
	printf("\n");
	two = ft_printf("%-*.*xb", 10, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*xb", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%-*.*xb", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------(-).*s---------\n");
	one = printf("%-.*xb", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*xb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 10, -6 , 123);
	printf("\n");
	two = ft_printf("%-*.*xb", 10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 10, -6 , 123);
	printf("\n");
	two = ft_printf("%-*.*xb", 10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", -10, -6 , 123);
	printf("\n");
	two = ft_printf("%-*.*xb", -10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*xb", -10, -6 , 123);
	printf("\n");
	two = ft_printf("%*.*xb", -10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-0---------\n");
	one = printf("%*.xb", -10, 0);
	printf("\n");
	two = ft_printf("%*.xb", -10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 10, 6 , 123);
	printf("\n");
	two = ft_printf("%-*.*xb", 10, 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 20, 6, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*xb", 20, 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 6, 20, 12345678);
	printf("\n");
	two = ft_printf("%-*.*xb", 6, 20, 12345678);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 6, -20, 12345678);
	printf("\n");
	two = ft_printf("%-*.*xb", 6, -20, 12345678);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 10, 6 , INT_MAX);
	printf("\n");
	two = ft_printf("%-*.*xb", 10, 6, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*xb", -6 , 123);
	printf("\n");
	two = ft_printf("%-10.*xb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*xb", 6 , 123);
	printf("\n");
	two = ft_printf("%-10.*xb", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-20.*xb", 6, INT_MIN);
	printf("\n");
	two = ft_printf("%-20.*xb", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*xb", 20, INT_MAX);
	printf("\n");
	two = ft_printf("%-6.*xb", 20, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*xb", -20, INT_MIN);
	printf("\n");
	two = ft_printf("%-6.*xb", -20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*xb", 6 , INT_MIN);
	printf("\n");
	two = ft_printf("%-10.*xb", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-0.*xb", 0 , INT_MAX);
	printf("\n");
	two = ft_printf("%-0.*xb", 0, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 0, 0 , INT_MAX);
	printf("\n");
	two = ft_printf("%-*.*xb", 0, 0, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*xb", 6, 20 , INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*xb", 6, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*xb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%-*.*xb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------?---------\n");
       one = printf("1%*.*x", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*x", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
       one = printf("1%-*.*x", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-*.*x", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*x", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-*.*x", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*x", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*x", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*x", NULL, NULL);
	printf("\n");
	two = ft_printf("%-.*x", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-.*x", 0, "123");
	printf("\n");
	two = ft_printf("%-.*x", 0, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%-*.*x8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*x8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*xa", -25, 20, min);
	printf("\n");
	two = ft_printf("%-*.*xa", -25, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*xa", -5, -1, min);
	printf("\n");
	two = ft_printf("%-*.*xa", -5, -1, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*xa", -5, 5, min);
	printf("\n");
	two = ft_printf("%-*.*xa", -5, 5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*xa", -15, -15, min);
	printf("\n");
	two = ft_printf("%-*.*xa", -15, -15, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------6---------\n");
	   one = printf("%-*.*x", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*x", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*x", 0, -4, 1);
	printf("\n");
	two = ft_printf("%-*.*x", 0, -4, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------7---------\n");
	   one = printf("%-*.*x", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*x", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*x", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*x", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------8---------\n");
	   one = printf("%-*.*x", 0, 10, 0);
	printf("\n");
	two = ft_printf("%-*.*x", 0, 10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------(-).*s---------\n");
	one = printf("%0-.*xb", -1 , 0);
	printf("\n");
	two = ft_printf("%0-.*xb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*s---------\n");
	one = printf("%-0.*xb", -1 , 0);
	printf("\n");
	two = ft_printf("%-0.*xb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0-*.*xb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%0-*.*xb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-0*.*xb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%-0*.*xb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%0-*.*x", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%0-*.*x", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%-0*.*x", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-0*.*x", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
	   one = printf("1%0-*.*x", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%0-*.*x", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-0*.*x", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-0*.*x", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%0-*.*x", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%0-*.*x", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-0*.*x", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-0*.*x", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*x", NULL, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*x", NULL, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------a2---------\n");
	one = printf("%0*.*x", 1, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*x", 1, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*x", NULL, 1, 1);
	printf("\n");
	two = ft_printf("%0*.*x", NULL, 1, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.xa", 20, 123);
	printf("\n");
	two = ft_printf("%*.xa", 20, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s min---------\n");
	one = printf("%7.xa", min);
	printf("\n");
	two = ft_printf("%7.xa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%-*.xa", 20, 123);
	printf("\n");
	two = ft_printf("%-*.xa", 20, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s min---------\n");
	one = printf("%-7.xa", min);
	printf("\n");
	two = ft_printf("%-7.xa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.s 0---------\n");
	one = printf("%7.xa", 0);
	printf("\n");
	two = ft_printf("%7.xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------.s 0---------\n");
	one = printf("%.xa", 0);
	printf("\n");
	two = ft_printf("%.xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-.xa", 0);
	printf("\n");
	two = ft_printf("%-.xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)10.s 0---------\n");
	one = printf("%-10.xa", 0);
	printf("\n");
	two = ft_printf("%-10.xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-.4xa", 0);
	printf("\n");
	two = ft_printf("%-.4xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-10.4xa", 0);
	printf("\n");
	two = ft_printf("%-10.4xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.xa", 20, min);
	printf("\n");
	two = ft_printf("%0*.xa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.xa", 0, min);
	printf("\n");
	two = ft_printf("%0*.xa", 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-55---------\n");
	one = printf("%0*.xa", -20, min);
	printf("\n");
	two = ft_printf("%0*.xa", -20, min);
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
/*
	printf("---------1-5---------\n");
	one = printf("%-*.xa", 20, min);
	printf("\n");
	two = ft_printf("%-*.xa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%-.xa", min);
	printf("\n");
	two = ft_printf("%-.xa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
*/	printf("---------WIsTH MIN---------\n");
    one = printf("%-*.*x", -2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*x", -2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MIN---------\n");
	   one = printf("%-*.*x", 0, -2147483649, 0);
	printf("\n");
 	two = ft_printf("%-*.*x", 0, -2147483649,  0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH MAX---------\n");
	   one = printf("%-*.*x", 2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*x", 2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*x", 0, 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*x", 0, 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*x", 0, 2147483647, min);
	printf("\n");
	two = ft_printf("%-*.*x", 0, 2147483647, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*x", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*x", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*x", 20, 4, min);
	printf("\n");
	two = ft_printf("%-*.*x", 20, 4, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*x", 4, 20, min);
	printf("\n");
	two = ft_printf("%-*.*x", 4, 20, min);
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
	one = printf("%2147483647x", 0);
	printf("\n");
	two = ft_printf("%2147483647x", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647x", 0);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647x", 0);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647xa%x", 0, -1);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647xa%x", 0, -1);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647xa", 0);
	printf("\n");
	two = ft_printf("%.2147483647xa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX*s ---------\n");
	one = printf("%*x", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*x", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX -*s ---------\n");
	one = printf("%-*x", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*x", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%2147483647.*x", 2147483647, 0);
	printf("\n");
	two = ft_printf("%2147483647.*x", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%.*x", 2147483647, 0);
	printf("\n");
	two = ft_printf("%.*x", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX0.*s ---------\n");
	  one = printf("%0.*x", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*x", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX0s ---------\n");
	  one = printf("%0*x", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0*x", 2147483647, 0);
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
	one = printf("%.2147483647x", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647x", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647x", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647x", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647x", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647x", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%20.2147483647x", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%20.2147483647x", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647x", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647x", min);
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
	/*printf("BASIC INPUTS\n\n");
	basic_value();
	printf("STAR POINT STAR\n\n");
	star_point_star();
	printf("MINUS STAR POINT STAR\n\n");
	minus_star_point_star();
	*/minus_star_point_star_min();
	printf("WIsTH MIN MAX\n\n");
	wisth_min_max();
	printf("WIsTH MIN MAX SPECIAL\n\n");
	wisth_min_max_special();
	
	return (0);
}
