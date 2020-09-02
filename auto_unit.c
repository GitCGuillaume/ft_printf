#include "fcntl.h"
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

void	ft_test(int i, char *convertor)
{
	char	*value_before;
	char	*value;
	char	*itoa;
	char	*str;
	unsigned int one;
	unsigned int two;

	one = 0;
	two = 0;
	itoa = ft_itoa(i);
	str = ft_strdup(convertor);
	value_before = ft_strjoin("%", itoa);
	value = ft_strjoin(value_before, str);
	ft_printf("%d", i);
	printf("\n----------\n");
	one = printf(value, NULL);
	printf("\n");
	two = ft_printf(value, NULL);
	printf("\n");
	if (one == two)
		ft_putstr_fd("ok", 1);
	else
		ft_putstr_fd("ko", 1);
	printf("\n");
	free(itoa);
	free(str);
	free(value_before);
	free(value);
}

int		ft_open_fd(void)
{
	int fd;	
	fd = open("auto.txt", O_WRONLY);
	if (fd == -1)	
	{
		printf("L'ouverture n'a pu se faire, vérifiez si fichier existe ou les droits");
	}
	return (fd);
}

int	main(void)
{
	int i;
	int fd;

	fd = ft_open_fd();
	if (dup2(fd, 1) == -1)
	{
		exit(1);
	}
	i = NULL;
	ft_test(i, "s");
	i = 0;
	while (20 > i)
	{
		ft_test(i, "s");
		i++;
	}
	getchar();
	return (0);
}
