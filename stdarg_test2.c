#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("d1=%d", ft_printf("d1=%%-*s LYDI == |%-*s|\n", -10, "zbcd"));
	ft_printf("d2=%d", ft_printf("d2=%%-*s LYDI == |%-*s|\n", -10, "zbcd"));
	printf("\n");
	printf("d3=%d", printf("%%-*.3s LYDI == |%3.*s|\n", 0, "abcd"));
	ft_printf("d4=%d", printf("%%-*.3s LYDI == |%3.*s|\n", 0, "abcd"));
	printf("\ngneee1%-*.*sb\n", -7, -3, "yolo");
	ft_printf("\ngneee2%-*.*sb", -7, -3, "yolo");
	printf("\n");
	/*printf("d5=%-*.2sa\n", 6, "abc");
	ft_printf("d6=%-*.*sa\n", 6, "abc");
	*/
	printf("d5=%d\n", printf("d5=%-*.2sa\n", 6, "abc"));
	ft_printf("d6=%d\n", ft_printf("d6=%-*.2sa\n", 6, "abc"));
	printf("\n");
	printf("d7=%d\n", printf("d7=%-.*sb\n", NULL, NULL));
	ft_printf("d8=%d\n", ft_printf("d8=%-.*sb\n", NULL, NULL));
	printf("\n");
	printf("d9=%d", printf("d9=%-*.*sa", 10, 3, "hello"));	
	printf("\n");
	ft_printf("d9=%d", ft_printf("d9=%-*.*sb", 10, 3, "hello"));
	printf("\n");
	printf("d10=%d", printf("d10=%*.*da", -10, -3, 1));	
	printf("\n");
	ft_printf("d11=%d", ft_printf("d11=%*.*db", -10, -3, 1));
	
	return (0);
}
