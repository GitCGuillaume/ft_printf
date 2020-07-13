#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *strt;
	strt = ft_strtrim("bonjour ob", " bo");
	printf("strt = %s\n", strt);
	free(strt);
	strt = ft_strtrim("", " bo");
	printf("strt = %s\n", strt);
	free(strt);
	char **ptr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	ptr = ft_split("a b", ' ');
	/*if (!ptr[0])
		printf("c est bon\n");
	else
	{*/
	printf("ah1");
	//printf("ptr[0]==%s", ptr[0]);
	printf("ptr[1]==%s", ptr[1]);
	/*while(ptr[i])
	{
		printf("p=%s\n", ptr[i]);
		i++;
	}*/
	printf("ah2");
	/*while (ptr[j] != 0)
	{
		free(ptr[j]);
		j++;
	}*/
	printf("ah3");
	free(ptr);
	printf("ah4");
	//}
	return (0);
}
