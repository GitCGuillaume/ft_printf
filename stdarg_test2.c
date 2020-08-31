/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdarg_test2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin </var/mail/gchopin>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 18:22:12 by gchopin           #+#    #+#             */
/*   Updated: 2020/08/31 19:04:31 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	void	*test;
	test = malloc(3);
	//printf("%9p", 123);
	printf("\n");
	ft_printf("%9p", "hi low");
	printf("---------WIDTH MIN-*p---------\n");
	printf("p=%*p", 5,123);
	printf("\n");
	ft_printf("⁼p=%-20p", 1);
	printf("\n");
printf("---------12---------\n");
	printf("%2.9sa", "abcd");
	printf("\n");
	ft_printf("%2.9sa", "abcd");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("%.*ia", -6, -3);
	printf("\n");
	ft_printf("%.*ia", -6, -3);
	printf("\n");
	printf("%.*db", -6, -3);
	printf("\n");
	ft_printf("%.*db", -6, -3);
	printf("\n");
	printf("%.*ia", -6, -3);
	printf("\n");
	ft_printf("%.*ia", -6, -3);
	printf("\n");
	printf("%-10.*db", -6, -3);
	printf("\n");
	ft_printf("%-10.*db", -6, -3);
	printf("\n");
	printf("%10.*db", -6, -3);
	printf("\n");
	ft_printf("%10.*db", -6, -3);
	printf("\n");
	printf("% *i%d", 5, 123, 12);	
	printf("\n");
	ft_printf("% *i%d", 5, 123, 12);
	printf("\n");
	printf("%-10.*ub", -6, -3);
	printf("\n");
	ft_printf("%-10.*ub", -6, -3);
	printf("\n");
	printf("%10.*ub", -6, -3);
	printf("\n");
	ft_printf("%10.*ub", -6, -3);
	printf("\n");
	//ft_printf("%%");
	printf("\n");
	printf("%*.*s%s", 0, 1,"abc", "abc");
	printf("\n");
	ft_printf("%s%s", "abc", "abc");
	printf("\n");
	ft_printf("%*.*s", 0, 1, "abc");
	printf("\n");
	printf("%*.*%s", 0, 5);
	printf("\n");
	printf("%*.*s%-10sa", 0, 1, "123","45");
	printf("\n");
	printf("%*.s%-10sa", 0, "123","45");
	printf("\n");
	ft_printf("%*.*s%-10sa", 0, 1, "123","45");
	printf("\n");
	ft_printf("%*.s%-10sa", 0, "123","45");
	printf("\n");
	printf("%-*.s%-10sa", 0, "123","45");
	printf("\n");
	ft_printf("%-*.s%-10sa", 0, "123","45");
	printf("\n");
	printf("\n");
	printf("%%");
	printf("\n");
	ft_printf("%%");
	printf("\n");
	//ft_printf("%5%s", "abc");
	printf("------");
	printf("\n");
	printf("%5%%s", "abc");
	printf("\n");
	ft_printf("%5%%s", "abc");
	printf("\n");
	printf("%*%", 5);
	printf("\n");
	ft_printf("%*%", 5);
	printf("\n");
	printf("%*%%5%%5%%5%5", 5);
	printf("\n");
	ft_printf("%*%%5%%5%%5%5", 5);
	printf("\n");
	printf("%%%%%%%%");
	printf("\n");
	ft_printf("%%%%%%%%");
	printf("\n");
	printf("%*%%%%%%%", 5);
	printf("\n");
	ft_printf("%*%%%%%%%", 5);
	printf("\n");
	printf("%*%s", 5, "a");
	printf("\n");
	ft_printf("%*%s", 5, "a");
	printf("\n");
	printf("%");
	printf("\n");
	ft_printf("%");
	printf("\n");
	printf("%0*%", -5);
	printf("\n");
	ft_printf("%0*%", -5);
	printf("\n");
	printf("ah%*.*%", 10, 5);
	printf("\n");
	ft_printf("ah%*.*%", 10, 5);
	printf("\n");
	printf("%0*%", 5);
	printf("\n");
	ft_printf("%0*%", 5);
	printf("\n");
	ft_printf("%0*%", 5);
	printf("\n");
	printf("(|%010.u|)", 10);
	printf("\n");
	ft_printf("(|%010.u|)", 10);
	printf("\n");
	printf("lalala, %d%% des gens qui parlent %C Ly adorent %s. Ou Presque. %d, %u, %X, %c", 100, L'à', "Ly", 2, 10, 10000, '\n', "ôHohoho");
	return (0);
}
