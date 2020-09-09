#include <stdio.h>
#include "ft_printf.h"
int	main(void)
{
	int one = 0;
	int two = 0;
	printf("---------1---------\n");
	one = printf("%1.0sa", "4");
	printf("\n");
	two = ft_printf("%1.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%2.0sa", "4");
	printf("\n");
	two = ft_printf("%2.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%3.0sa", "4");
	printf("\n");
	two = ft_printf("%3.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0.1sa", "4");
	printf("\n");
	two = ft_printf("%0.1sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1.1sa", "4");
	printf("\n");
	two = ft_printf("%1.1sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1.2sa", "4");
	printf("\n");
	two = ft_printf("%1.2sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1.3sa", "4");
	printf("\n");
	two = ft_printf("%1.3sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1.0sa", "4");
	printf("\n");
	two = ft_printf("%1.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

	printf("---------9---------\n");
	one = printf("%-3.0sa", "4");
	printf("\n");
	two = ft_printf("%-3.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-1.0sa", "4");
	printf("\n");
	two = ft_printf("%-1.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-2.0sa", "4");
	printf("\n");
	two = ft_printf("%-2.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-3.0sa", "4");
	printf("\n");
	two = ft_printf("%-3.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-0.1sa", "4");
	printf("\n");
	two = ft_printf("%-0.1sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%0-.1sa", "4");
	printf("\n");
	two = ft_printf("%0-.1sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	printf("---------1---------\n");
	one = printf("%-1.1sa", "4");
	printf("\n");
	two = ft_printf("%-1.1sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-1.2sa", "4");
	printf("\n");
	two = ft_printf("%-1.2sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-1.3sa", "4");
	printf("\n");
	two = ft_printf("%-1.3sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-1.0sa", "4");
	printf("\n");
	two = ft_printf("%-1.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-1.sa", "4");
	printf("\n");
	two = ft_printf("%-1.sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%1.sa", "4");
	printf("\n");
	two = ft_printf("%1.sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.0sa", "4");
	printf("\n");
	two = ft_printf("%.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.0sa", "4");
	printf("\n");
	two = ft_printf("%-.0sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%.sa", "4");
	printf("\n");
	two = ft_printf("%.sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	printf("---------1---------\n");
	one = printf("%-.sa", "4");
	printf("\n");
	two = ft_printf("%-.sa", "4");
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	
	return (0);
}
