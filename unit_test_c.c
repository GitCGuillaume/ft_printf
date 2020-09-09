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
	one = printf("%c", NULL);
	printf("\n");
	two = ft_printf("%c", NULL);
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
	printf("\n");
	printf("---------2---------\n");
	one = printf("%20c", 65);
	printf("\n");
	two = ft_printf("%20c", 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%020c", '\n');
	printf("\n");
	two = ft_printf("%020c", '\n');
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------4---------\n");
	one = printf("%0-5c", 65);
	printf("\n");
	two = ft_printf("%0-5c", 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	char test = NULL;
	printf("---------5---------\n");
	one = printf("%0-30ca", test);
	printf("\n");
	two = ft_printf("%0-30cb", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	one = printf("%-30ca", test);
	printf("\n");
	two = ft_printf("%-30ca", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	one = printf("%016ca", test);
	printf("\n");
	two = ft_printf("%016ca", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------8---------\n");
	one = printf("%0-16ca", test);
	printf("\n");
	two = ft_printf("%0-16cb", test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------9---------\n");
	one = printf("%*ca", 30, test);
	printf("\n");
	two = ft_printf("%*cb", 30, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------10---------\n");
	one = printf("%20.*c", 16, test);
	printf("\n");
	two = ft_printf("%20.*c", 16, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------11---------\n");
	one = printf("%-20.*ca", 36, test);
	printf("\n");
	two = ft_printf("%-*.*ca", 20, 36, test);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------12---------\n");
	one = printf("%2.9ca", 1234);
	printf("\n");
	two = ft_printf("%2.9ca", 1234);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------EMPTY .*p---------\n");
	one = printf("%30.*ca", 20, 0);
	printf("\n");
	two = ft_printf("%30.*ca", 20, 0);
	printf("\n");
	printf("one=%d\n", one);
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY .*p---------\n");
	one = printf("%-30.*cab", 20, 0);
	printf("\n");
	two = ft_printf("%-30.*cab", 20, 0);
	printf("\n");
	printf("one=%d\n", one);
	printf("two=%d\n", two);
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0p---------\n");
	one = printf("%0c", 0);
	printf("\n");
	two = ft_printf("%0c", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------EMPTY 0p---------\n");
	one = printf("%.c", 0);
	printf("\n");
	two = ft_printf("%.c", 0);
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
	one = printf("%*.*c", NULL, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*c", NULL, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------3---------\n");
	one = printf("%*.*ca", 8, NULL, NULL);
	printf("\n");
	two = ft_printf("%*.*ca", 8, NULL, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------4---------\n");
     	one = printf("%*.*c", 0, 4, NULL);
	printf("\n");
	two = ft_printf("%*.*c", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------5---------\n");
	one = printf("%*.*cc", 0, -4, NULL);
	printf("\n");
	two = ft_printf("%*.*cc", 0, -4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------6---------\n");
	   one = printf("%-*.*ca", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*ca", 0, -4, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7---------\n");
	   one = printf("%-*.*c", 0, 0, "4");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*.*c", 0, 0, "4");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------7.2---------\n");
	   one = printf("%*.*c", 0, 0, "4");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%*.*c", 0, 0, "4");
	printf("two=%d\n", two);
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

}

void	minus_star_point_star(void)
{
	int	one;
	int	two;

	printf("---------?---------\n");
           one = printf("%-*.*c", 0, 4, NULL);
	printf("\n");
	two = ft_printf("%-*.*c", 0, 4, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------?---------\n");
	   one = printf("%-*.*ca", 0, -4, 0);
	printf("\n");
	two = ft_printf("%-*.*cb", 0, -4, 0);
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
	   one = printf("%-*.*c", -2147483647, 0, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*.*c", -2147483647, 0, 0);
	printf("two=%d\n", two);
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
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%-*.*c", 2147483647, 0, 0);
	printf("two=%d\n", two);
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

}

void	width_min_max(void)
{
	int one;
	int two;

	one = 0;
	two = 0;
	printf("---------aaaaWIDTH_MAX---------\n");
	one = printf("%2147483647c", 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647c", 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX 2147483647.2147483647 ---------\n");
	one = printf("%2147483647.2147483647c", 0);
	printf("\n");
	two = ft_printf("%2147483647.2147483647c", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX - 2147483647.2147483647 ---------\n");
	one = printf("%-2147483647.2147483647c", 0);
	printf("\n");
	two = ft_printf("%-2147483647.2147483647c", 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");


printf("---------WIDTH_MAX 2147483647.* ---------\n");
	one = printf("%2147483647.*c", 0, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.*c", 0, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MIN-2147483647?.* ---------\n");
	one = printf("%-2147483647.*c", 1, 44);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-2147483647.*c", 1, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX*p ---------\n");
	one = printf("%*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX -*p ---------\n");
	one = printf("%-*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%-*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX.*p ---------\n");
	  one = printf("%2147483647.*c", 2147483647, "a");
	printf("\n");
	two = ft_printf("%2147483647.*c", 2147483647, "a");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_SPECIFICATION_MIN.(minus)*p ---------\n");
	one = 1;
	two = 2;	
  	one = printf("%.*c", -2147483650, "a");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*c", -2147483647, "a");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%.*c", 2147483647, "a");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*c", 2147483647, "a");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%.*c", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*c", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%2147483647.*c", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%2147483647.*c", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_SPECIFICATION_MAX.(minus)*p ---------\n");
	  one = printf("%.*c", -2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*c", -2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_SPECIFICATION_MAX.*p ---------\n");
	  one = printf("%.*c", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.*c", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*p ---------\n");
	  one = printf("%0.*c", 2147483647, 0);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%0.*c", 2147483647, 0);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0.*p ---------\n");
	  one = printf("%0.*c", 2147483647, "abc");
	printf("\n");
	two = ft_printf("%0.*c", 2147483647, "abc");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*c", 2147483647, "abc");
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%0-.*c", 2147483647, "abc");
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0-.*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("---------WIDTH_MAX0*p ---------\n");
	  one = printf("%0*c", 2147483647, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*c", 2147483647, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0*p ---------\n");
	  one = printf("%0*c", 2147483647, "abc");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0*c", 2147483647, "abc");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-*p ---------\n");
	  one = printf("%0-*c", 2147483647, 0);
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0-*c", 2147483647, 0);
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-*p ---------\n");
	  one = printf("%0-*c", 2147483647, "abc");
	printf("one=%d\n", one);
	printf("\n");
	two = ft_printf("%0-*c", 2147483647, "abc");
	printf("two=%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*c", 2147483647, 0);
	printf("\n");
	two = ft_printf("%0-.*c", 2147483647, 0);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX0-.*p ---------\n");
	  one = printf("%0-.*c", 2147483647, 65);
	printf("\n");
	two = ft_printf("%-0.*c", 2147483647, 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------WIDTH_MAX0p ---------\n");
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
	one = printf("%.2147483647c", 65);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%.2147483647c", 65);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------WIDTH_MAX-.2147483647 abc---------\n");
	one = printf("%-.2147483647c", 65);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-.2147483647c", 65);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)9.2c---------\n");
	one = printf("%-9.2c", 122);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-9.2c", 122);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("--------(-)9.24p---------\n");
	one = printf("%-9.24c", 122);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%-9.24c", 122);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);

	printf("----------9.24p---------\n");
	one = printf("%9.24c", 122);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%9.24c", 122);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("----------15.12p---------\n");
	one = printf("%15.12c", 122);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%15.12c", 122);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("----------9.2p---------\n");
	one = printf("%9.2c", 122);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%9.2c", 122);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("----------10.2p---------\n");
	one = printf("%10.2c", 65);
	printf("one==%d\n", one);
	printf("\n");
	two = ft_printf("%10.2c", 65);
	printf("two==%d\n", two);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.ca", 65);
	printf("\n");
	two = ft_printf("%.ca", 65);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.ca", 65);
	printf("\n");
	two = ft_printf("%-.ca", 65);
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
