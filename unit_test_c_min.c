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
	one = printf("%-32ca", 'c');
	printf("\n");
	two = ft_printf("%-32ca", 'c');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%32ca", 'c');
	printf("\n");
	two = ft_printf("%32ca", 'c');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", 0, 'c');
	printf("\n");
	two = ft_printf("%-*ca", 0, 'c');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", NULL, 'c');
	printf("\n");
	two = ft_printf("%-*ca", NULL, 'c');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", -32, 'c');
	printf("\n");
	two = ft_printf("%-*ca", -32, 'c');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-32ca", NULL);
	printf("\n");
	two = ft_printf("%-32ca", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%32ca", NULL);
	printf("\n");
	two = ft_printf("%32ca", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", 0, NULL);
	printf("\n");
	two = ft_printf("%-*ca", 0, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", NULL, NULL);
	printf("\n");
	two = ft_printf("%-*ca", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", -32, NULL);
	printf("\n");
	two = ft_printf("%-*ca", -32, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*ca", -5, 'c');
	printf("\n");
	two = ft_printf("%*ca", -5, 'c');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*ca", -5, 100);
	printf("\n");
	two = ft_printf("%*ca", -5, 100);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*ca", -5, 0);
	printf("\n");
	two = ft_printf("%*ca", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", 7, 66);
	printf("\n");
	two = ft_printf("%0*ca", 7, 66);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*ca", 5, 0);
	printf("\n");
	two = ft_printf("%*ca", 5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%*ca", 0, 0);
	printf("\n");
	two = ft_printf("%*ca", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*ca", 0, 123);
	printf("\n");
	two = ft_printf("%*ca", 0, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", -5, 'a');
	printf("\n");
	two = ft_printf("%-*ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", -5, 'a');
	printf("\n");
	two = ft_printf("%-*ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*ca", -5, 'a');
	printf("\n");
	two = ft_printf("%-*ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%-*ca", 5, INT_MIN);
	printf("\n");
	two = ft_printf("%-*ca", 5, INT_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-5ca", 'a');
	printf("\n");
	two = ft_printf("%-5ca", 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%c", 'a');
	printf("\n");
	two = ft_printf("%c", 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%c", 'a');
	printf("\n");
	two = ft_printf("%c", 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------1---------\n");
	one = printf("%c", 'a');
	printf("\n");
	two = ft_printf("%c", 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%c", NULL);
	printf("\n");
	two = ft_printf("%c", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------5.0d---------\n");
	one = printf("%5.0c", -0);
	printf("\n");
	two = ft_printf("%5.0c", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%0*ca", 5, 'a');
	printf("\n");
	two = ft_printf("%0*ca", 5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", -5, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", 7, 'a');
	printf("\n");
	two = ft_printf("%0*ca", 7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0*ca", -7, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*ca", 7, 'a');
	printf("\n");
	two = ft_printf("%0*ca", 7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", -7, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", 2, 'a');
	printf("\n");
	two = ft_printf("%0*ca", 2, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", -7, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*ca", 5, 'a');
	printf("\n");
	two = ft_printf("%0*ca", 5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", -5, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*c", 7, 'a');
	printf("\n");
	two = ft_printf("%0*c", 7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*c", 0, 'a');
	printf("\n");
	two = ft_printf("%0*c", 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*c", 1, 'a');
	printf("\n");
	two = ft_printf("%0*c", 1, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*c", 2, 'a');
	printf("\n");
	two = ft_printf("%0*c", 2, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", -7, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -7, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*c", 0, 'a');
	printf("\n");
	two = ft_printf("%0*c", 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", -1, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -1, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%0*ca", -2, 'a');
	printf("\n");
	two = ft_printf("%0*ca", -2, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%.*cb", -6 , 123);
	printf("\n");
	two = ft_printf("%.*cb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.*cb", 6 , 123);
	printf("\n");
	two = ft_printf("%.*cb", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*cb", -6 , 123);
	printf("\n");
	two = ft_printf("%10.*cb", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*cb", 10, 6 , 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 10, 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%10.*cb", 6 , 'a');
	printf("\n");
	two = ft_printf("%10.*cb", 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*cb", 6 , 'a');
	printf("\n");
	two = ft_printf("%10.*cb", 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-10.*cb", 6 , 'a');
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*cb", 6, 'a');
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ca", 0, 0);
	printf("\n");
	two = ft_printf("%0*ca", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------EMPTY .0d---------\n");
	one = printf("%.0c", 0);
	printf("\n");
	two = ft_printf("%.0c", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0d---------\n");
	one = printf("%0c", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -d---------\n");
	one = printf("%-c", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0d---------\n");
	one = printf("%-0c", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-0c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------07.d---------\n");
	one = printf("%07.c", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%07.c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------EMPTY -*d---------\n");
	one = printf("%-*c", 0, 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-*c", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*d---------\n");
	one = printf("%-.*c", 0, 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-.*c", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*d---------\n");
	one = printf("%-.*c", 0, 'a');
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-.*c", 0, 'a');
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY d---------\n");
	one = printf("%c", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------0*i  empty---------\n");
	one = printf("%0*c", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*c", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.d---------\n");
	one = printf("%5.c", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.d---------\n");
	one = printf("%0.c", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------5.dINT_MIN---------\n");
	one = printf("%5.c", 66);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.c", 66);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------20.dINT_MIN---------\n");
	one = printf("%20.c", 'a');
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%20.c", 'a');
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.d-123---------\n");
	one = printf("%5.c", 'a');
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.c", 'a');
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
	one = printf("%.*cb", -1 , 0);
	printf("\n");
	two = ft_printf("%.*cb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------2---------\n");
	one = printf("%*.*cb", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*cb", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%*.*cb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*cb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*cda", -5, 1, 'a');
	printf("\n");
	two = ft_printf("%*.*cda", -5, 1, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.ca", -5, 'a');
	printf("\n");
	two = ft_printf("%*.ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.*ca", -5, 0, 'a');
	printf("\n");
	two = ft_printf("%*.*ca", -5, 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.*ca", 5, 0, 'a');
	printf("\n");
	two = ft_printf("%*.*ca", 5, 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	
	printf("---------1 5---------\n");
	one = printf("%*.ca", -5, 'a');
	printf("\n");
	two = ft_printf("%*.ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------pfffffff---------\n");
	one = printf("%*.*ca", -5, 0, 'a');
	printf("\n");
	two = ft_printf("%*.*ca", -5, 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1.*d---------\n");
	one = printf("%.*ca", -1, 'a');
	printf("\n");
	two = ft_printf("%.*ca", -1, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*ca", -1, 'a');
	printf("\n");
	two = ft_printf("%.*ca", -1, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*ca", -5, 0, 66);
	printf("\n");
	two = ft_printf("%*.*ca", -5, 0, 66);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*ca", 5, 65);
	printf("\n");
	two = ft_printf("%.*ca", 5, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*ca", 5, 65);
	printf("\n");
	two = ft_printf("%-.*ca", 5, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*ca", -5, 0, 65);
	printf("\n");
	two = ft_printf("%-*.*ca", -5, 0, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*ca", -5, -5, 65);
	printf("\n");
	two = ft_printf("%-*.*ca", -5, -5, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1 5---------\n");
	one = printf("%*.ca", -5, 'a');
	printf("\n");
	two = ft_printf("%*.ca", -5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*ca", -1, 65);
	printf("\n");
	two = ft_printf("%.*ca", -1, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1.*d---------\n");
	one = printf("%.*ca", 5, 65);
	printf("\n");
	two = ft_printf("%.*ca", 5, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*ca", 5, 'a');
	printf("\n");
	two = ft_printf("%-.*ca", 5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*ca", 5, 'a');
	printf("\n");
	two = ft_printf("%-.*ca", 5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1????---------\n");
	one = printf("%*.*cb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*cb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*cb", 10, -6 , 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 10, -6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*cb", 10, 6 , 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 10, 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*cb", 10, -6 , 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 10, -6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*cb", 10, 6 , 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 10, 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*cb", 20, 6, 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 20, 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*cb", 6, 20, 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 6, 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*cb", 29, 20, 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 29, 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*cb", 29, 20, 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 29, 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


printf("---------1-123---------\n");
	one = printf("%*.*cb", 6, -20, 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 6, -20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*cb", 10, 6 , 'a');
	printf("\n");
	two = ft_printf("%*.*cb", 10, 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%10.*cb", -6 , 'a');
	printf("\n");
	two = ft_printf("%10.*cb", -6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*cb", 6 , 'a');
	printf("\n");
	two = ft_printf("%10.*cb", 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%20.*cb", 6, 'a');
	printf("\n");
	two = ft_printf("%20.*cb", 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%6.*cb", 20, 'a');
	printf("\n");
	two = ft_printf("%6.*cb", 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%29.*cb", 20, 'a');
	printf("\n");
	two = ft_printf("%29.*cb", 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1-123---------\n");
	one = printf("%6.*cb", -20, 'a');
	printf("\n");
	two = ft_printf("%6.*cb", -20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%10.*cb", 6 , 'a');
	printf("\n");
	two = ft_printf("%10.*cb", 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------2---------\n");
	one = printf("%*.*c", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*c", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*c", NULL, NULL);
	printf("\n");
	two = ft_printf("%.*c", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*c", 0, 0, 0);
	printf("\n");
	two = ft_printf("%*.*c", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*c", 0, 0, 0);
	printf("\n");
	two = ft_printf("%0*.*c", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%.*c", 0, 0);
	printf("\n");
	two = ft_printf("%.*c", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%*.*c8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*c8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*c", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*c", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*c", 0, -4, NULL);
	printf("\n");
	two = ft_printf("2%*.*c", 0, -4, NULL);
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
	one = printf("%-.*cb", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*cb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*cb", 10, -6 , 'a');
	printf("\n");
	two = ft_printf("%-*.*cb", 10, -6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*cb", -10, -6 , 'a');
	printf("\n");
	two = ft_printf("%-*.*cb", -10, -6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*cb", -10, -6 , 122);
	printf("\n");
	two = ft_printf("%*.*cb", -10, -6, 122);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------1-123---------\n");
	one = printf("%-*.*cb", 10, 6 , 65);
	printf("\n");
	two = ft_printf("%-*.*cb", 10, 6, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*cb", 20, 6, 'A');
	printf("\n");
	two = ft_printf("%-*.*cb", 20, 6, 'A');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-*.*cb", 6, 20, 'a');
	printf("\n");
	two = ft_printf("%-*.*cb", 6, 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-*.*cb", 6, -20, 'a');
	printf("\n");
	two = ft_printf("%-*.*cb", 6, -20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*cb", 10, 6 , SCHAR_MAX);
	printf("\n");
	two = ft_printf("%-*.*cb", 10, 6, SCHAR_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("---------1-123---------\n");
	one = printf("%-10.*cb", -6 , 65);
	printf("\n");
	two = ft_printf("%-10.*cb", -6, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*cb", 6 , 65);
	printf("\n");
	two = ft_printf("%-10.*cb", 6, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-20.*cb", 6, 65);
	printf("\n");
	two = ft_printf("%-20.*cb", 6, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*cb", 20, 65);
	printf("\n");
	two = ft_printf("%-6.*cb", 20, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%-6.*cb", -20, 'a');
	printf("\n");
	two = ft_printf("%-6.*cb", -20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-10.*cb", 6 , 'a');
	printf("\n");
	two = ft_printf("%-10.*cb", 6, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1-123---------\n");
	one = printf("%-0.*cb", 0 , 'a');
	printf("\n");
	two = ft_printf("%-0.*cb", 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------1-123---------\n");
	one = printf("%-*.*cb", 0, 0 , 65);
	printf("\n");
	two = ft_printf("%-*.*cb", 0, 0, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*cb", 6, 20 , 65);
	printf("\n");
	two = ft_printf("%-*.*cb", 6, 20, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*cb", 6, 20 , 65);
	printf("\n");
	two = ft_printf("%*.*cb", 6, 20, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


printf("---------1---------\n");
	one = printf("%-*.*cb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%-*.*cb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%-*.*c", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-*.*c", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*c", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-*.*c", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*c", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*c", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*c", NULL, NULL);
	printf("\n");
	two = ft_printf("%-.*c", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-.*c", 0, 123);
	printf("\n");
	two = ft_printf("%-.*c", 0, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%-*.*c8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*c8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*.*ca", -25, 20, 'a');
	printf("\n");
	two = ft_printf("%-*.*ca", -25, 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*ca", -5, -1, 'a');
	printf("\n");
	two = ft_printf("%-*.*ca", -5, -1, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*ca", -5, 5, 'a');
	printf("\n");
	two = ft_printf("%-*.*ca", -5, 5, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*ca", -15, -15, 'a');
	printf("\n");
	two = ft_printf("%-*.*ca", -15, -15, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------6---------\n");
	   one = printf("%-*.*c", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*c", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*c", 0, -4, 65);
	printf("\n");
	two = ft_printf("%-*.*c", 0, -4, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------7---------\n");
	   one = printf("%-*.*c", 0, 0, 'a');
	printf("\n");
	two = ft_printf("%-*.*c", 0, 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*c", 0, 0, SCHAR_MIN);
	printf("\n");
	two = ft_printf("%-*.*c", 0, 0, SCHAR_MIN);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------8---------\n");
	   one = printf("%-*.*c", 0, 10, 0);
	printf("\n");
	two = ft_printf("%-*.*c", 0, 10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------(-).*d---------\n");
	one = printf("%0-.*cb", -1 , 0);
	printf("\n");
	two = ft_printf("%0-.*cb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*d---------\n");
	one = printf("%-0.*cb", -1 , 0);
	printf("\n");
	two = ft_printf("%-0.*cb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%0-*.*cb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%0-*.*cb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-0*.*cb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%-0*.*cb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%0-*.*c", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%0-*.*c", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%-0*.*c", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-0*.*c", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
	   one = printf("1%0-*.*c", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%0-*.*c", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-0*.*c", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-0*.*c", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%0-*.*c", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%0-*.*c", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-0*.*c", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-0*.*c", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*c", NULL, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*c", NULL, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*c", 1, NULL, 1);
	printf("\n");
	two = ft_printf("%0*.*c", 1, NULL, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*c", NULL, 1, 1);
	printf("\n");
	two = ft_printf("%0*.*c", NULL, 1, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%*.ca", 20, 'a');
	printf("\n");
	two = ft_printf("%*.ca", 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.ca", 20, 'a');
	printf("\n");
	two = ft_printf("%0*.ca", 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	printf("---------1-5---------\n");
	one = printf("%0*.30ca", 20, 'a');
	printf("\n");
	two = ft_printf("%0*.30ca", 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	
	printf("---------1-5---------\n");
	one = printf("%0*.ca", 0, 'a');
	printf("\n");
	two = ft_printf("%0*.ca", 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%0*.ca", -20, 'a');
	printf("\n");
	two = ft_printf("%0*.ca", -20, 'a');
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
	one = printf("%-*.ca", 20, 'a');
	printf("\n");
	two = ft_printf("%-*.ca", 20, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH MIN---------\n");
    one = printf("%-*.*c", -2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*c", -2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MIN---------\n");
	   one = printf("%-*.*c", 0, -2147483649, 0);
	printf("\n");
 	two = ft_printf("%-*.*c", 0, -2147483649,  0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH MAX---------\n");
	   one = printf("%-*.*c", 2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*c", 2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*c", 0, 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*c", 0, 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*c", 0, 2147483647, 'a');
	printf("\n");
	two = ft_printf("%-*.*c", 0, 2147483647, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*c", 0, 0, 'a');
	printf("\n");
	two = ft_printf("%-*.*c", 0, 0, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*c", 20, 4, 'a');
	printf("\n");
	two = ft_printf("%-*.*c", 20, 4, 'a');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*c", 4, 20, 'a');
	printf("\n");
	two = ft_printf("%-*.*c", 4, 20, 'a');
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
	one = printf("%2147483647c", 0);
	printf("\n");
	two = ft_printf("%2147483647c", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647c", 0);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647c", 0);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647ca%c", 0, 'a');
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647ca%c", 0, 'a');
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647ca", 0);
	printf("\n");
	two = ft_printf("%.2147483647ca", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX*d ---------\n");
	one = printf("%*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX -*d ---------\n");
	one = printf("%-*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%2147483647.*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%2147483647.*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%.*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%.*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*d ---------\n");
	  one = printf("%0.*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0d ---------\n");
	  one = printf("%02147483647c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%02147483647c", 2147483647, 0);
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
	one = printf("%.2147483647c", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647c", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647c", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647c", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647c", 'a');
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647c", 'a');
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.2147483647 abc---------\n");
	one = printf("%20.2147483647c", 'a');
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%20.2147483647c", 'a');
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647c", 'a');
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647c", 'a');
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
