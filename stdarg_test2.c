/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdarg_test2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin </var/mail/gchopin>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 18:22:12 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/18 14:11:48 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "ft_printf.h"
#include <limits.h>

int				ft_printf(const char *fmt, ...);

int	main(void)
{
	/*int	ch_pos_1 = 100;
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
	*//*printf("d5=%-*.2sa\n", 6, "abc");
	ft_printf("d6=%-*.*sa\n", 6, "abc");
	*/
	/*printf("d5=%d\n", printf("d5=%-*.2sa\n", 6, "abc"));
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
	*/printf("\n");
	printf("%0*da", -4, -12);
	printf("\n");
	ft_printf("%0*da", -4, -12);
	printf("\n");
	printf("%0*da", 4, -12);
	printf("\n");
	ft_printf("%0*da", 4, -12);
	printf("\n");
	printf("%0*da", -4, 12);
	printf("\n");
	ft_printf("%0*da", -4, 12);
	printf("\n");
	printf("%0*da", 4, 12);
	printf("\n");
	ft_printf("%0*da", 4, 12);
	printf("\n");
	printf("%0*da", -1, -12);
	printf("\n");
	ft_printf("%0*da", -1, -12);
	printf("\n");
	printf("%0*da", 1, -12);
	printf("\n");
	ft_printf("%0*da", 1, -12);
	printf("\n");
	printf("%0*da", -1, 12);
	printf("\n");
	ft_printf("%0*da", -1, 12);
	printf("\n");
	printf("%0*da", 1, 12);
	printf("\n");
	ft_printf("%0*da", 1, 12);
	printf("\n");
	ft_printf("%0*da", 0, 12);
	printf("\n");
	ft_printf("%0*da", 0, -12);
	printf("\n");
	printf("%0*dda", -4, 0);
	printf("\n");
	ft_printf("%0*dda", -4, 0);
	printf("\n");
	
	printf("%0*dda", 4, 0);
	printf("\n");
	ft_printf("%0*dda", 4, 0);
	printf("\n");
	printf("%0*dda", -4, 0);
	printf("\n");
	ft_printf("%0*dda", -4, 0);
	printf("\n");
	printf("%0*dda", 4, 0);
	printf("\n");
	ft_printf("%0*dda", 4, 0);
	printf("\n");
	printf("%0*dda", -1, -0);
	printf("\n");
	ft_printf("%0*dda", -1, 0);
	printf("\n");
	printf("%0*dda", 1, 0);
	printf("\n");
	ft_printf("%0*dda", 1, 0);
	printf("\n");
	printf("%0*dda", -1, 0);
	printf("\n");
	ft_printf("%0*dda", -1, 0);
	printf("\n");
	printf("%0*dda", 1, 0);
	printf("\n");
	ft_printf("%0*dda", 1, 0);
	printf("\n");
	ft_printf("%0*dda", 0, 0);
	printf("\n");
	ft_printf("%0*dda", 0, 0);
	printf("\n");
	printf("%*.*dda", 3, 5, 0);
	printf("\n");
	ft_printf("%*.*dda", 3, 5, 0);
	printf("\n");

	printf("%0*.*dda", 3, 5, 0);
	printf("\n");
	ft_printf("%0*.*dda", 3, 5, 0);
	printf("\n");

	printf("%*.*dda", 3, -5, 0);
	printf("\n");
	ft_printf("%*.*dda", 3, -5, 0);
	printf("\n");

	printf("%0*.*dda", 3, -5, 0);
	printf("\n");
	ft_printf("%0*.*dda", 3, -5, 0);
	printf("\n");
	printf("%5.*dda", -5, 0);
	printf("\n");
	ft_printf("%5.*dda", -5, 0);
	printf("\n");

	printf("%03.*dda", -5, 0);
	printf("\n");
	ft_printf("%03.*dda", -5, 0);
	printf("\n");

printf("%*.*dda", 5, 2, 0);
	printf("\n");
	ft_printf("%*.*dda", 5, 2, 0);
	printf("\n");

	printf("%0*.*dda", 5, 2, 0);
	printf("\n");
	ft_printf("%0*.*dda", 5, 2, 0);
	printf("\n");


	printf("%*.2dda", 5, 0);
	printf("\n");
	ft_printf("%*.2dda", 5, 0);
	printf("\n");

	printf("%0*.2dda", 5, 0);
	printf("\n");
	ft_printf("%0*.2dda", 5, 0);
	printf("\n");

	printf("%-*.*dda", 3, -5, 0);
	printf("\n");
	ft_printf("%-*.*dda", 3, -5, 0);
	printf("\n");

	printf("%0-*.*dda", 3, -5, 0);
	printf("\n");
	ft_printf("%0-*.*dda", 3, -5, 0);
	printf("\n");
	
	printf("%0*.*uua", 3, 5, 0);
	printf("\n");
	ft_printf("%0*.*uua", 3, 5, 0);
	printf("\n");

	printf("%*.*uua", 3, -5, 0);
	printf("\n");
	ft_printf("%*.*uua", 3, -5, 0);
	printf("\n");

	printf("%0*.*uua", 3, -5, 0);
	printf("\n");
	ft_printf("%0*.*uua", 3, -5, 0);
	printf("\n");
	printf("%5.*uua", -5, 0);
	printf("\n");
	ft_printf("%5.*uua", -5, 0);
	printf("\n");

	printf("%03.*uua", -5, 0);
	printf("\n");
	ft_printf("%03.*uua", -5, 0);
	printf("\n");

printf("%*.*uua", 5, 2, 0);
	printf("\n");
	ft_printf("%*.*uua", 5, 2, 0);
	printf("\n");

	printf("%0*.*uua", 5, 2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 5, 2, 0);
	printf("\n");


	printf("%*.2uua", 5, 0);
	printf("\n");
	ft_printf("%*.2uua", 5, 0);
	printf("\n");

	printf("%0*.2uua", 5, 0);
	printf("\n");
	ft_printf("%0*.2uua", 5, 0);
	printf("\n");

	printf("%-*.*uua", 3, -5, 0);
	printf("\n");
	ft_printf("%-*.*uua", 3, -5, 0);
	printf("\n");

	printf("%0-*.*uua", 3, -5, 0);
	printf("\n");
	ft_printf("%0-*.*uua", 3, -5, 0);
	printf("\n");


	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, -0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*uua", 2, -2, 0);
	printf("\n");

	ft_printf("%0*.*xua", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, -0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 3, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 3, -2, 0);
	printf("\n");
	printf("%*.*xxa", 3, -2, 0);
	printf("\n");
	ft_printf("%*.*xxa", 3, -2, 0);
	printf("\n");
	printf("%*.2xxa", 5, 0);
	printf("\n");
	ft_printf("%*.2xxa", 5, 0);
	printf("\n");

	printf("%0*.2xxa", 5, 0);
	printf("\n");
	ft_printf("%0*.2xxa", 5, 0);
	printf("\n");

	printf("%-*.*xxa", 3, -5, 0);
	printf("\n");
	ft_printf("%-*.*xxa", 3, -5, 0);
	printf("\n");

	printf("%0-*.*xxa", 3, -5, 0);
	printf("\n");
	ft_printf("%0-*.*xxa", 3, -5, 0);
	printf("\n");


	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, -0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*xxa", 2, -2, 0);
	printf("\n");
	printf("%0*.*xxa", 2, -2, 0);
	printf("%0*.*dda", 3, 1, 1);
	printf("\n");
	ft_printf("%0*.*dda", 3, 1, 1);
	printf("\n");
	printf("%0*.*dda", 3, 0, 1);
	printf("\n");
	ft_printf("%0*.*dda", 3, 0, 1);
	printf("\n");
	printf("%06d", 12);
	printf("\n");
	ft_printf("%06d", 12);
	printf("\n");
	printf("%0*d", 6, 12);
	printf("\n");
	ft_printf("%0*d", 6, 12);
	printf("\n");
	printf("%0*d", 6, 12);
	printf("\n");
	ft_printf("%0*d", 6, 12);
	printf("\n");
	printf("%0*.*ppa", 3, 5, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 3, 5, 0);
	printf("\n");

	printf("%*.*ppa", 3, -5, 0);
	printf("\n");
	ft_printf("%*.*ppa", 3, -5, 0);
	printf("\n");

	printf("%0*.*ppa", 3, -5, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 3, -5, 0);
	printf("\n");
	printf("%5.*ppa", -5, 0);
	printf("\n");
	ft_printf("%5.*ppa", -5, 0);
	printf("\n");

	printf("%03.*ppa", -5, 0);
	printf("\n");
	ft_printf("%03.*ppa", -5, 0);
	printf("\n");

	printf("%*.*ppa", 5, 2, 0);
	printf("\n");
	ft_printf("%*.*ppa", 5, 2, 0);
	printf("\n");

	printf("%0*.*ppa", 5, 2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 5, 2, 0);
	printf("\n");


	printf("%*.2ppa", 5, 0);
	printf("\n");
	ft_printf("%*.2ppa", 5, 0);
	printf("\n");

	printf("%0*.2ppa", 5, 0);
	printf("\n");
	ft_printf("%0*.2ppa", 5, 0);
	printf("\n");
	printf("%*.2ppa", 5, 0);
	printf("\n");
	ft_printf("%*.2ppa", 5, 0);
	printf("\n");

	printf("%0*.2ppa", 5, 0);
	printf("\n");
	ft_printf("%0*.2ppa", 5, 0);
	printf("\n");

	printf("%-*.*ppa", 3, -5, 0);
	printf("\n");
	ft_printf("%-*.*ppa", 3, -5, 0);
	printf("\n");

	printf("%0-*.*ppa", 3, -5, 0);
	printf("\n");
	ft_printf("%0-*.*ppa", 3, -5, 0);
	printf("\n");


	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, -0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	ft_printf("%0*.*ppa", 2, -2, 0);
	printf("\n");
	
	
	printf("%0*.*dda", 5, -2, -12);
	printf("\n");
	ft_printf("%0*.*dda", 5, -2, -12);
	printf("\n");
	printf("\n");
	printf("\n");
	int i = -4;
	int j = -3;
	int one, two;
	one = 1;
	two = 0;
	/*while (13 > i)
	{
		ft_printf("i=%d\n", i);
		one = printf("%*uua", -12, i);
		printf("\n");
		two = ft_printf("%*uua", -12, i);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		ft_printf("i=%d\n", i);
		one = printf("%012uua", i);
		printf("\n");
		two = ft_printf("%012uua", i);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		ft_printf("i=%d\n", i);
		one = printf("%0*.*dda", i, j, -1);
		printf("\n");
		two = ft_printf("%0*.*dda", i, j, -1);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		one = printf("%0*.*dda", i, j, -12);
		printf("\n");
		two = ft_printf("%0*.*dda", i, j, -12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		one = printf("%*.*dda", i+1, j, -12);
		printf("\n");
		two = ft_printf("%*.*dda", i+1, j, -12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");

		ft_printf("i=%d\n", i);
		one = printf("%*.*dda", i, j, -12);
		printf("\n");
		two = ft_printf("%*.*dda", i, j, -12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		one = printf("%0*.*uua", i, j, 12);
		printf("\n");
		two = ft_printf("%0*.*uua", i, j, 12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		
		one = printf("%0*.*dda", i, j, 1);
		printf("\n");
		two = ft_printf("%0*.*dda", i, j, 1);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		printf("%0*.*uua", i, j, 1);
		printf("\n");
		ft_printf("%0*.*uua", i, j, 1);
		printf("\n");
		printf("%0*.*xxa", i, j, 1);
		printf("\n");
		ft_printf("%0*.*xxa", i, j, 1);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		one = printf("Ah!w%d%wp%d%*.*dda", j, i, j, i, -12);
		printf("\n");
		two = ft_printf("Ah!w%dwp%d%*.*dda", j, i, j, i, -12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		one = printf("Ah!w%d%wp%d%0*.*dda", j, i, j, i, -12);
		printf("\n");
		two = ft_printf("Ah!w%dwp%d%0*.*dda", j, i, j, i, -12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
	one = printf("Ah!w%d%wp%d%*.*dda", j, i, j, i, 12);
		printf("\n");
		two = ft_printf("Ah!w%dwp%d%*.*dda", j, i, j, i, 12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("i=%d\n", i);
		one = printf("Ah!w%d%wp%d%0*.*dda", j, i, j, i, 12);
		printf("\n");
		two = ft_printf("Ah!w%dwp%d%0*.*dda", j, i, j, i, 12);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");



		i++;
		j++;
	}
	*/
	i = -13;
	j = -13;
	while (i != 0)
	{
		ft_printf("i=%d\n", i);
		one = printf("%*.*dda", i, j, j);
		printf("\n");
		two = ft_printf("%*.*dda", i, j, j);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");

		ft_printf("i=%d\n", i);
		one = printf("%0*.*dda", i, j, j);
		printf("\n");
		two = ft_printf("%0*.*dda", i, j, j);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0*.*uua", i, j, 1);
		printf("\n");
		two = ft_printf("%0*.*uua", i, j, 1);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");

		one = printf("%0*.*xxa", i, j, 1);
		printf("\n");
		two = ft_printf("%0*.*xxa", i, j, 1);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0*.*ssa", i, j, "1");
		printf("\n");
		two = ft_printf("%0*.*ssa", i, j, "1");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");

		j++;
		i++;
	}
	printf("%0*.*uua", 20, -2, 1);
	printf("\n");
	ft_printf("%0*.*uua", 20, -2, 1);
	printf("\n");
	printf("%0*.*xxa", 20, -2, -12);
	printf("\n");
	ft_printf("%0*.*xxa", 20, -2, -12);
	printf("\n");
	printf("%0*.*ppa", 20, 30, -12);
	printf("\n");
	ft_printf("%0*.*ppa", 20, 30, -12);
	printf("\n");
	printf("%0-*.*ppa", 20, -30, -12);
	printf("\n");
	ft_printf("%0-*.*ppa", 20, -30, -12);
	printf("\n");
	printf("%0*.*dda", 4, 2, -12);
	printf("\n");
	ft_printf("%0*.*dda", 4, 2, -12);
	printf("\n");
	printf("%*.*dda", 4, -2, -12);
	printf("\n");
	ft_printf("%*.*dda", 4, -2, -12);
	printf("\n");
	printf("ah%-16.sa", "abc");
	printf("\n");
	ft_printf("ah%-16.sa", "abc");
	printf("\n");
	one = printf("%*.4dda", -2, 135);
		printf("\n");
		two = ft_printf("%*.4dda", -2, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0*.4dda", -2, 135);
		printf("\n");
		two = ft_printf("%0*.4dda", -2, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		ft_printf("------\n");
	i = -11;
	while (i != 0)
	{
		one = printf("%*.5dda", i, 135);
		printf("\n");
		two = ft_printf("%*.5dda", i, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0*.5dda", i, 135);
		printf("\n");
		two = ft_printf("%0*.5dda", i, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-*.5dda", i, 135);
		printf("\n");
		two = ft_printf("%-*.5dda", i, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.4dda", i, -135);
		printf("\n");
		two = ft_printf("%0-*.4dda", i, -135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-*.5uua", i, 135);
		printf("\n");
		two = ft_printf("%-*.5uua", i, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.5uua", i, 135);
		printf("\n");
		two = ft_printf("%0-*.5uua", i, 135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.5ssa", i, "135");
		printf("\n");
		two = ft_printf("%0-*.5ssa", i, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%*.5ssa", i, "135");
		printf("\n");
		two = ft_printf("%*.5ssa", i, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0*.5ssa", i, "135");
		printf("\n");
		two = ft_printf("%0*.5ssa", i, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		i++;
	}
	j = 0;
	while (j != 14)
	{
		one = printf("%-*.4dda", j, INT_MAX);
		printf("\n");
		two = ft_printf("%-*.4dda", j, INT_MAX);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.4dda", j, INT_MAX);
		printf("\n");
		two = ft_printf("%0-*.4dda", j, INT_MAX);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
	one = printf("%-*.4dda", j, INT_MIN);
		printf("\n");
		two = ft_printf("%-*.4dda", j, INT_MIN);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.4dda", j, INT_MIN);
		printf("\n");
		two = ft_printf("%0-*.4dda", j, INT_MIN);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-*.4dda", j, INT_MAX);
		printf("\n");
		two = ft_printf("%-*.4dda", j, INT_MAX);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.4dda", j, INT_MAX);
		printf("\n");
		two = ft_printf("%0-*.4dda", j, INT_MAX);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
	one = printf("%-*.4dda", j, INT_MIN);
		printf("\n");
		two = ft_printf("%-*.4dda", j, INT_MIN);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.4dda", j, INT_MIN);
		printf("\n");
		two = ft_printf("%0-*.4dda", j, INT_MIN);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		j++;
		one = printf("%0-*.4ssa", j, "a");
		printf("\n");
		two = ft_printf("%0-*.4ssa", j, "a");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-*.4ssa", j, "a");
		printf("\n");
		two = ft_printf("%-*.4ssa", j, "a");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%*.4ssa", j, "a");
		printf("\n");
		two = ft_printf("%*.4ssa", j, "a");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0*.4ssa", j, "a");
		printf("\n");
		two = ft_printf("%0*.4ssa", j, "a");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		j++;
	}
	one = printf("%-*.3dda", 4, -135);
		printf("\n");
		two = ft_printf("%-*.3dda", 4, -135);
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-*.3ssa", 4, "-135");
		printf("\n");
		two = ft_printf("%-*.3ssa", 4, "-135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%*.3ssa", 4, "135");
		printf("\n");
		two = ft_printf("%*.3ssa", 4, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%0-*.3ssa", 2, "135");
		printf("\n");
		two = ft_printf("%0-*.3ssa", 2, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
	one = printf("%-*.3ssa", -2, "-135");
		printf("\n");
		two = ft_printf("%-*.3ssa", -2, "-135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%4.*ssa", -2, "135");
		printf("\n");
		two = ft_printf("%4.*ssa", -2, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-4.*ssa", 2, "135");
		printf("\n");
		two = ft_printf("%-4.*ssa", 2, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%-4.*ppa", -20, "135");
		printf("\n");
		two = ft_printf("%-4.*ppa", -20, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		one = printf("%4.*ppa", -20, "135");
		printf("\n");
		two = ft_printf("%4.*ppa", -20, "135");
		printf("\n");
		if (one == two)
			ft_putstr_fd("OK", 1);
		else
			ft_putstr_fd("KO", 1);
		printf("\n");
		printf("\n");
printf("%d", ft_printf(""));
		printf("\n");
printf("%d", printf(""));
		printf("\n");
		ft_printf(NULL);
		printf("\n");
		printf("cspdiuxX%");
		ft_printf("cspdiuxX%");
		printf("\n");
		printf("%c", NULL);
		ft_printf("%c", NULL);
		printf("\n");
		printf("%s", NULL);
		printf("\n");
		ft_printf("%s", NULL);
		printf("\n");
		printf("%p", NULL);
		printf("\n");
		ft_printf("%p", NULL);
		printf("\n");
		ft_printf("%d", NULL);
		printf("%d", NULL);
		printf("\n");
		ft_printf("%i", NULL);
		printf("%i", NULL);
		printf("\n");
		ft_printf("%u", NULL);
		printf("%u", NULL);
		printf("\n");
		ft_printf("%x", NULL);
		printf("%x", NULL);
		printf("\n");
		ft_printf("%X", NULL);
		printf("%X", NULL);
		printf("\n");
		ft_printf("%s", "zzz", "bbb");
		printf("\n");
		printf("%s", "zzz", "bbb");
		printf("\n");
		ft_printf("%s%s", "zzz");
		printf("\n");
		printf("%s%s", "zzz");
		printf("\n");
		ft_printf("%c", 'a', 'a');
		printf("\n");
		printf("%c", 'a', 'a');
		printf("\n");
		ft_printf("%c%c", 'a');
		printf("\n");
		printf("%c%c", 'a');
		printf("\n");
		ft_printf("%p", "zzz", "bbb");
		printf("\n");
		printf("%p", "zzz", "bbb");
		printf("\n");
		ft_printf("%p%p", "zzz");
		printf("\n");
		printf("%p%p", "zzz");
		printf("\n");
		ft_printf("%d", 12, 12);
		printf("\n");
		printf("%d", 12, 12);
		printf("\n");
		ft_printf("%d%d", 12);
		printf("\n");
		printf("%d%d", 12);
		printf("\n");
		ft_printf("%d", 12, 12);
		printf("\n");
		printf("%d", 12, 12);
		printf("\n");
		ft_printf("%d%d", 12);
		printf("\n");
		printf("%d%d", 12);
		printf("\n");
		ft_printf("%i", 12, 12);
		printf("\n");
		printf("%i", 12, 12);
		printf("\n");
		ft_printf("%i%i", 12);
		printf("\n");
		printf("%i%i", 12);
		printf("\n");
		ft_printf("%u", 12, 12);
		printf("\n");
		printf("%u", 12, 12);
		printf("\n");
		ft_printf("%u%u", 12);
		printf("\n");
		printf("%u%u", 12);
		printf("\n");
		ft_printf("%x", 12, 12);
		printf("\n");
		printf("%x", 12, 12);
		printf("\n");
		ft_printf("%x%x", 12);
		printf("\n");
		printf("%x%x", 12);
		printf("\n");
		ft_printf("%X", 12, 12);
		printf("\n");
		printf("%X", 12, 12);
		printf("\n");
		ft_printf("%X%X", 12);
		printf("\n");
		printf("%X%X", 12);
		printf("\n");
		ft_printf("%%", 12, 12);
		printf("\n");
		printf("%%", 12, 12);
		printf("\n");
		ft_printf("%%%%", 12);
		printf("\n");
		printf("%%%%", 12);
		printf("\n");
		printf("%%%", 12);
		printf("\n");
		ft_printf("%%%", 12);
		printf("\n");
		//printf(INT_MIN);
		//ft_printf(INT_MIN);
		printf("%*.*u", 42, 25, 4294967284);
		printf("\n");
		ft_printf("%*.*u", 42, 25, 4294967284);
		printf("\n");
		printf("%*.*u", 42, 25, 4294967295);
		printf("\n");
		ft_printf("%*.*u", 42, 25, 4294967295);
		printf("\n");
		printf("%*.*u", 42, 25, INT_MAX);
		printf("\n");
		ft_printf("%*.*u", 42, 25, INT_MAX);
		printf("\n");
		printf("%*.*u", 42, 25, INT_MIN + 1);
		printf("\n");
		ft_printf("%*.*u", 42, 25, INT_MIN + 1);
		printf("\n");
		getchar();		
	return (0);
}
