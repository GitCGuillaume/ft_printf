#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	ch_pos_1 = 100;
	char str_3[] = "this is a longer string";
	static long neg = -22337203685477;
	char str_2[] = "panda";
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
	printf("d7=%d\n", printf("d7=%*.*sb\n", NULL, NULL, NULL));
	ft_printf("d8=%d\n", ft_printf("d8=%*.*sb\n", NULL, NULL, NULL));
	ft_printf("d8=%d\n", ft_printf("d8=%*.*sb\n", NULL, NULL, NULL));
	printf("\n");
	printf("d9=%d", printf("d9=%-*.*sa", 0, 8, 0));	
	printf("\n");
	ft_printf("d9=%d", ft_printf("d9=%-*.*sb", 0, 8, 0));
	printf("\n");
	printf("d10=%d", printf("d10=%-*.*da", 10, 0, 8));	
	printf("\n");
	ft_printf("d11=%d", ft_printf("d11=%-*.*db", 10, 0, 8));
	printf("\n");
	printf("d12=%d", printf("d12=%*.*da", 10, 3, 1234));	
	printf("\n");
	ft_printf("d13=%d", ft_printf("d13=%*.*db", 10, 3, 1234));
	//ft_printf("%hhi%s%lli%s", ch_pos_1, str_3, neg, str_2);	
	printf("\n");
	printf("%09s", "hi low");
	printf("\n");
	ft_printf("%09s", "hi low");
	return (0);
}
