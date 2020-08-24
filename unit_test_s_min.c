#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"
#include <limits.h>

void	basic_value(vois)
{
	int one;
	int two;
	char min[] = ""-1"111111111";

	one = 0;
	two = 0;
	printf("--------"-1"---------\n");
	one = printf("%*sa", -5, min);
	printf("\n");
	two = ft_printf("%*sa", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%*sa", -5, "-1");
	printf("\n");
	two = ft_printf("%*sa", -5, "-1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%*sa", -5, 0);
	printf("\n");
	two = ft_printf("%*sa", -5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%*sa", 5, 0);
	printf("\n");
	two = ft_printf("%*sa", 5, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%*sa", 0, 0);
	printf("\n");
	two = ft_printf("%*sa", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%*sa", 0, "123");
	printf("\n");
	two = ft_printf("%*sa", 0, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-*sa", -5, min);
	printf("\n");
	two = ft_printf("%-*sa", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-*sa", -5, "-1");
	printf("\n");
	two = ft_printf("%-*sa", -5, "-1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-*sa", -5, "1");
	printf("\n");
	two = ft_printf("%-*sa", -5, "1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%-*sa", 5, min);
	printf("\n");
	two = ft_printf("%-*sa", 5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-5sa", min);
	printf("\n");
	two = ft_printf("%-5sa", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%s", min);
	printf("\n");
	two = ft_printf("%s", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("--------"-1"---------\n");
	one = printf("%s", min);
	printf("\n");
	two = ft_printf("%s", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("--------"-1"---------\n");
	one = printf("%s", min);
	printf("\n");
	two = ft_printf("%s", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("--------"-1"---------\n");
	one = printf("%s", NULL);
	printf("\n");
	two = ft_printf("%s", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------5.0s---------\n");
	one = printf("%5.0s", -0);
	printf("\n");
	two = ft_printf("%5.0s", -0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);


	printf("--------"-1"---------\n");
	one = printf("%0*ia", 5, "-43");
	printf("\n");
	two = ft_printf("%0*ia", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", -5, min);
	printf("\n");
	two = ft_printf("%0*ia", -5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*sa", 7, "1111111111");
	printf("\n");
	two = ft_printf("%0*sa", 7, "1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%0*ia", -7, min);
	printf("\n");
	two = ft_printf("%0*ia", -7, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%0*ia", 7, "-43");
	printf("\n");
	two = ft_printf("%0*ia", 7, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", -7, "-43");
	printf("\n");
	two = ft_printf("%0*ia", -7, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", 2, "-43");
	printf("\n");
	two = ft_printf("%0*ia", 2, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", -7, "-43");
	printf("\n");
	two = ft_printf("%0*ia", -7, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%0*ia", 5, "-43");
	printf("\n");
	two = ft_printf("%0*ia", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", -5, "-43");
	printf("\n");
	two = ft_printf("%0*ia", -5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%0*i", 7, "-123");
	printf("\n");
	two = ft_printf("%0*i", 7, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*i", 0, "-123");
	printf("\n");
	two = ft_printf("%0*i", 0, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*i", 1, "-123");
	printf("\n");
	two = ft_printf("%0*i", 1, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*i", 2, "-123");
	printf("\n");
	two = ft_printf("%0*i", 2, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", -7, "-123");
	printf("\n");
	two = ft_printf("%0*ia", -7, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*i", 0, "-123");
	printf("\n");
	two = ft_printf("%0*i", 0, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", "-1", "-123");
	printf("\n");
	two = ft_printf("%0*ia", "-1", "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	printf("--------"-1"---------\n");
	one = printf("%0*ia", -2, min);
	printf("\n");
	two = ft_printf("%0*ia", -2, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%.*sb", -6 , "-123");
	printf("\n");
	two = ft_printf("%.*sb", -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%.*sb", 6 , "-123");
	printf("\n");
	two = ft_printf("%.*sb", 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%10.*sb", -6 ,"-123");
	printf("\n");
	two = ft_printf("%10.*sb", -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%*.*sb", 10, 6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1"---------\n");
	one = printf("%10.*sb", 6 , "-123");
	printf("\n");
	two = ft_printf("%10.*sb", 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%10.*sb", 6 , min);
	printf("\n");
	two = ft_printf("%10.*sb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%"-1"0.*sb", 6 , "-123");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%"-1"0.*sb", 6, "-123");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%0*ia", 0, 0);
	printf("\n");
	two = ft_printf("%0*ia", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------EMPTY .0s---------\n");
	one = printf("%.0s", 0);
	printf("\n");
	two = ft_printf("%.0s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0s---------\n");
	one = printf("%0s", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -s---------\n");
	one = printf("%-s", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0s---------\n");
	one = printf("%-0s", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-0s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY -*s---------\n");
	one = printf("%-*s", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*s", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*s---------\n");
	one = printf("%-.*s", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*s", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -.*s---------\n");
	one = printf("%-.*s", 0, 123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-.*s", 0, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY s---------\n");
	one = printf("%s", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%s", 0);
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
printf("---------5.s---------\n");
	one = printf("%5.s", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0.s---------\n");
	one = printf("%0.s", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0.s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------5.smin---------\n");
	one = printf("%5.s", min);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.s", min);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------20.smin---------\n");
	one = printf("%20.s", min);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%20.s", min);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------5.s"-123"---------\n");
	one = printf("%5.s", "-123");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%5.s", "-123");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
}

vois	star_point_star(vois)
{
	int one;
	int two;

	printf("--------"-1"---------\n");
	one = printf("%.*sb", "-1" , 0);
	printf("\n");
	two = ft_printf("%.*sb", "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------2---------\n");
	one = printf("%*.*sb", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*sb", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("--------"-1"---------\n");
	one = printf("%*.*sb", 0, "-1" , 0);
	printf("\n");
	two = ft_printf("%*.*sb", 0, "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%*.*ssa", -5, 1, "-43");
	printf("\n");
	two = ft_printf("%*.*ssa", -5, 1, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"-5---------\n");
	one = printf("%*.sa", -5, "-1");
	printf("\n");
	two = ft_printf("%*.sa", -5, "-1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"-5---------\n");
	one = printf("%*.*sa", -5, 0, "-45");
	printf("\n");
	two = ft_printf("%*.*sa", -5, 0, "-45");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1" 5---------\n");
	one = printf("%*.sa", -5, "-5");
	printf("\n");
	two = ft_printf("%*.sa", -5, "-5");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------pfffffff---------\n");
	one = printf("%*.*sa", -5, 0, "-5");
	printf("\n");
	two = ft_printf("%*.*sa", -5, 0, "-5");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1".*s---------\n");
	one = printf("%.*sa", "-1", "-43");
	printf("\n");
	two = ft_printf("%.*sa", "-1", "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1".*s---------\n");
	one = printf("%.*sa", "-1", min);
	printf("\n");
	two = ft_printf("%.*sa", "-1", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%*.*sa", -5, 0, "-43");
	printf("\n");
	two = ft_printf("%*.*sa", -5, 0, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1".*s---------\n");
	one = printf("%.*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%.*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-.*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%-.*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-*.*sa", -5, 0, "-43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, 0, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-*.*sa", -5, -5, "-43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, -5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1" 5---------\n");
	one = printf("%*.sa", -5, -5);
	printf("\n");
	two = ft_printf("%*.sa", -5, -5);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1".*s---------\n");
	one = printf("%.*sa", "-1", "-43");
	printf("\n");
	two = ft_printf("%.*sa", "-1", "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("--------"-1".*s---------\n");
	one = printf("%.*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%.*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-.*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%-.*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-.*sa", 5, min);
	printf("\n");
	two = ft_printf("%-.*sa", 5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("--------"-1"????---------\n");
	one = printf("%*.*sb", 1, "-1" , 0);
	printf("\n");
	two = ft_printf("%*.*sb", 1, "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%*.*sb", 10, -6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%*.*sb", 10, 6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 10, -6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 10, 6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 20, 6, min);
	printf("\n");
	two = ft_printf("%*.*sb", 20, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 6, 20, min);
	printf("\n");
	two = ft_printf("%*.*sb", 6, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 29, 20, min);
	printf("\n");
	two = ft_printf("%*.*sb", 29, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 29, 20, "1111111111");
	printf("\n");
	two = ft_printf("%*.*sb", 29, 20, "1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 6, -20, min);
	printf("\n");
	two = ft_printf("%*.*sb", 6, -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", 10, 6 , min);
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------"-1""-123"---------\n");
	one = printf("%10.*sb", -6 , "-123");
	printf("\n");
	two = ft_printf("%10.*sb", -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%10.*sb", 6 , "-123");
	printf("\n");
	two = ft_printf("%10.*sb", 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%20.*sb", 6, min);
	printf("\n");
	two = ft_printf("%20.*sb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%6.*sb", 20, min);
	printf("\n");
	two = ft_printf("%6.*sb", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%29.*sb", 20, min);
	printf("\n");
	two = ft_printf("%29.*sb", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("--------"-1""-123"---------\n");
	one = printf("%6.*sb", -20, min);
	printf("\n");
	two = ft_printf("%6.*sb", -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%10.*sb", 6 , min);
	printf("\n");
	two = ft_printf("%10.*sb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------2---------\n");
	one = printf("%*.*s", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*s", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*s", NULL, NULL);
	printf("\n");
	two = ft_printf("%.*s", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*s", 0, 0, 0);
	printf("\n");
	two = ft_printf("%*.*s", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*s", 0, 0, 0);
	printf("\n");
	two = ft_printf("%0*.*s", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%.*s", 0, 0);
	printf("\n");
	two = ft_printf("%.*s", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%*.*s8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*s8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*s", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*s", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*s", 0, -4, NULL);
	printf("\n");
	two = ft_printf("2%*.*s", 0, -4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
}

vois	minus_star_point_star(vois)
{
	int	one;
	int	two;
	printf("---------(-).*s---------\n");
	one = printf("%-.*sb", "-1" , 0);
	printf("\n");
	two = ft_printf("%-.*sb", "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 10, -6 , "-123");
	printf("\n");
	two = ft_printf("%-*.*sb", 10, -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", "-1"0, -6 , "-123");
	printf("\n");
	two = ft_printf("%-*.*sb", "-1"0, -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%*.*sb", "-1"0, -6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", "-1"0, -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 10, 6 , "-123");
	printf("\n");
	two = ft_printf("%-*.*sb", 10, 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 20, 6, min);
	printf("\n");
	two = ft_printf("%-*.*sb", 20, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 6, 20, min);
	printf("\n");
	two = ft_printf("%-*.*sb", 6, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 6, -20, min);
	printf("\n");
	two = ft_printf("%-*.*sb", 6, -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 10, 6 , min);
	printf("\n");
	two = ft_printf("%-*.*sb", 10, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
		printf("--------"-1""-123"---------\n");
	one = printf("%"-1"0.*sb", -6 , "-123");
	printf("\n");
	two = ft_printf("%"-1"0.*sb", -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%"-1"0.*sb", 6 , "-123");
	printf("\n");
	two = ft_printf("%"-1"0.*sb", 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%-20.*sb", 6, min);
	printf("\n");
	two = ft_printf("%-20.*sb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%-6.*sb", 20, min);
	printf("\n");
	two = ft_printf("%-6.*sb", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%-6.*sb", -20, min);
	printf("\n");
	two = ft_printf("%-6.*sb", -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%"-1"0.*sb", 6 , min);
	printf("\n");
	two = ft_printf("%"-1"0.*sb", 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("--------"-1""-123"---------\n");
	one = printf("%-0.*sb", 0 , min);
	printf("\n");
	two = ft_printf("%-0.*sb", 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 0, 0 , min);
	printf("\n");
	two = ft_printf("%-*.*sb", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1""-123"---------\n");
	one = printf("%-*.*sb", 6, 20 , min);
	printf("\n");
	two = ft_printf("%-*.*sb", 6, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("--------"-1"---------\n");
	one = printf("%-*.*sb", 0, "-1" , 0);
	printf("\n");
	two = ft_printf("%-*.*sb", 0, "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%-*.*s", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-*.*s", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*s", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-*.*s", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*s", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*s", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*s", NULL, NULL);
	printf("\n");
	two = ft_printf("%-.*s", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-.*s", 0, 123);
	printf("\n");
	two = ft_printf("%-.*s", 0, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%-*.*s8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*s8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"---------\n");
	one = printf("%-*.*sa", -25, 20, min);
	printf("\n");
	two = ft_printf("%-*.*sa", -25, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%-*.*sa", -5, "-1", min);
	printf("\n");
	two = ft_printf("%-*.*sa", -5, "-1", min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%-*.*sa", -5, 5, min);
	printf("\n");
	two = ft_printf("%-*.*sa", -5, 5, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%-*.*sa", -15, -15, min);
	printf("\n");
	two = ft_printf("%-*.*sa", -15, -15, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------6---------\n");
	   one = printf("%-*.*s", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*s", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*s", 0, -4, 1);
	printf("\n");
	two = ft_printf("%-*.*s", 0, -4, 1);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------7---------\n");
	   one = printf("%-*.*s", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*s", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------8---------\n");
	   one = printf("%-*.*s", 0, 10, 0);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 10, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------(-).*s---------\n");
	one = printf("%0-.*sb", "-1" , 0);
	printf("\n");
	two = ft_printf("%0-.*sb", "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*s---------\n");
	one = printf("%-0.*sb", "-1" , 0);
	printf("\n");
	two = ft_printf("%-0.*sb", "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("--------"-1"---------\n");
	one = printf("%0-*.*sb", 0, "-1" ,0);
	printf("\n");
	two = ft_printf("%0-*.*sb", 0, "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"---------\n");
	one = printf("%-0*.*sb", 0, "-1" , 0);
	printf("\n");
	two = ft_printf("%-0*.*sb", 0, "-1", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%0-*.*s", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%0-*.*s", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
           one = printf("1%-0*.*s", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-0*.*s", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
	   one = printf("1%0-*.*s", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%0-*.*s", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-0*.*s", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-0*.*s", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%0-*.*s", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%0-*.*s", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-0*.*s", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-0*.*s", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*s", NULL, NULL, "1");
	printf("\n");
	two = ft_printf("%0*.*s", NULL, NULL, "1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*s", 1, NULL, "1");
	printf("\n");
	two = ft_printf("%0*.*s", 1, NULL, "1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%0*.*s", NULL, 1, "1");
	printf("\n");
	two = ft_printf("%0*.*s", NULL, 1, "1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"-5---------\n");
	one = printf("%*.sa", 20, min);
	printf("\n");
	two = ft_printf("%*.sa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"-5---------\n");
	one = printf("%0*.sa", 20, min);
	printf("\n");
	two = ft_printf("%0*.sa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------"-1"-5---------\n");
	one = printf("%0*.sa", 0, min);
	printf("\n");
	two = ft_printf("%0*.sa", 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("--------"-1"-5---------\n");
	one = printf("%0*.sa", -20, min);
	printf("\n");
	two = ft_printf("%0*.sa", -20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

vois	minus_star_point_star_min(vois)
{
	int	one;
	int	two;
	printf("--------"-1"-5---------\n");
	one = printf("%-*.sa", 20, min);
	printf("\n");
	two = ft_printf("%-*.sa", 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------WIsTH MIN---------\n");
    one = printf("%-*.*s", -2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*s", -2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MIN---------\n");
	   one = printf("%-*.*s", 0, -2147483649, 0);
	printf("\n");
 	two = ft_printf("%-*.*s", 0, -2147483649,  0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH MAX---------\n");
	   one = printf("%-*.*s", 2147483647, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*s", 2147483647, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*s", 0, 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*s", 0, 2147483647, min);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 2147483647, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*s", 0, 0, min);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*s", 20, 4, min);
	printf("\n");
	two = ft_printf("%-*.*s", 20, 4, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*s", 4, 20, min);
	printf("\n");
	two = ft_printf("%-*.*s", 4, 20, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

vois	wisth_min_max(vois)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------WIsTH_MAX---------\n");
	one = printf("%2147483647s", 0);
	printf("\n");
	two = ft_printf("%2147483647s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647s", 0);
	printf("\none=%s\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647s", 0);
	printf("\ntwo=%s\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647sa%s", 0, "-1");
	printf("\none=%s\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647sa%s", 0, "-1");
	printf("\ntwo=%s\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647sa", 0);
	printf("\n");
	two = ft_printf("%.2147483647sa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX*s ---------\n");
	one = printf("%*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX -*s ---------\n");
	one = printf("%-*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%2147483647.*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%2147483647.*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.*s ---------\n");
	  one = printf("%.*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%.*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX0.*s ---------\n");
	  one = printf("%0.*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIsTH_MAX0s ---------\n");
	  one = printf("%02147483647s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%02147483647s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

vois	wisth_min_max_special(vois)
{
	int	one;
	int	two;

	one = 0;
	two = 0;
	printf("---------WIsTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647s", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647s", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647s", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647s", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647s", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647s", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIsTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647s", min);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647s", min);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

}

int	main(vois)
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
