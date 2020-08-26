#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"
#include <limits.h>

void	basic_value(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------1---------\n");
	one = printf("%*da", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%*da", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*da", -5, -1);
	printf("\n");
	two = ft_printf("%*da", -5, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*da", -5, 0);
	printf("\n");
	two = ft_printf("%*da", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*da", 7, -43);
	printf("\n");
	two = ft_printf("%0*da", 7, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*da", 5, 0);
	printf("\n");
	two = ft_printf("%*da", 5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*da", 0, 0);
	printf("\n");
	two = ft_printf("%*da", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*da", 0, 123);
	printf("\n");
	two = ft_printf("%*da", 0, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*da", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%-*da", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*da", -5, -1);
	printf("\n");
	two = ft_printf("%-*da", -5, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*da", -5, 1);
	printf("\n");
	two = ft_printf("%-*da", -5, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%-*da", 5, INT_MIN);
	printf("\n");
	two = ft_printf("%-*da", 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-5da", INT_MIN);
	printf("\n");
	two = ft_printf("%-5da", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%d", INT_MIN);
	printf("\n");
	two = ft_printf("%d", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%d", INT_MIN);
	printf("\n");
	two = ft_printf("%d", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------1---------\n");
	one = printf("%d", INT_MIN);
	printf("\n");
	two = ft_printf("%d", INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%d", NULL);
	printf("\n");
	two = ft_printf("%d", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------5.0d---------\n");
	one = printf("%5.0d", -0);
	printf("\n");
	two = ft_printf("%5.0d", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);


	printf("---------1---------\n");
	one = printf("%0*ia", 5, -43);
	printf("\n");
	two = ft_printf("%0*ia", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", -5, INT_MIN);
	printf("\n");
	two = ft_printf("%0*ia", -5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*da", 7, INT_MAX);
	printf("\n");
	two = ft_printf("%0*da", 7, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0*ia", -7, INT_MIN);
	printf("\n");
	two = ft_printf("%0*ia", -7, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*ia", 7, -43);
	printf("\n");
	two = ft_printf("%0*ia", 7, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", -7, -43);
	printf("\n");
	two = ft_printf("%0*ia", -7, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", 2, -43);
	printf("\n");
	two = ft_printf("%0*ia", 2, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", -7, -43);
	printf("\n");
	two = ft_printf("%0*ia", -7, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*ia", 5, -43);
	printf("\n");
	two = ft_printf("%0*ia", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", -5, -43);
	printf("\n");
	two = ft_printf("%0*ia", -5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*i", 7, -123);
	printf("\n");
	two = ft_printf("%0*i", 7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*i", 0, -123);
	printf("\n");
	two = ft_printf("%0*i", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*i", 1, -123);
	printf("\n");
	two = ft_printf("%0*i", 1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*i", 2, -123);
	printf("\n");
	two = ft_printf("%0*i", 2, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", -7, -123);
	printf("\n");
	two = ft_printf("%0*ia", -7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*i", 0, -123);
	printf("\n");
	two = ft_printf("%0*i", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", -1, -123);
	printf("\n");
	two = ft_printf("%0*ia", -1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%0*ia", -2, INT_MIN);
	printf("\n");
	two = ft_printf("%0*ia", -2, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%.*db", -6 , -123);
	printf("\n");
	two = ft_printf("%.*db", -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.*db", 6 , -123);
	printf("\n");
	two = ft_printf("%.*db", 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*db", -6 ,-123);
	printf("\n");
	two = ft_printf("%10.*db", -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*db", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%*.*db", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%10.*db", 6 , -123);
	printf("\n");
	two = ft_printf("%10.*db", 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*db", 6 ,INT_MIN);
	printf("\n");
	two = ft_printf("%10.*db", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-10.*db", 6 , -123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*db", 6, -123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ia", 0, 0);
	printf("\n");
	two = ft_printf("%0*ia", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------EMPTY .0d---------\n");
	one = printf("%.0d", 0);
	printf("\n");
	two = ft_printf("%.0d", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------EMPTY .0d---------\n");
	one = printf("%.0d", 0);
	printf("\n");
	two = ft_printf("%.0d", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0d---------\n");
	one = printf("%0d", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -d---------\n");
	one = printf("%-d", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0d---------\n");
	one = printf("%-0d", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-0d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------07.d---------\n");
	one = printf("%07.d", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%07.d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------EMPTY -*d---------\n");
	one = printf("%-*d", 0, 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-*d", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*d---------\n");
	one = printf("%-.*d", 0, 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-.*d", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*d---------\n");
	one = printf("%-.*d", 0, 123);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-.*d", 0, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY d---------\n");
	one = printf("%d", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------0*i  empty---------\n");
	one = printf("%0*i", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*i", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.d---------\n");
	one = printf("%5.d", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.d---------\n");
	one = printf("%0.d", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.d", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------5.dINT_MIN---------\n");
	one = printf("%5.d", INT_MIN);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.d", INT_MIN);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------20.dINT_MIN---------\n");
	one = printf("%20.d", INT_MIN);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%20.d", INT_MIN);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.d-123---------\n");
	one = printf("%5.d", -123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.d", -123);
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
	one = printf("%.*db", -1 , 0);
	printf("\n");
	two = ft_printf("%.*db", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------2---------\n");
	one = printf("%*.*db", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*db", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%*.*db", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*db", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*dda", -5, 1, -43);
	printf("\n");
	two = ft_printf("%*.*dda", -5, 1, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.da", -5, -1);
	printf("\n");
	two = ft_printf("%*.da", -5, -1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.*da", -5, 0, -45);
	printf("\n");
	two = ft_printf("%*.*da", -5, 0, -45);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1 5---------\n");
	one = printf("%*.da", -5, -5);
	printf("\n");
	two = ft_printf("%*.da", -5, -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------pfffffff---------\n");
	one = printf("%*.*da", -5, 0, -5);
	printf("\n");
	two = ft_printf("%*.*da", -5, 0, -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1.*d---------\n");
	one = printf("%.*da", -1, -43);
	printf("\n");
	two = ft_printf("%.*da", -1, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*da", -1, INT_MIN);
	printf("\n");
	two = ft_printf("%.*da", -1, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*da", -5, 0, -43);
	printf("\n");
	two = ft_printf("%*.*da", -5, 0, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*da", 5, -43);
	printf("\n");
	two = ft_printf("%.*da", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*da", 5, -43);
	printf("\n");
	two = ft_printf("%-.*da", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*da", -5, 0, -43);
	printf("\n");
	two = ft_printf("%-*.*da", -5, 0, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*da", -5, -5, -43);
	printf("\n");
	two = ft_printf("%-*.*da", -5, -5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1 5---------\n");
	one = printf("%*.da", -5, -5);
	printf("\n");
	two = ft_printf("%*.da", -5, -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*da", -1, -43);
	printf("\n");
	two = ft_printf("%.*da", -1, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1.*d---------\n");
	one = printf("%.*da", 5, -43);
	printf("\n");
	two = ft_printf("%.*da", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*da", 5, -43);
	printf("\n");
	two = ft_printf("%-.*da", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*da", 5, INT_MIN);
	printf("\n");
	two = ft_printf("%-.*da", 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1????---------\n");
	one = printf("%*.*db", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*db", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*db", 10, -6 , -123);
	printf("\n");
	two = ft_printf("%*.*db", 10, -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*db", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%*.*db", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*db", 10, -6 , -123);
	printf("\n");
	two = ft_printf("%*.*db", 10, -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*db", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%*.*db", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*db", 20, 6, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*db", 20, 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*db", 6, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*db", 6, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*db", 29, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*db", 29, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*db", 29, 20, INT_MAX);
	printf("\n");
	two = ft_printf("%*.*db", 29, 20, INT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


printf("---------1-123---------\n");
	one = printf("%*.*db", 6, -20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.*db", 6, -20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*db", 10, 6 , INT_MIN);
	printf("\n");
	two = ft_printf("%*.*db", 10, 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%10.*db", -6 , -123);
	printf("\n");
	two = ft_printf("%10.*db", -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*db", 6 , -123);
	printf("\n");
	two = ft_printf("%10.*db", 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%20.*db", 6, INT_MIN);
	printf("\n");
	two = ft_printf("%20.*db", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*db", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%6.*db", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%29.*db", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%29.*db", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1-123---------\n");
	one = printf("%6.*db", -20, INT_MIN);
	printf("\n");
	two = ft_printf("%6.*db", -20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*db", 6 , INT_MIN);
	printf("\n");
	two = ft_printf("%10.*db", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------2---------\n");
	one = printf("%*.*d", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*d", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*d", NULL, NULL);
	printf("\n");
	two = ft_printf("%.*d", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*d", 0, 0, 0);
	printf("\n");
	two = ft_printf("%*.*d", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*d", 0, 0, 0);
	printf("\n");
	two = ft_printf("%0*.*d", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%.*d", 0, 0);
	printf("\n");
	two = ft_printf("%.*d", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%*.*d8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*d8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*d", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*d", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*d", 0, -4, NULL);
	printf("\n");
	two = ft_printf("2%*.*d", 0, -4, NULL);
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
	printf("---------(-).*d---------\n");
	one = printf("%-.*db", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*db", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*db", 10, -6 , -123);
	printf("\n");
	two = ft_printf("%-*.*db", 10, -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*db", -10, -6 , -123);
	printf("\n");
	two = ft_printf("%-*.*db", -10, -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*db", -10, -6 , -123);
	printf("\n");
	two = ft_printf("%*.*db", -10, -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------1-123---------\n");
	one = printf("%-*.*db", 10, 6 , -123);
	printf("\n");
	two = ft_printf("%-*.*db", 10, 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*db", 20, 6, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*db", 20, 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-*.*db", 6, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*db", 6, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-*.*db", 6, -20, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*db", 6, -20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*db", 10, 6 , INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*db", 10, 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%-10.*db", -6 , -123);
	printf("\n");
	two = ft_printf("%-10.*db", -6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*db", 6 , -123);
	printf("\n");
	two = ft_printf("%-10.*db", 6, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-20.*db", 6, INT_MIN);
	printf("\n");
	two = ft_printf("%-20.*db", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*db", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%-6.*db", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*db", -20, INT_MIN);
	printf("\n");
	two = ft_printf("%-6.*db", -20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*db", 6 , INT_MIN);
	printf("\n");
	two = ft_printf("%-10.*db", 6, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1-123---------\n");
	one = printf("%-0.*db", 0 , INT_MIN);
	printf("\n");
	two = ft_printf("%-0.*db", 0, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------1-123---------\n");
	one = printf("%-*.*db", 0, 0 , INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*db", 0, 0, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("\n");
	printf("---------123-.*s---------\n");
	one = printf("%.*d", 0, 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%.*d", 0, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
printf("--------(-)5.0s---------\n");
	one = printf("%-5.0da", -0);
	printf("\n");
	two = ft_printf("%-5.0da", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("--------(-)5.s---------\n");
	one = printf("%-5.da", -0);
	printf("\n");
	two = ft_printf("%-5.da", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	

printf("---------1-123---------\n");
	one = printf("%-*.*db", 6, 20 , INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*db", 6, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%-*.*db", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%-*.*db", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%-*.*d", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-*.*d", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*d", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-*.*d", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*d", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*d", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*d", NULL, NULL);
	printf("\n");
	two = ft_printf("%-.*d", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-.*d", 0, 123);
	printf("\n");
	two = ft_printf("%-.*d", 0, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%-*.*d8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*d8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*da", -25, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*da", -25, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*da", -5, -1, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*da", -5, -1, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*da", -5, 5, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*da", -5, 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*da", -15, -15, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*da", -15, -15, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------6---------\n");
	   one = printf("%-*.*d", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*d", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*d", 0, -4, 1);
	printf("\n");
	two = ft_printf("%-*.*d", 0, -4, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------7---------\n");
	   one = printf("%-*.*d", 0, 0, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*d", 0, 0, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*d", 0, 0, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*d", 0, 0, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------8---------\n");
	   one = printf("%-*.*d", 0, 10, 0);
	printf("\n");
	two = ft_printf("%-*.*d", 0, 10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------(-).*d---------\n");
	one = printf("%0-.*db", -1 , 0);
	printf("\n");
	two = ft_printf("%0-.*db", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*d---------\n");
	one = printf("%-0.*db", -1 , 0);
	printf("\n");
	two = ft_printf("%-0.*db", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%0-*.*db", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%0-*.*db", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-0*.*db", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%-0*.*db", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%0-*.*d", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%0-*.*d", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%-0*.*d", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-0*.*d", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
	   one = printf("1%0-*.*d", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%0-*.*d", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-0*.*d", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-0*.*d", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%0-*.*d", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%0-*.*d", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-0*.*d", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-0*.*d", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*d", NULL, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*d", NULL, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*d", 1, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*d", 1, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*d", NULL, 1, 1);
	printf("\n");
	two = ft_printf("%0*.*d", NULL, 1, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.da", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%*.da", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.da", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%0*.da", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.da", 0, INT_MIN);
	printf("\n");
	two = ft_printf("%0*.da", 0, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%0*.da", -20, INT_MIN);
	printf("\n");
	two = ft_printf("%0*.da", -20, INT_MIN);
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
	one = printf("%-*.da", 20, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.da", 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------WIDTH MIN---------\n");
    one = printf("%-*.*d", -2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*d", -2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MIN---------\n");
	   one = printf("%-*.*d", 0, -2147483649, 0);
	printf("\n");
 	two = ft_printf("%-*.*d", 0, -2147483649,  0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH MAX---------\n");
	   one = printf("%-*.*d", 2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*d", 2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*d", 0, 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*d", 0, 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*d", 0, 2147483647, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*d", 0, 2147483647, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)1.s 0---------\n");
	one = printf("%-.4da", 0);
	printf("\n");
	two = ft_printf("%-.4da", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------(-)1.s 0---------\n");
	one = printf("%-10.4da", 0);
	printf("\n");
	two = ft_printf("%-10.4da", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*d", 0, 0, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*d", 0, 0, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*d", 20, 4, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*d", 20, 4, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*d", 4, 20, INT_MIN);
	printf("\n");
	two = ft_printf("%-*.*d", 4, 20, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

void	width_min_max(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------WIDTH_MAX---------\n");
	one = printf("%2147483647d", 0);
	printf("\n");
	two = ft_printf("%2147483647d", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647d", 0);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647d", 0);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647da%d", 0, -1);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647da%d", 0, -1);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647da", 0);
	printf("\n");
	two = ft_printf("%.2147483647da", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX*d ---------\n");
	one = printf("%*d", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*d", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX -*d ---------\n");
	one = printf("%-*d", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*d", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%2147483647.*d", 2147483647, 0);
	printf("\n");
	two = ft_printf("%2147483647.*d", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%.*d", 2147483647, 0);
	printf("\n");
	two = ft_printf("%.*d", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*d ---------\n");
	  one = printf("%0.*d", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*d", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0d ---------\n");
	  one = printf("%02147483647d", 2147483647, 0);
	printf("\n");
	two = ft_printf("%02147483647d", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

void	width_min_max_special(void)
{
	int	one;
	int	two;

	one = 0;
	two = 0;
	printf("---------WIDTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647d", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647d", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647d", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647d", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647d", INT_MIN);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647d", INT_MIN);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647d", INT_MIN);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647d", INT_MIN);
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
	printf("WIDTH MIN MAX\n\n");
	width_min_max();
	printf("WIDTH MIN MAX SPECIAL\n\n");
	width_min_max_special();
	return (0);
}
