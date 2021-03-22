#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("c\n");
	ft_printf("%2147483647c", 'a');
	ft_printf("nb=%d", ft_printf("%2147483647c", 'a'));
	ft_printf("\n");
	printf("%2147483647c", 'a');
	printf("nb=%d", printf("%2147483647c", 'a'));
	printf("\n");
	printf("\n");
	ft_printf("%2147483647.2147483647c", 'a');
	ft_printf("nb=%d", ft_printf("%2147483647.2147483647c", 'a'));
	ft_printf("\n");
	printf("%2147483647.2147483647c", 'a');
	printf("nb=%d", printf("%2147483647.2147483647c", 'a'));
	printf("\n");
	printf("\n");

	ft_printf("%*c", 2147483647, 'a');
	ft_printf("nb=%d", ft_printf("%*c", 2147483647, 'a'));
	ft_printf("\n");
	printf("%*c", 2147483647, 'a');
	printf("nb=%d", ft_printf("%*c", 2147483647, 'a'));
	printf("\n");
	printf("\n");
	
	ft_printf("%*.*c", 2147483647, 2147483647, 'a');
	ft_printf("nb=%d", ft_printf("%*.*c", 2147483647, 2147483647, 'a'));
	ft_printf("\n");
	printf("%*.*c", 2147483647, 2147483647, 'a');
	printf("nb=%d", ft_printf("%*.*c", 2147483647, 2147483647, 'a'));
	printf("\n");
	printf("\n");

	ft_printf("%*c", -2147483648, 'a');
	ft_printf("nb=%d", ft_printf("%*c", -2147483648, 'a'));
	ft_printf("\n");
	printf("%*c", -2147483648, 'a');
	printf("nb=%d", ft_printf("%*c", -2147483648, 'a'));
	printf("\n");
	printf("\n");
	
	ft_printf("%*.*c", 2147483647, -2147483648, 'a');
	ft_printf("nb=%d", ft_printf("%*.*c", 2147483647, -2147483648, 'a'));
	ft_printf("\n");
	printf("%*.*c", 2147483647, -2147483648, 'a');
	printf("nb=%d", ft_printf("%*.*c", 2147483647, -2147483648, 'a'));
	printf("\n");
	printf("\n");
	ft_printf("%*.*c", 2147483647, -2147483648, 'a');
	ft_printf("nb=%d", ft_printf("%*.*c", 2147483647, -2147483648, 'a'));
	ft_printf("\n");
	printf("%*.*c", 2147483647, -2147483648, 'a');
	printf("nb=%d", ft_printf("%*.*c", 2147483647, -2147483648, 'a'));
	printf("\n");
	printf("\n");

	ft_printf("%*.*c", -2147483648, 2147483647, 'a');
	ft_printf("nb=%d", ft_printf("%*.*c", -2147483648, 2147483647, 'a'));
	ft_printf("\n");
	printf("%*.*c", -2147483648, 2147483647, 'a');
	printf("nb=%d", ft_printf("%*.*c", -2147483648, 2147483647, 'a'));
	printf("\n");
	printf("\n");
	
	return (0);
}
