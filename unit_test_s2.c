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
	one = printf("%*sa", -5, "43");
	printf("\n");
	two = ft_printf("%*sa", -5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*sa", -5, "43");
	printf("\n");
	two = ft_printf("%-*sa", -5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-*sa", 5, "43");
	printf("\n");
	two = ft_printf("%-*sa", 5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-5sa", "43");
	printf("\n");
	two = ft_printf("%-5sa", "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%s", "123");
	printf("\n");
	two = ft_printf("%s", "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%s", "1111111111");
	printf("\n");
	two = ft_printf("%s", "1111111111";
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------1---------\n");
	one = printf("%s", "-1111111111");
	printf("\n");
	two = ft_printf("%s", "-1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("\n");
	printf("---------1---------\n");
	one = printf("%s", "-122");
	printf("\n");
	two = ft_printf("%s", "-122");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%s", NULL);
	printf("\n");
	two = ft_printf("%s", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
printf("---------5.0d---------\n");
	one = printf("%5.0s", 0);
	printf("\n");
	two = ft_printf("%5.0s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);


	printf("---------1---------\n");
	one = printf("%0*sa", 5, "43");
	printf("\n");
	two = ft_printf("%0*sa", 5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	char test[] = "43";
	printf("---------1---------\n");
	one = printf("%0*sa", -5, test);
	printf("\n");
	two = ft_printf("%0*sa", -5, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", 7, "1111111111");
	printf("\n");
	two = ft_printf("%0*sa", 7, "1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%0*sa", -7, "1111111111");
	printf("\n");
	two = ft_printf("%0*sa", -7, "1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*sa", 7, test);
	printf("\n");
	two = ft_printf("%0*sa", 7, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", -7, "43");
	printf("\n");
	two = ft_printf("%0*sa", -7, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", 2, "43");
	printf("\n");
	two = ft_printf("%0*sa", 2, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", -7, "43");
	printf("\n");
	two = ft_printf("%0*sa", -7, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%0*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", -5, "-43");
	printf("\n");
	two = ft_printf("%0*sa", -5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*s", 7, "-123");
	printf("\n");
	two = ft_printf("%0*s", 7, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*s", 0, "-123");
	printf("\n");
	two = ft_printf("%0*s", 0, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*s", 1, "-123");
	printf("\n");
	two = ft_printf("%0*s", 1, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*s", 2, "-123");
	printf("\n");
	two = ft_printf("%0*s", 2, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", -7, "-123");
	printf("\n");
	two = ft_printf("%0*sa", -7, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*s", 0, "-123");
	printf("\n");
	two = ft_printf("%0*s", 0, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*sa", -1, "-123");
	printf("\n");
	two = ft_printf("%0*sa", -1, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");	
	printf("---------1---------\n");
	one = printf("%0*sa", -2, "-1111111111");
	printf("\n");
	two = ft_printf("%0*sa", -2, "-1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%.*sb", -6 , "123");
	printf("\n");
	two = ft_printf("%.*sb", -6, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.*sb", 6 , "123");
	printf("\n");
	two = ft_printf("%.*sb", 6, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*sb", -6 , "123");
	printf("\n");
	two = ft_printf("%10.*sb", -6, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*sb", 6 , "123");
	printf("\n");
	two = ft_printf("%10.*sb", 6, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*sb", 6 , "-1111111111");
	printf("\n");
	two = ft_printf("%10.*sb", 6, "-1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	one = printf("%-10.*sb", 6 , "123");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*sb", 6, "123");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY .0d---------\n");
	one = printf("%.0s", 0);
	printf("\n");
	two = ft_printf("%.0s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0d---------\n");
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
	printf("---------EMPTY -d---------\n");
	one = printf("%-s", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY -0d---------\n");
	one = printf("%-0s", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-0s", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY -*d---------\n");
	one = printf("%-*s", 0, 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-*s", 0, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY d---------\n");
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
	one = printf("%0*s", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*s", 0, 0);
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
	one = printf("%.*sb", -1 , 0);
	printf("\n");
	two = ft_printf("%.*sb", -1, 0);
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

printf("---------1---------\n");
	one = printf("%*.*sb", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*sb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%*.*sda", -5, 1, "43");
	printf("\n");
	two = ft_printf("%*.*sda", -5, 1, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.sa", -5, "-1");
	printf("\n");
	two = ft_printf("%*.sa", -5, "-1");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-5---------\n");
	one = printf("%*.*sa", -5, 0, "45");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1 5---------\n");
	one = printf("%*.sa", -5, "5");
	printf("\n");
	two = ft_printf("%*.sa", -5, "5");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1.*d---------\n");
	one = printf("%.*sa", -1, "43");
	printf("\n");
	two = ft_printf("%.*sa", -1, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*sa", -1, "INT_mIN");
	printf("\n");
	two = ft_printf("%.*sa", -1, "INT_mIN");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1.*d---------\n");
	one = printf("%.*sa", 5, "43");
	printf("\n");
	two = ft_printf("%.*sa", 5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*sa", 5, "43");
	printf("\n");
	two = ft_printf("%-.*sa", 5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*sa", -5, -5, "43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, -5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1 5---------\n");
	one = printf("%*.sa", -5, "-5");
	printf("\n");
	two = ft_printf("%*.sa", -5, "-5");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1.*d---------\n");
	one = printf("%.*sa", -1, "-43");
	printf("\n");
	two = ft_printf("%.*sa", -1, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1.*d---------\n");
	one = printf("%.*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%.*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*sa", 5, "-43");
	printf("\n");
	two = ft_printf("%-.*sa", 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.*sa", 5, "INT_MIN");
	printf("\n");
	two = ft_printf("%-.*sa", 5, "INT_MIN");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1????---------\n");
	one = printf("%*.*sb", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*sb", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*sb", 10, -6 , "123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, -6, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*sb", 10, 6 , "123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*sb", 10, -6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, -6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*sb", 10, 6 , "-123");
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, "-123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%*.*sb", 20, 6 , "-1111111111");
	printf("\n");
	two = ft_printf("%*.*sb", 20, 6, "-1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*sb", 6, 20 , "-1111111111");
	printf("\n");
	two = ft_printf("%*.*sb", 6, 20, "-1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1-123---------\n");
	one = printf("%*.*sb", 6, -20 , "-1111111111");
	printf("\n");
	two = ft_printf("%*.*sb", 6, -20, "-1111111111");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	char min = "-1111111111";

	printf("---------1-123---------\n");
	one = printf("%*.*sb", 10, 6 , min);
	printf("\n");
	two = ft_printf("%*.*sb", 10, 6, min);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1-123---------\n");
	one = printf("%-*.*sb", 0, 0 , min);
	printf("\n");
	two = ft_printf("%-*.*sb", 0, 0, min);
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

void	minus_star_point_star(void)
{
	int	one;
	int	two;
	printf("---------(-).*d---------\n");
	one = printf("%-.*sb", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*sb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%-*.*sb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%-*.*sb", 0, -1, 0);
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
	printf("---------1---------\n");
	one = printf("%-*.*sa", -5, 5, "43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, 5, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*sa", -5, -1, "43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, -1, "43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*sa", -5, 5, "-43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, 5, "-43");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-*.*sa", -5, -1, "43");
	printf("\n");
	two = ft_printf("%-*.*sa", -5, -1, "43");
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
	printf("---------7---------\n");
	   one = printf("%-*.*s", 0, 0, 4);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*s", 0, 0, -4);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, -4);
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
	printf("---------(-).*d---------\n");
	one = printf("%0-.*sb", -1 , 0);
	printf("\n");
	two = ft_printf("%0-.*sb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------(-).*d---------\n");
	one = printf("%-0.*sb", -1 , 0);
	printf("\n");
	two = ft_printf("%-0.*sb", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%0-*.*sb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%0-*.*sb", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------1---------\n");
	one = printf("%-0*.*sb", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%-0*.*sb", 0, -1, 0);
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
	printf("---------1-5---------\n");
	one = printf("%*.sa", 5, "-1");
	printf("\n");
	two = ft_printf("%*.sa", 5, "-1");
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

	printf("---------WIDTH MIN---------\n");
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
	printf("---------WIDTH MAX---------\n");
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
	one = printf("%-*.*s", 0, 0, "INT_MIN");
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, "INT_MIN");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*s", 20, 4, "INT_MIN");
	printf("\n");
	two = ft_printf("%-*.*s", 20, 4, "INT_MIN");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?????????---------\n");
	one = printf("%-*.*s", 4, 20, "INT_MIN");
	printf("\n");
	two = ft_printf("%-*.*s", 4, 20, "INT_MIN");
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
	one = printf("%2147483647s", 0);
	printf("\n");
	two = ft_printf("%2147483647s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647s", 0);
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.2147483647s", 0);
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647sa%s", 0, "1");
	printf("\none=%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647sa%s", 0, "1");
	printf("\ntwo=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647sa", 0);
	printf("\n");
	two = ft_printf("%.2147483647sa", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX*d ---------\n");
	one = printf("%*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX -*d ---------\n");
	one = printf("%-*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%2147483647.*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%2147483647.*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%.*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%.*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*d ---------\n");
	  one = printf("%0.*s", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*s", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0d ---------\n");
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

void	width_min_max_special(void)
{
	int	one;
	int	two;

	one = 0;
	two = 0;
	printf("---------WIDTH_MAX.2147483647 ---------\n");
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
	printf("---------WIDTH_MAX-.2147483647 ---------\n");
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
	printf("---------WIDTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647s", "123");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647s", "123");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647s", "123");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647s", "123");
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