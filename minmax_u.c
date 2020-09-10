/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:39:35 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/10 18:13:17 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"
#include <limits.h>

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
	str3 = ft_strjoin("%-", str);
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
	str = ft_strjoin(str2, "uu");
	ft(str, 123);
	free(ito);
	free(str);
	free(str2);
}

void	ft2mm(int i, int j)
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
	str = ft_strjoin(str2, "uu");
	ft(str, INT_MAX);
	ft(str, INT_MIN);
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
	str = ft_strjoin(str2, "uu");
	ft_z(str, 123);
	free(ito);
	free(str);
	free(str2);
}

void	ft2mm_z(int i, int j)
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
	str = ft_strjoin(str2, "uu");
	ft_z(str, INT_MIN);
	ft_z(str, INT_MAX);
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
	str3 = ft_strjoin("%0*.*", str);
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
		j++;
		i++;
	}
}

void	star_sta(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -12;
	while (j != 12)
	{
		ft3("uu", 1234,i, j);
		ft3("uu", INT_MAX,i, j);
		j++;
		i++;
	}
}

void	star_starr(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -12;
	while (j != 12)
	{
		ft2_z(i, j);
		ft3_z("uu", 1234,i, j);
		ft3_z("uu", INT_MAX,i, j);
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
		ft3("uu", 1234, i, j);
		ft2_z(i, j);
		ft3_z("uu", 1234, i, j);
		j++;
		i++;
	}
}

void	star_star_onee(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -12;
	while (j != 12)
	{
		ft3("uu", INT_MIN, i, j);
		ft3("uu", INT_MAX, i, j);
		j++;
		i++;
	}
}

void	star_star_oneee(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -12;
	while (j != 12)
	{
		ft2_z(i, j);
		ft2mm_z(i, j);
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
		ft2mm(i, j);
		j--;
		i--;
	}	
}

void	star_star_one_onee(void)
{
	int i = 0;
	int j = 0;

	i = 12;
	j = 10;
	while (j != -10)
	{
		ft3("uu", 1234, i, j);
		ft3("uu", INT_MIN, i, j);
		ft3("uu", INT_MAX, i, j);
		j--;
		i--;
	}	
}

void	star_star_one_one_zero(void)
{
	int i = 0;
	int j = 0;

	i = 12;
	j = 10;
	while (j != -10)
	{
		ft2_z(i, j);
		ft2mm_z(i, j);
		ft3_z("uu", 1234, i, j);
		ft3_z("uu", INT_MIN, i, j);
		ft3_z("uu", INT_MAX,i, j);
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
		ft3("uu", 1234, i, j);
		ft3_z("uu_z", 1234, i, j);
		j++;
		ft3("uu", 1234, i, j);
		ft3_z("uu_z", 1234, i, j);
	}
}
void star_star22(void)
{
	int i = 0;
	int j = 0;

	i = -13;
	j = -12;
	while (i != 13)
	{
		i++;
		ft3("uu", INT_MAX, i, j);
		ft3("uu", INT_MIN, i, j);
		j++;
	}
}

void star_star222(void)
{
	int i = 0;
	int j = 0;

	i = -13;
	j = -12;
	while (i != 13)
	{
		i++;
		ft3_z("uu_z", INT_MAX, i, j);
		ft3("uu", INT_MIN, i, j);
		j++;
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
		ft3("uu", 1234,i, j);
		i++;
	}
}
void	star_star2_22(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = 0;
	while (i != 12)
	{
		ft2_z(i, j);
		ft3_z("uu", 1234,i, j);
		i++;
	}
}
void	star_star22_2(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = 0;
	while (i != 12)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
		i++;
	}
}
void	star_star222_2(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = 0;
	while (i != 12)
	{
		ft3("uu", INT_MAX,i, j);
		ft3("uu", INT_MAX,i, j);
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
		ft3("uu", 1234,i, j);
		ft2_z(i, j);
		ft3_z("uu", 1234,i, j);
		j++;
	}	

}

void	star_star2_2_22(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2(i, j);
		j++;
	}	

}
void	sstar_star2_2_22(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft3("uu", INT_MIN, i, j);
		ft3("uu", INT_MAX, i, j);
		j++;
	}	

}

void	ssstar_star2_2_22(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2mm(i, j);
		ft2_z(i, j);
		j++;
	}	

}

void	star_star2_2_222(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2mm_z(i, j);
		j++;
	}	

}

void	star_star2_2_2222(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft3_z("uu", INT_MIN, i, j);
		ft3_z("uu", INT_MAX, i, j);
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
		ft3("uu", 1234, i, j);
		ft3_z("uu_z", 1234, i, j);
		i++;
		j++;
	}	
}
void	sstar_star3(void)
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
		ft3("uu", "1234", i, j);
		ft3_z("uu_z", "1234", i, j);
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
		ft2mm(i, j);
		ft2mm_z(i, j);
		ft3("uu", INT_MIN, i, j);
		ft3_z("uu_z", INT_MIN, i, j);
		i++;
		j++;
	}	
}
void	sstar_star33(void)
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
		ft3("uu", INT_MIN, i, j);
		ft3_z("uu_z", INT_MIN, i, j);
	}	
}


void	star_star333(void)
{
	int i = 0;
	int j = 0;
	
	i = -12;
	j = -13;
	while (i != 12)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu_z", INT_MAX, i, j);
		i++;
		j++;
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu_z", INT_MAX, i, j);
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
		ft3("uu", 1234, i, j);
		ft2_z(i, j);
		ft3_z("uu", "1234", i, j);
		j++;
	}

}

void	star_star33_3(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = -10;
	while (j != 12)
	{
		ft2mm(i, j);
		ft3("uu", INT_MIN, i, j);
		j++;
	}
}


void	star_star333_3(void)
{
	int i = 0;
	int j = 0;

	i = -12;
	j = -10;
	while (j != 12)
	{
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu", INT_MAX, i, j);
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
		ft3("uu", 1234, i, j);
		ft3_z("uu", 1234, i, j);
		j++;
	}
}
void sstar_star3_3_3(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -13;
	while (j != 12)
	{
		ft2(i, j);
		ft2_z(i, j);
		j++;
	}
}


void star_star3_3_33(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -13;
	while (j != 12)
	{
		ft3("uu", INT_MIN, i, j);
		ft3_z("uu", INT_MIN, i, j);
		j++;
	}
}

void sstar_star3_3_33(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -13;
	while (j != 12)
	{
		ft2mm(i, j);
		j++;
	}
}

void ssstar_star3_3_33(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -13;
	while (j != 12)
	{
		ft2mm_z(i, j);
		j++;
	}
}

void star_star3_3_333(void)
{
	int i = 0;
	int j = 0;

	i = -10;
	j = -13;
	while (j != 12)
	{
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu", INT_MAX, i, j);
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
		ft3("uu", 1234, i, j);
		ft3_z("uu", 1234, i, j);
		j++;
	}
}

void	starr(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -13;
	while (j != 13)
	{
		ft3("uu", INT_MIN, i, j);
		ft3_z("uu", INT_MIN, i, j);
		j++;
	}
}

void	starrr(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -13;
	while (j != 13)
	{
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu", INT_MAX, i, j);
		j++;
	}
}
void	starrrr(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
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

void	star_oneone(void)
{
	int i = 0;
	int j = 0;

	i = 0;
	j = -12;
	while (j != 12)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
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
		/*ft3("uu", 1234, i, j);
		ft2_z(i, j);
		ft3_z("uu", 1234, i, j);
		*/
		j++;
		i++;
	}
}

void	star_one_oneone(void)
{
	int i = 0;
	int j = 0;

	j = -12;
	i = -11;
	while (j != 12)
	{
		ft2mm(i, j);
		ft3("uu", INT_MIN, i, j);
		ft2mm_z(i, j);
		ft3_z("uu", INT_MIN, i, j);
		j++;
		i++;
	}
}
void	star_one_oneoneone(void)
{
	int i = 0;
	int j = 0;

	j = -12;
	i = -11;
	while (j != 12)
	{
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu", INT_MAX, i, j);
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
		ft3("uu", 1234, i, j);
		ft2_z(i, j);
		ft3_z("uu", 1234, i, j);
		j++;
		i++;
	}
}

void	star_twotwo(void)
{
	int i = 0;
	int j = 0;

	j = -11;
	i = -12;
	while (j != 12)
	{
		ft3("uu", INT_MIN, i, j);
		ft3_z("uu", INT_MIN, i, j);
		j++;
		i++;
	}
}

void	star_twtw(void)
{
	int i = 0;
	int j = 0;

	j = -11;
	i = -12;
	while (j != 12)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
		j++;
		i++;
	}
}


void	star_twotwotwo(void)
{
	int i = 0;
	int j = 0;

	i = -13;
	j = -11;
	while (j != 11)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
		j++;
		i++;
	}
}
void	star_twtwtw(void)
{
	int i = 0;
	int j = 0;

	j = -11;
	i = -12;
	while (j != 12)
	{
		ft3("uu", INT_MAX, i, j);
		ft3_z("uu", INT_MAX, i, j);
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

void	star_two_twotwo(void)
{
	int i = 0;
	int j = 0;

	j = -12;
	i = -12;
	while (j != 12)
	{
		ft2mm(i, j);
		ft2mm_z(i, j);
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
	ft("20.18u", INT_MIN);

	ft("u", 123);
	ft("0.0uu", 12);
	ft("0.1uu", 12);
	ft("0.2uu", 12);
	ft("0.3uu", 12);
	ft("0.0uu", 12);
	ft("1.0uu", 12);
	ft("2.0uu", 12);
	ft("3.0uu", 12);
	ft("-0.0uu", 12);
	ft("-0.1uu", 12);
	ft("-0.2uu", 12);
	ft("-0.3uu", 12);
	ft("-0.0uu", 12);
	ft("-1.0uu", 12);
	ft("-2.0uu", 12);
	ft("-3.0uu", 12);
	ft("00.0uu", 12);
	ft("00.1uu", 12);
	ft("00.2uu", 12);
	ft("00.3uu", 12);
	ft("00.0uu", 12);
	ft("01.0uu", 12);
	ft("02.0uu", 12);
	ft("03.0uu", 12);
	ft("0-0.0uu", 12);
	ft("0-0.1uu", 12);
	ft("0-0.2uu", 12);
	ft("0-0.3uu", 12);
	ft("0-0.0uu", 12);
	ft("0-1.0uu", 12);
	ft("0-2.0uu", 12);
	ft("0-3.0uu", 12);
	ft("0.", 12);
	ft("1.", 12);
	ft("2.", 12);
	ft("3.", 12);
	ft("4.", 12);
	ft("0.1", 12);
	ft("1.1", 12);
	ft("2.1", 12);
	ft("3.1", 12);
	ft("4.1", 12);
	
	star();
	starr();
	starrr();
	starrrr();
	star_one();
	star_oneone();
	star_one_one();
	star_two();
	star_twotwo();
	star_twtw();
	star_twotwotwo();
	star_twtwtw();
	star_two_two();
	star_two_twotwo();
	star_two_twotwo();
	ft3("uu", 1, 0, 0);
	star_star();
	star_sta();
	star_starr();
	star_star_one();
	star_star_onee();
	star_star_oneee();
	star_star_one_one();
	star_star_one_onee();
	star_star_one_one_zero();
	star_star2();
	star_star22();
	star_star222();
	star_star2_2();
	star_star2_22();
	star_star22_2();
	star_star222_2();
	star_star2_2_2();
	star_star2_2_22();
	sstar_star2_2_22();
	ssstar_star2_2_22();
	star_star2_2_222();
	star_star2_2_2222();
	star_star3();
	sstar_star3();
	star_star33();
	sstar_star33();
	star_star333();
	star_star3_3();
	star_star33_3();
	star_star333_3();
	star_star3_3_3();
	sstar_star3_3_3();
	star_star3_3_33();
	sstar_star3_3_33();
	ssstar_star3_3_33();
	star_star3_3_333();
	//Don't forget to comment and uncomment functions
	//Pour tester la commande leaks a.out
	getchar();
	return (0);
}
