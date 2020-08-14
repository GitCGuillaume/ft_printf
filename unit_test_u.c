#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"
#include <limits.h>

void	basic_value(void)
{
	int one;
	int two;
	unsigned int neg = -1;
	one = 0;
	two = 0;
	printf("---------1---------\n");
	one = printf("%u", 123);
	printf("\n");
	two = ft_printf("%u", 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%5u", 123);
	printf("\n");
	two = ft_printf("%5u", 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------1---------\n");
	one = printf("%u", neg);
	printf("\n");
	two = ft_printf("%u", neg);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	
	printf("\n");
	printf("---------1---------\n");
	one = printf("%u", -123);
	printf("\n");
	two = ft_printf("%u", -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%u", NULL);
	printf("\n");
	two = ft_printf("%u", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("---------1---------\n");
	one = printf("%0*ua", 5, 43);
	printf("\n");
	two = ft_printf("%0*ua", 5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -5, 43);
	printf("\n");
	two = ft_printf("%0*ua", -5, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", 7, 43);
	printf("\n");
	two = ft_printf("%0*ua", 7, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -7, 43);
	printf("\n");
	two = ft_printf("%0*ua", -7, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", 2, 43);
	printf("\n");
	two = ft_printf("%0*ua", 2, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -7, 43);
	printf("\n");
	two = ft_printf("%0*ua", -7, 43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0*UINTMAX---------\n");
	one = printf("%0*ua", -7, UINT_MAX);
	printf("\n");
	two = ft_printf("%0*ua", -7, UINT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------0*UINTMAX---------\n");
	one = printf("%0*ua", 7, UINT_MAX);
	printf("\n");
	two = ft_printf("%0*ua", 7, UINT_MAX);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------1---------\n");
	one = printf("%0*ua", 5, -43);
	printf("\n");
	two = ft_printf("%0*ua", 5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -5, -43);
	printf("\n");
	two = ft_printf("%0*ua", -5, -43);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%0*u", 7, -123);
	printf("\n");
	two = ft_printf("%0*u", 7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*u", 0, -123);
	printf("\n");
	two = ft_printf("%0*u", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*u", 1, -123);
	printf("\n");
	two = ft_printf("%0*u", 1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*u", 2, -123);
	printf("\n");
	two = ft_printf("%0*u", 2, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -7, -123);
	printf("\n");
	two = ft_printf("%0*ua", -7, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*u", 0, -123);
	printf("\n");
	two = ft_printf("%0*u", 0, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -1, -123);
	printf("\n");
	two = ft_printf("%0*ua", -1, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0*ua", -2, -123);
	printf("\n");
	two = ft_printf("%0*ua", -2, -123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------1---------\n");
	one = printf("%.*ub", -6 ,123);
	printf("\n");
	two = ft_printf("%.*ub", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.*ub", 6 ,123);
	printf("\n");
	two = ft_printf("%.*ub", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*ub", -6 ,123);
	printf("\n");
	two = ft_printf("%10.*ub", -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%10.*ub", 6 ,123);
	printf("\n");
	two = ft_printf("%10.*ub", 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-10.*ub", 6 ,123);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-10.*ub", 6, 123);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY .0d---------\n");
	one = printf("%.0u", 0);
	printf("\n");
	two = ft_printf("%.0u", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0d---------\n");
	one = printf("%0u", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0u", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY d---------\n");
	one = printf("%u", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%u", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------EMPTY -d---------\n");
	one = printf("%-0u", 0);
	printf("one=%-d\n", one);
	printf("\n");
	two = ft_printf("%-u", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------0*i  empty---------\n");
	one = printf("%0*u", 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*u", 0, 0);
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
	one = printf("%.*ub", -1 , 0);
	printf("\n");
	two = ft_printf("%.*ub", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------2---------\n");
	one = printf("%*.*ub", 0, -2 , 0);
	printf("\n");
	two = ft_printf("%*.*ub", 0, -2, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%*.*ub", 0, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*u", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1????---------\n");
	one = printf("%*.*ub", 1, -1 , 0);
	printf("\n");
	two = ft_printf("%*.*ub", 1, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*ub", 10, -6 ,123);
	printf("\n");
	two = ft_printf("%*.*ub", 10, -6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%*.*ub", 10, 6 ,123);
	printf("\n");
	two = ft_printf("%*.*ub", 10, 6, 123);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------2---------\n");
	one = printf("%*.*u", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*u", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*u", NULL, NULL);
	printf("\n");
	two = ft_printf("%.*u", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%*.*u", 0, 0, 0);
	printf("\n");
	two = ft_printf("%*.*u", 0, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%.*u", 0, 0);
	printf("\n");
	two = ft_printf("%.*u", 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


	printf("---------3---------\n");
	one = printf("%*.*u8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*u8", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("1%*.*u", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%*.*u", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("1%*.*u", 0, -4, NULL);
	printf("\n");
	two = ft_printf("2%*.*u", 0, -4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*u", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*u", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*u", 0, 0, 4);
	printf("\n");
	two = ft_printf("%-*.*u", 0, 0, 4);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------8---------\n");
	   one = printf("%-*.*u", 0, 10, 0);
	printf("\n");
	two = ft_printf("%-*.*u", 0, 10, 0);
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
	one = printf("%-.*ub", -1 , 0);
	printf("\n");
	two = ft_printf("%-.*ub", -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

printf("---------1---------\n");
	one = printf("%-*.*ub", 0, -1 ,0);
	printf("\n");
	two = ft_printf("%-*.*ub", 0, -1, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------?---------\n");
           one = printf("1%-*.*u", 0, 4, NULL);
	printf("\n");
	two = ft_printf("2%-*.*u", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("1%-*.*u", 0, -4, 0);
	printf("\n");
	two = ft_printf("2%-*.*u", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%-*.*u", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*u", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
printf("---------2---------\n");
	one = printf("%-.*u", NULL, NULL);
	printf("\n");
	two = ft_printf("%-.*u", NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------3---------\n");
	one = printf("%-*.*u8", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%-*.*u8", 8, NULL, NULL);
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
	printf("---------WIDTH MAX---------\n");
	   one = printf("%-*.*u", UINT_MAX, 0, 0);
	printf("\n");
	two = ft_printf("%-*.*u", UINT_MAX, 0, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------W_SPEC MAX---------\n");
	one = printf("%-*.*u", 0, UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%-*.*u", 0, UINT_MAX, 0);
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
	one = printf("%4294967295u", 0);
	printf("\n");
	two = ft_printf("%4294967295u", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%4294967295.4294967295u", 0);
	printf("\n");
	two = ft_printf("%4294967295.4294967295u", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-4294967295.4294967295u", 0);
	printf("\n");
	two = ft_printf("%-4294967295.4294967295u", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.2147483647 ---------\n");
	one = printf("%.2147483647", 0);
	printf("\n");
	two = ft_printf("%.2147483647u", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX*d ---------\n");
	one = printf("%*u", UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%*u", UINT_MAX, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX -*d ---------\n");
	one = printf("%-*u", UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%-*u", UINT_MAX, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%4294967295.*u", UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%4294967295.*u", UINT_MAX, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.*d ---------\n");
	  one = printf("%.*u", UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%.*u", UINT_MAX, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*d ---------\n");
	  one = printf("%0.*u", UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%0.*u", UINT_MAX, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0d ---------\n");
	  one = printf("%04294967295u", UINT_MAX, 0);
	printf("\n");
	two = ft_printf("%04294967295u", UINT_MAX, 0);
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
	one = printf("%.2147483647u", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647u", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 ---------\n");
	one = printf("%-.2147483647u", 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647u", 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647u", 123);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647u", 123);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647u", 123);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647u", 123);
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
