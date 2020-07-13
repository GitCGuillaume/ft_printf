/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin </var/mail/gchopin>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:31:07 by gchopin           #+#    #+#             */
/*   Updated: 2020/05/02 17:11:56 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <strings.h>
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memset(void *s, int o, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int	 ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_isalpha(int c);
int ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int  ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);

int	main(void){
	char pointer[50] = "gneuhgneuh";
	
	printf("ft_memset == %s\n", ft_memset(pointer, 33, 3));
	printf("memset == %s\n", memset(pointer, 33, 3));

	printf("ft_toupper == %c\n", ft_toupper('e'));
	printf("toupper == %c\n", toupper('e'));

	printf("ft_bzero === \n");	
	int i = 0;
	unsigned char c;
	bzero(pointer, 1);
	while (i < 34)
	{
		c = ((char)pointer[i]);
		printf("%02x ", c);
		i++;
	}
	printf("\n");
	printf(" ft_bzero === \n");	
	i = 0;
	char pointer2[50] = "gneuhgneuh";
	ft_bzero(pointer2, 2);
	unsigned char c2;
	while(i<34)
	{
		c2 = ((char)pointer2[i]);
		printf("%02x ", c2);
		i++;
	}
	printf("\n");

	char ptr[28] = "Bonjour tous le monde2345678";
	char dst1[50] = "ceci est un test azertyuiop";
	//char dst2[50] = "ceci est un test";
	char dst3[50];
	char dst4[50];
	printf("ft_memcpy == %s\n", ft_memcpy(ptr, dst3, 20));
	printf("memcpy == %s\n", memcpy(dst1, ptr, 50));

	printf("\nmemccpy == %s\n", memccpy(dst3, ptr, 'e', sizeof(dst3)));
	printf("dst3 == %s\n", dst3);
	printf("ft_memccpy == %s\n", ft_memccpy(dst4, ptr, 'e', sizeof(dst4)));
	printf("dst4 == %s\n", dst4);
	
	char memmove_src[27] = "Bonjour tous le monde234567";
	char memmove_src2[27] = "Bonjour tous le monde234567";
	char memmove_dst[28] = "Bonjour tous le monde2345678";
	char memmove_dst2[28] = "Bonjour tous le monde2345678";

	printf("\nmemmove == %s\n", memmove(memmove_dst, memmove_src, 27));
	printf("ft_memmove == %s\n", ft_memmove(memmove_dst2, memmove_src2, 27));

	char ptr_memchr[28] = "Bonjour tous le monde2345678";
	
	printf("memchr == %s\n", memchr(ptr_memchr, 114, 18));
	printf("ft_memchr == %s\n", ft_memchr(ptr_memchr, 114, 18));

	char string_memcmp1[28] = "";
	char string_memcmp2[28] = "Bonjour tous le monde2345678";
	printf("memcmp == %d\n", memcmp(string_memcmp1, string_memcmp2, 3));
	printf("ft_memcmp == %d\n", ft_memcmp(string_memcmp1, string_memcmp2, 3));
	printf("strlen == %lu\n", strlen("test "));
	printf("ft_strlen == %lu\n", ft_strlen("test "));

	printf("isalpha == %d\n", isalpha('a'));
	printf("ft_isalpha == %d\n", ft_isalpha('a'));
	printf("isalnum == %d\n", isalnum('1'));
	printf("ft_isalnum == %d\n", ft_isalnum('1'));
	printf("isascii == %d\n", isascii('~'));
	printf("ft_isascii == %d\n", ft_isascii('~'));
	printf("isprint == %d\n", isprint('~'));
	printf("ft_isprint == %d\n", ft_isprint('~'));
	printf("strchr == %s\n", strchr("ceci est un string", 'i'));
	printf("ft_strchr == %s\n", ft_strchr("ceci est un string", 'i'));
	printf("strchr == %s\n", strrchr("ceci est un string", 'i'));
	printf("ft_strchr == %s\n", ft_strrchr("ceci est un string", 'i'));
	printf("strncmp == %d\n", strncmp(" eci est un test", "aeci est un test", 16));
	printf("ft_strncmp == %d\n", ft_strncmp(" eci est un test", "aeci est un test", 16));
	
	char dst_strlcpy[20] = "";
	printf("strlcpy == %lu\n", strlcpy(dst_strlcpy, "ceci est un test", 20));
	printf("strlcpy result == %s\n", dst_strlcpy);
	unsigned char c3;
	int k = 0;
	while (k < 20)
	{
		c3 = ((char)dst_strlcpy[k]);
		printf("%02x ", c3);
		k++;
	}
	printf("%c",'\n');
	printf("%c",'\n');
	printf("%c",'\n');
	char dst_strlcpy2[20];
	printf("ft_strlcpy == %lu\n", ft_strlcpy(dst_strlcpy2, "ceci est un test", 20));
	printf("ft_strlcpy result == %s\n", dst_strlcpy2);
	unsigned char c4;
	int l = 0;
	while (l < 20)
	{
		c4 = ((char)dst_strlcpy2[l]);
		printf("%02x ", c4);
		l++;
	}
	printf("\n----------------------------------\n");
	char dst_strlcat[150]= "Bonjour";
	printf("strlcat == %lu\n", strlcat(dst_strlcat, ", Ceci est un test", 7));
	printf("\nstrlcat result == %s\n\n", dst_strlcat);
	char dst_strlcat2[150]= "Bonjour";
	printf("\nft_strlcat == %lu\n", ft_strlcat(dst_strlcat2, ", Ceci est un test", 7));
	printf("\nft_strlcat result == %s\n", dst_strlcat2);
	printf("strnstr == %s\n", strnstr("Bonjour tous le monde", "sdff i", 21));
	printf("ft_strnstr == %s\n", ft_strnstr("Bonjour tous le monde", "sdflkjslkj d", 21));
	printf("---------------\n");
	char *ptr_calloc;
	ptr_calloc = (char *)calloc(0, 0);		
	//unsigned long c5;
	size_t m = 0;
	while (m < sizeof(char *) - 1)
	{
		ptr_calloc[m] = m + '0';
		m++;
	}
	m = 0;
	while (m < 10)
	{
		printf("%d ", ptr_calloc[m]);
		m++;
	}
	free(ptr_calloc);
	printf("\n---------\n");
	char	*ptr_calloc2;
	ptr_calloc2 = (char *)ft_calloc(0, 0);
	size_t	n = 0;
	while (n < sizeof(char *) - 1)
	{
		ptr_calloc2[n] = n + '0';
		n++;
	}
	n = 0;
	while (n < 10)
	{
		printf("%d ", ptr_calloc2[n]);
		n++;
	}
	free(ptr_calloc2);
	printf("\n-----\n");
	char *ptest1 = "Bonjour, ceci est un test";
	char *ptest2;
	ptest2 = strdup(ptest1);
	printf("ptest2 == %s\n", ptest2);
	printf("\n");
	char *ptest3 = "Bonjour, ceci est un test";
	char *ptest4;
	ptest4 = ft_strdup(ptest3);
	printf("ptest4 == %s\n", ptest4);
	printf("\n");
}
