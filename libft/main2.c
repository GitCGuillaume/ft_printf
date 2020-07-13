#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_open(void);
void ft_putendl_fd(char *s, int fd);

char cmp(unsigned int i, char c)
{
	if (i == (unsigned char)c)
		return ('a');
	else
		return ('b');
}

int	main(void)
{
	char *ptrSubstr;
	ptrSubstr = ft_substr("bonjour ceci est un test", 2, 25);
	printf("ft_substr==%s", ptrSubstr);
	free(ptrSubstr);
	char *ptrStrjoin;
	ptrStrjoin = ft_strjoin("bonjour", " test |");
	printf("\nft_strjoin==%s\n", ptrStrjoin);
	free(ptrStrjoin);
	char *ptest1, *ptest2, *ptest3, *ptest4;
	ptest1 = "Bonjour ceci est un test";
	ptest3 = "Bonjour ceci est un test";
	ptest2 = strdup(ptest1);
	ptest4 = ft_strdup(ptest3);
	printf("strdup == %s\n", ptest2);
	printf("ft_strdup == %s\n", ptest4);
	//free(ptest1);
	free(ptest2);
	//free(ptest3);
	free(ptest4);
	char *ptr;
	printf("ft_itoa == %s\n", ptr = ft_itoa(-123456789));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-12345678));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-1234567));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-123456));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-12345));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(1234));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(123));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(12));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-12));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-1));
	free(ptr);
	printf("ft_itoa == %s\n", ptr = ft_itoa(-0));
	free(ptr);

	char (*function_name)(unsigned int, char);
	char *ptr2;
	function_name = cmp;
	ptr2 = ft_strmapi("Bonjour tous le monde", function_name);
	printf("ft_strmapi == %s", ptr2);
	free(ptr2);
	int fd = open("text", O_WRONLY | S_IWUSR);
	if (fd == -1)
		return (0);
	printf("etat d'ouvertue du fichier text == %d\n", fd);
	ft_putchar_fd('B', fd);
	ft_putstr_fd("Bonjour ceci est un test", fd);
	ft_putendl_fd("Ceci est un test", fd);
	ft_putchar_fd('e', fd);
	ft_putstr_fd("\n", fd);
	ft_putnbr_fd(123456789, fd);
	ft_putstr_fd("\n", fd);
	ft_putnbr_fd(-123456789, fd);
	free(function_name);
	return (0);
}
