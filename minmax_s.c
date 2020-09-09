#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	ft(char *str, char *str2)
{
	int	one = 0;
	int two = 0;
	char	*str3;

	str3 = ft_strjoin("%", str);
	printf("\n------------------\n");
	ft_putstr_fd(str, 1);
	printf("\n------------------\n");
	one = printf(str3, str2);
	printf("\n");
	two = ft_printf(str3, str2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	free(str3);
}
void	ft_z(char *str, char *str2)
{
	int	one = 0;
	int two = 0;
	char	*str3;

	str3 = ft_strjoin("%0", str);
	printf("\n------------------\n");
	ft_putstr_fd(str, 1);
	printf("%s%s", str3, str);
	printf("\n------------------\n");
	one = printf(str3, str2);
	printf("\n");
	two = ft_printf(str3, str2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	free(str3);
}

void	ft2(int i, int j)
{
	char *str;
	char *str2;
	char *ito;
	int	i_cpy = i;
	int	j_cpy = j;

	if (0 > i_cpy)
		i_cpy = i_cpy * (-1);
	if (0 > j_cpy)
		j_cpy = j_cpy * (-1);
	ito = ft_itoa(i_cpy);
	str = ft_strjoin(ito, ".");
	free(ito);
	ito = ft_itoa(j_cpy);
	str2 = ft_strjoin(str, ito);
	free(str);
	str = ft_strjoin(str2, "ss");
	ft(str, "123");
	free(ito);
	free(str);
	free(str2);
}

void	ft2_z(int i, int j)
{
	char *str;
	char *str2;
	char *ito;
	int	i_cpy = i;
	int	j_cpy = j;

	if (0 > i_cpy)
		i_cpy = i_cpy * (-1);
	if (0 > j_cpy)
		j_cpy = j_cpy * (-1);
	ito = ft_itoa(i_cpy);
	str = ft_strjoin(ito, ".");
	free(ito);
	ito = ft_itoa(j_cpy);
	str2 = ft_strjoin(str, ito);
	free(str);
	str = ft_strjoin(str2, "ss");
	ft_z(str, "123");
	free(ito);
	free(str);
	free(str2);
}


void	ft3(char *str, char *str2, int i, int j)
{
	int	one = 0;
	int two = 0;
	char	*str3;

	str3 = ft_strjoin("%*.*", str);
	printf("\n------------------\n");
	ft_printf("%d.%d", i, j);
	ft_putstr_fd(str, 1);
	printf("\n------------------\n");
	one = printf(str3, i, j, str2);
	printf("\n");
	two = ft_printf(str3, i, j, str2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	free(str3);
}

void	ft3_z(char *str, char *str2, int i, int j)
{
	int	one = 0;
	int two = 0;
	char	*str3;

	str3 = ft_strjoin("%0*.*", str);
	printf("\n------------------\n");
	ft_printf("%0d.%d", i, j);
	ft_putstr_fd(str, 1);
	printf("\n------------------\n");
	one = printf(str3, i, j, str2);
	printf("\n");
	two = ft_printf(str3, i, j, str2);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	free(str3);
}

void	star_star(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
		i++;
	}

	i = -10;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
		i++;
	}
	i = 12;
	j = 10;
	while (j != -10)
	{
		ft2(i, j);
		ft2_z(i, j);
		j--;
		i--;
	}	
}

void star_star2(void)
{
	int i = 0;
	int j = 0;

	i = -13;
	j = -12;
	ft3("ss", "1", 0, 0);
	while (i != 13)
	{
		i++;
		ft3("ss", "1234", i, j);
		ft3_z("ss_z", "1234", i, j);
		j++;
		ft3("ss", "1234", i, j);
		ft3_z("ss_z", "1234", i, j);
	}
}

void	star_star2_2(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = 0;
	while (i != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		i++;
	}
	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
	}

}
void	star_star3(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -13;
	while (i != 13)
	{
		ft3("ss", "1234", i, j);
		ft3_z("ss_z", "1234", i, j);
		i++;
		j++;
		ft3("ss", "1234", i, j);
		ft3_z("ss_z", "1234", i, j);
	}
}

int	main(void)
{
	char *str;
	char *str2;
	char *ito;
	int i = 0;
	int j = 0;
	/*
	ft("s", "123");
	ft("0.0ss", "12");
	ft("0.1ss", "12");
	ft("0.2ss", "12");
	ft("0.3ss", "12");
	ft("0.0ss", "12");
	ft("1.0ss", "12");
	ft("2.0ss", "12");
	ft("3.0ss", "12");
	ft("-0.0ss", "12");
	ft("-0.1ss", "12");
	ft("-0.2ss", "12");
	ft("-0.3ss", "12");
	ft("-0.0ss", "12");
	ft("-1.0ss", "12");
	ft("-2.0ss", "12");
	ft("-3.0ss", "12");
	ft("00.0sund", "12");
	ft("00.1sund", "12");
	ft("00.2sund", "12");
	ft("00.3sund", "12");
	ft("00.0sund", "12");
	ft("01.0sund", "12");
	ft("02.0sund", "12");
	ft("03.0sund", "12");
	ft("0-0.0sund", "12");
	ft("0-0.1sund", "12");
	ft("0-0.2sund", "12");
	ft("0-0.3sund", "12");
	ft("0-0.0sund", "12");
	ft("0-1.0sund", "12");
	ft("0-2.0sund", "12");
	ft("0-3.0sund", "12");
	ft("0.", "12");
	ft("1.", "12");
	ft("2.", "12");
	ft("3.", "12");
	ft("4.", "12");
	*/
	/*i = -12;
	j = 0;
	while (i != 1)
	{
		ft2(i, j);
		ft2_z(i, j);
		i++;
	}
	j = -12;
	while (j != 1)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
	}
	j = -12;
	i = -11;
	while (j != 1)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
		i++;
	}*/
	ft3("ss", "1", 0, 0);
	//star_star();
	//star_star2();
	//star_star2_2();
	star_star3();
	//Don't forget to comment and uncomment functions
	//Pour tester la commande leaks a.out
	//getchar();
	return (0);
}
