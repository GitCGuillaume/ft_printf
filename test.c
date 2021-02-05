#include "ft_printf.h"
#include <stdio.h>

int				ft_printf(const char *fmt, ...);
int	main(void)
{
int		a = -4;
	int		b = 0;
		char	c = 'a';
			int		d = 2147483647;
				int		e = -2147483648;
					int		f = 42;
						int		g = 25;
							int		h = 4200;
								int		i = 8;
									int		j = -12;
										int		k = 123456789;
											int		l = 0;
												int		m = -12345678;
													char	*n = "abcdefghijklmnop";
														char	*o = "-a";
															char	*p = "-12";
																char	*q = "0";
																	char	*r = "%%";
																		char	*s = "-2147483648";
																			char	*t = "0x12345678";
	char	*u = "-0";
	
	printf("Simple input test");
	printf("\n");
	ft_printf("Simple input test");
	printf("\n");
	printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j);
	printf("\n");
	ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j);
	
	printf("\n---------u3---------\n");
	printf("%*.*u8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%*.*u8", 8, NULL, NULL);
	printf("\n");
	printf("---------d3---------\n");
	printf("%*.*d8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%*.*d8", 8, NULL, NULL);
	printf("\n");
	printf("--------(-)u3---------\n");
	printf("%-*.*u8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%-*.*u8", 8, NULL, NULL);
	printf("\n");
	printf("--------(-)d3---------\n");
	printf("%-*.*d8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%-*.*d8", 8, NULL, NULL);
	printf("\n");
	printf("---------u03---------\n");
	printf("%0*.*u8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%0*.*u8", 8, NULL, NULL);
	printf("\n");
	printf("---------d03---------\n");
	printf("%0*.*d8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%0*.*d8", 8, NULL, NULL);
	printf("\n");
	printf("--------(-)u03---------\n");
	printf("%0-*.*u8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%0-*.*u8", 8, NULL, NULL);
	printf("\n");
	printf("--------(-)d03---------\n");
	printf("%0-*.*d8", 8, NULL, NULL);
	printf("\n");
	ft_printf("%0-*.*d8", 8, NULL, NULL);
	printf("\n");
	ft_printf("null=%p\n", (void *)0);
	printf("null=%p\n", (void *)0);
	ft_printf("envoyé=%*p%-135.109d" ,-15,(void*)15603137398285451084lu,1482420587);
	printf("\n");
	printf("expecté=%*p%-135.109d" ,-15,(void*)15603137398285451084lu,1482420587);
	printf("\n");
	ft_printf("%*pp", -15, (void *)15603137);
	printf("\n");
	printf("%*pp", -15, (void *)15603137);
	return (0);
}
