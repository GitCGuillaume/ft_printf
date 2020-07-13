#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char	*str);
int		main(void)
{
	printf("atoi == %d\n", atoi("123456789"));
	printf("ft_atoi == %d\n", ft_atoi("123456789"));
	printf("atoi == %d\n", atoi("-123456789"));
	printf("ft_atoi == %d\n", ft_atoi("-123456789"));
	printf("back t atoi == %d\n", atoi("\t-12345a6789"));
	printf("back t ft_atoi == %d\n", ft_atoi("\t-12345a6789"));
	printf("alphabet atoi == %d\n", atoi("-12a3456789"));
	printf("alphabet ft_atoi == %d\n", ft_atoi("-12a3456789"));
	printf("piscine atoi == %d\n", atoi("  ---+--+1234b567"));
	printf("piscine ft_atoi == %d\n", ft_atoi("  ---+--+1234b567"));
	printf("atoi == %d\n", atoi("+12 3456789"));
	printf("ft_atoi == %d\n", ft_atoi("+12 3456789"));
	printf("atoi == %d\n", atoi("-12 3456789"));
	printf("ft_atoi == %d\n", ft_atoi("-12 3456789"));
	printf("atoi == %d\n", atoi("0"));
	printf("ft_atoi == %d\n", ft_atoi("0"));
	printf("atoi == %d\n", atoi("01"));
	printf("ft_atoi == %d\n", ft_atoi("01"));
	printf("atoi == %d\n", atoi("-01"));
	printf("ft_atoi == %d\n", ft_atoi("-01"));
	printf("atoi == %d\n", atoi("-0"));
	printf("ft_atoi == %d\n", ft_atoi("-0"));
	printf("atoi == %d\n", atoi("-0 1"));
	printf("ft_atoi == %d\n", ft_atoi("-0 1"));
	printf("atoi == %d\n", atoi("0 1"));
	printf("ft_atoi == %d\n", ft_atoi("0 1"));
	printf("atoi == %d\n", atoi("abc"));
	printf("ft_atoi == %d\n", ft_atoi("abc"));
	printf("atoi == %d\n", atoi("1\n2"));
	printf("ft_atoi == %d\n", ft_atoi("1\n2"));
	printf("atoi == %d\n", atoi("-1\n2"));
	printf("ft_atoi == %d\n", ft_atoi("-1\n2"));
	printf("atoi == %d\n", atoi(" 123"));
	printf("ft_atoi == %d\n", ft_atoi(" 123"));
	printf("atoi == %d\n", atoi("+ --1a23"));
	printf("ft_atoi == %d\n", ft_atoi("+ --1a23"));
	printf("atoi == %d\n", atoi("  --123"));
	printf("ft_atoi == %d\n", ft_atoi("  --123"));
	printf("atoi == %d\n", atoi("  ++123"));
	printf("ft_atoi == %d\n", ft_atoi("  ++123"));
	printf("atoi == %d\n", atoi("  123"));
	printf("ft_atoi == %d\n", ft_atoi("  123"));
	printf("atoi == %d\n", atoi("1  23"));
	printf("ft_atoi == %d\n", ft_atoi("1  23"));
	printf("atoi == %d\n", atoi("1 23"));
	printf("ft_atoi == %d\n", ft_atoi("1 23"));
	printf("atoi == %d\n", atoi("- 45"));
	printf("ft_atoi == %d\n", ft_atoi("- 45"));
	return (0);
}
