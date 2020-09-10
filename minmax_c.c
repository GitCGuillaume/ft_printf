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
	free(str3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
	str3 = ft_strjoin("%-", str);
	printf("\n------------------\n");
	ft_putstr_fd(str, 1);
	printf("\n------------------\n");
	one = printf(str3, str2);
	printf("\n");
	two = ft_printf(str3, str2);
	free(str3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");

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
	free(str3);
	printf("\n");
	if (one == two)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	printf("\n");
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
	str = ft_strjoin(str2, "cc");
	ft(str, 'c');
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
	str = ft_strjoin(str2, "cc");
	ft_z(str, 'c');
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
		ft3("cc", 'a',i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a',i, j);
		j++;
		i++;
	}
}

void	star_star_one(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft3("cc", 'a',i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a',i, j);
		j++;
		i++;
	}
}

void	star_star_one_one(void)
{
	int i = 0;
	int j = 0;
	i = 12;
	j = 10;
	while (j != -10)
	{
		ft2(i, j);
		ft3("cc", 'a',i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a',i, j);
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
	ft3("cc", 'a', 0, 0);
	while (i != 13)
	{
		i++;
		ft3("cc", 65, i, j);
		ft3_z("cc_z", 65, i, j);
		j++;
		ft3("cc", 'a', i, j);
		ft3_z("cc_z", 'a', i, j);
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
		ft3("cc", 'a',i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a',i, j);
		i++;
	}
}

void	star_star2_2_2(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft3("cc", 'a',i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a',i, j);
		j++;
	}	

}

void	star_star3(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -13;
	while (i != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		ft3("cc", 'a', i, j);
		ft3_z("cc_z", 'a', i, j);
		i++;
		j++;
	}	
}

void	star_star33(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -13;
	while (i != 12)
	{
		i++;
		j++;
		ft2(i, j);
		ft2_z(i, j);
		ft3("cc", 'a', i, j);
		ft3_z("cc_z", 'a', i, j);
	}	
}


void	star_star3_3(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = -10;
	while (j != 12)
	{
		ft2(i, j);
		ft3("cc", 'a', i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a', i, j);
		j++;
	}

}

void star_star3_3_3(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -13;
	while (j != 12)
	{
		ft3("cc", 'a', i, j);
		ft3_z("cc", 'a', i, j);
		ft2(i, j);
		ft2_z(i, j);
		j++;
	}
}

void	star(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft3("cc", 'a', i, j);
		ft3_z("cc", 'a', i, j);
		j++;
	}

}

void	star_one(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
	}
}
void	star_one_one(void)
{
	int i = 0;
	int j = 0;

	j = -12;
	i = -11;
	while (j != 12)
	{
		ft2(i, j);
		ft3("cc", 'a', i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a', i, j);
		j++;
		i++;
	}
}


void	star_two(void)
{
	int i = 0;
	int j = 0;

	j = -11;
	i = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft3("cc", 'a', i, j);
		ft2_z(i, j);
		ft3_z("cc", 'a', i, j);
		j++;
		i++;
	}
}

void	star_two_two(void)
{
	int i = 0;
	int j = 0;

	j = -12;
	i = -12;
	while (j != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
		i++;
	}
}

int	main(void)
{
	char *str;
	char *str2;
	char *ito;
	int i = 0;
	int j = 0;

	ft("c", 'a');
	ft("0.0cc", 'a');
	ft("0.1cc", 'a');
	ft("0.2cc", 'a');
	ft("0.3cc", 'a');
	ft("0.0cc", 'a');
	ft("1.0cc", 'a');
	ft("2.0cc", 'a');
	ft("3.0cc", 'a');
	ft("-0.0cc", 'a');
	ft("-0.1cc", 'a');
	ft("-0.2cc", 'a');
	ft("-0.3cc", 'a');
	ft("-0.0cc", 'a');
	ft("-1.0cc", 'a');
	ft("-2.0cc", 'a');
	ft("-3.0cc", 'a');
	ft("00.0cund", 'a');
	ft("00.1cund", 'a');
	ft("00.2cund", 'a');
	ft("00.3cund", 'a');
	ft("00.0cund", 'a');
	ft("01.0cund", 'a');
	ft("02.0cund", 'a');
	ft("03.0cund", 'a');
	ft("0-0.0cund", 'a');
	ft("0-0.1cund", 'a');
	ft("0-0.2cund", 'a');
	ft("0-0.3cund", 'a');
	ft("0-0.0cund", 'a');
	ft("0-1.0cund", 'a');
	ft("0-2.0cund", 'a');
	ft("0-3.0cund", 'a');
	ft("0.", 'a');
	ft("1.", 'a');
	ft("-1.", 'a');
	ft("2.", 'a');
	ft("-2.", 'a');
	ft("3.", 'a');
	ft("4.", 'a');
	ft("0.1", 'a');
	ft("1.1", 'a');
	ft("2.1", 'a');
	ft("-2.1", 'a');
	ft("3.1", 'a');
	ft("-3.1", 'a');
	ft("4.1", 'a');
	ft_z("0.", 'a');
	ft_z("1.", 'a');
	ft_z("2.", 'a');
	ft_z("3.", 'a');
	ft_z("4.", 'a');
	ft_z("0.1", 'a');
	ft_z("1.1", 'a');
	ft_z("2.2", 'a');
	ft_z("3.2", 'a');
	ft_z("4.2", 'a');
	star();
	star_one();
	star_one_one();
	star_two();
	star_two_two();
	ft3("cc", 'a', 0, 0);
	star_star();
	star_star_one();
	star_star_one_one();
	star_star2();
	star_star2_2();
	star_star2_2_2();
	star_star3();
	
	star_star33();
	star_star3_3();
	star_star3_3_3();
	//Don't forget to comment and uncomment functions
	//Pour tester la commande leaks a.out
	getchar();
	return (0);
}
