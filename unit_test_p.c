#include <stdio.h>
#include <assert.h>
#include "ft_printf.h"

void	basic_value(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("-------NULL--------\n");
	one = printf("%p", NULL);
	printf("\n");
	two = ft_printf("%p", NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%p", "123");
	printf("\n");
	two = ft_printf("%p", "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------2---------\n");
	one = printf("%20p", "123");
	printf("\n");
	two = ft_printf("%20p", "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%020p", "123");
	printf("\n");
	two = ft_printf("%020p", "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------4---------\n");
	one = printf("%0-5p", "123");
	printf("\n");
	two = ft_printf("%0-5p", "123");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	char test[] = "NULL";
	printf("---------5---------\n");
	one = printf("%0-30pa", test);
	printf("\n");
	two = ft_printf("%0-30pb", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	one = printf("%-30pa", test);
	printf("\n");
	two = ft_printf("%-30pa", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	one = printf("%016pa", test);
	printf("\n");
	two = ft_printf("%016pa", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------8---------\n");
	one = printf("%0-16pa", test);
	printf("\n");
	two = ft_printf("%0-16pb", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------9---------\n");
	one = printf("%*pa", 30, test);
	printf("\n");
	two = ft_printf("%*pb", 30, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------10---------\n");
	one = printf("%20.*p", 16, test);
	printf("\n");
	two = ft_printf("%20.*p", 16, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------11---------\n");
	one = printf("%-20.*pa", 36, test);
	printf("\n");
	two = ft_printf("%-*.*pa", 20, 36, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------12---------\n");
	one = printf("%2.9pa", 1234);
	printf("\n");
	two = ft_printf("%2.9pa", 1234);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY .*p---------\n");
	one = printf("%30.*pa", 20, 0);
	printf("\n");
	two = ft_printf("%30.*pa", 20, 0);
	printf("\n");
	printf("one=%d\n", one);
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY .*p---------\n");
	one = printf("%-30.*pab", 20, 0);
	printf("\n");
	two = ft_printf("%-30.*pab", 20, 0);
	printf("\n");
	printf("one=%d\n", one);
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0p---------\n");
	one = printf("%0p", 0);
	printf("\n");
	two = ft_printf("%0p", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0p---------\n");
	one = printf("%.p", 0);
	printf("\n");
	two = ft_printf("%.p", 0);
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
	one = printf("%*.*p", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*p", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*pa", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*pa", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("%*.*p", 0, 4, NULL);
	printf("\n");
	two = ft_printf("%*.*p", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("%*.*pc", 0, -4, NULL);
	printf("\n");
	two = ft_printf("%*.*pd", 0, -4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*pa", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*pb", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*p", 0, 0, "4");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 0, "4");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7.2---------\n");
	   one = printf("%*.*p", 0, 0, "4");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%*.*p", 0, 0, "4");
	printf("two=%d\n", two);
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

}

void	minus_star_point_star(void)
{
	int	one;
	int	two;

	printf("---------?---------\n");
           one = printf("%-*.*p", 0, 4, NULL);
	printf("\n");
	two = ft_printf("%-*.*p", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("%-*.*pa", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*pb", 0, -4, 0);
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
	printf("---------WIDTH MAX---------\n");
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

}

void	width_min_max(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------WIDTH_MAX---------\n");
	one = printf("%2147483647p", 0);
	printf("\n");
	two = ft_printf("%2147483647p", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647p", 0);
	printf("\n");
	two = ft_printf("%2147483647.2147483647p", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647p", 0);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647p", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


printf("---------WIDTH_MAX 2147483647.* ---------\n");
	one = printf("%2147483647.*p", 0, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.*p", 0, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MIN-2147483647?.* ---------\n");
	one = printf("%-2147483647.*p", 1, 44);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.*p", 1, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX*p ---------\n");
	one = printf("%*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX -*p ---------\n");
	one = printf("%-*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.*p ---------\n");
	  one = printf("%2147483647.*p", 2147483647, "a");
	printf("\n");
	two = ft_printf("%2147483647.*p", 2147483647, "a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_SPECIFICATION_MIN.(minus)*p ---------\n");
	one = 1;
	two = 2;	
  	//one = printf("%.*p", -2147483650, "a");
	printf("one==%d\n", one);
	printf("\n");
	//two = ft_printf("%.*p", -2147483647, "a");
	printf("two==%d\n", two);
	printf("\n");
	/*if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	*/printf("\n");
	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%.*p", 2147483647, "a");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*p", 2147483647, "a");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%.*p", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*p", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%2147483647.*p", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*p", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_SPECIFICATION_MAX.(minus)*p ---------\n");
	  one = printf("%.*p", -2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*p", -2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%.*p", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*p", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*p ---------\n");
	  one = printf("%0.*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0.*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*p ---------\n");
	  one = printf("%0.*p", 2147483647, "abc");
	printf("\n");
	two = ft_printf("%0.*p", 2147483647, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*p", 2147483647, "abc");
	printf("\n");
	two = ft_printf("%0-.*p", 2147483647, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0-.*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------WIDTH_MAX0*p ---------\n");
	  one = printf("%0*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0*p ---------\n");
	  one = printf("%0*p", 2147483647, "abc");
	printf("\n");
	two = ft_printf("%0*p", 2147483647, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-*p ---------\n");
	  one = printf("%0-*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0-*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-*p ---------\n");
	  one = printf("%0-*p", 2147483647, "abc");
	printf("\n");
	two = ft_printf("%0-*p", 2147483647, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0-.*p", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*p", 2147483647, "abc");
	printf("\n");
	two = ft_printf("%-0.*p", 2147483647, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0p ---------\n");
	  one = printf("%02147483647p", 2147483647, 0);
	printf("\n");
	two = ft_printf("%02147483647p", 2147483647, 0);
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
	printf("---------WIDTH_MAX-.2147483647 ---------\n");
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
	printf("---------WIDTH_MAX.2147483647 abc---------\n");
	one = printf("%.2147483647p", "abc");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647p", "abc");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647p", "abc");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647p", "abc");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)9.2p---------\n");
	one = printf("%-9.2p", 1234);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-9.2p", 1234);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)9.24p---------\n");
	one = printf("%-9.24p", 1234);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-9.24p", 1234);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("----------9.24p---------\n");
	one = printf("%9.24p", 1234);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%9.24p", 1234);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("----------15.12p---------\n");
	one = printf("%15.12p", "abcd");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%15.12p", "abcd");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("----------9.2p---------\n");
	one = printf("%9.2p", 1234);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%9.2p", 1234);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("----------10.2p---------\n");
	one = printf("%10.2p", "abcd");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%10.2p", "abcd");
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
