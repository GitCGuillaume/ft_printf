#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"

void	basic_value(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------1---------\n");
	one = printf("%s", "123");
	printf("\n");
	two = ft_printf("%s", "123");
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
	printf("\n");
	two = ft_printf("%0s", 0);
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
	printf("---------3---------\n");
	one = printf("%*.*sa", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*sb", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("%*.*s", 0, 4, NULL);
	printf("\n");
	two = ft_printf("%*.*s", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("%*.*sc", 0, -4, NULL);
	printf("\n");
	two = ft_printf("%*.*sd", 0, -4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*sa", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*sb", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*s", 0, 0, "4");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 0, "4");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7.2---------\n");
	   one = printf("%*.*s", 0, 0, "4");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%*.*s", 0, 0, "4");
	printf("two=%d\n", two);
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

}

void	minus_star_point_star(void)
{
	int	one;
	int	two;

	printf("---------?---------\n");
           one = printf("%-*.*s", 0, 4, NULL);
	printf("\n");
	two = ft_printf("%-*.*s", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("%-*.*sa", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*sb", 0, -4, 0);
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
	printf("\n");
	two = ft_printf("%2147483647.2147483647s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647s", 0);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647s", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	
printf("---------WIDTH_MAX 2147483647.* ---------\n");
	one = printf("%2147483647.*s", 0, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.*s", 0, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-2147483647.* ---------\n");
	one = printf("%-2147483647.*s", 0, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.*s", 0, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	/*printf("---------WIDTH_MAX*d ---------\n");
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
*/
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
	one = printf("%.2147483647s", "abc");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647s", "abc");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647s", "abc");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647s", "abc");
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
	width_min_max_special();
	return (0);
}
