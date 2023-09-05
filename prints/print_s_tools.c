/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:54:31 by gchopin           #+#    #+#             */
/*   Updated: 2021/04/14 11:46:20 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_limit_fd(char *s, size_t limit, ssize_t *nb_print, int fd)
{
	size_t i;

	i = 0;
	if (s == NULL)
	{
		*nb_print = -1;
		return ;
	}
	if (s)
	{
		if (limit == 0)
			limit = ft_strlen(s);
		while (s[i] && limit > i)
		{
			write(fd, &s[i], 1);
			(*nb_print)++;
			i++;
		}
	}
}

char	*ft_strlimit(char *s, ssize_t width)
{
	ssize_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (s)
	{
		ptr = malloc(width + 1);
		if (ptr == NULL)
			return (NULL);
		while (s[i] != '\0' && width > i)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

/*
 ** string left width right
*/

ssize_t	astrsk_s_rl(int d, char *s, char padding)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (0 > d)
		d = -d;
	if (s)
	{
		ft_putstr_limit_fd(s, 0, &nb_print, 1);
		nb_print += print_width_s(d, s, padding);
	}
	return (nb_print);
}

/*
 ** string right width left
*/

ssize_t	astrsk_s_lr(int d, char *s, char padding)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (s)
	{
		nb_print += print_width_s(d, s, padding);
		ft_putstr_limit_fd(s, 0, &nb_print, 1);
	}
	return (nb_print);
}

ssize_t	astrsk_s(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	int		width;
	char	padding;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	padding = ' ';
	if (l_flags->zero == 1)
		padding = '0';
	if (value)
	{
		if (l_flags->minus == 0)
		{
			if (width >= 0)
				nb_print += astrsk_s_lr(width, value, padding);
			else
				nb_print += astrsk_s_rl(width, value, padding);
		}
		else
			nb_print += astrsk_s_rl(width, value, padding);
	}
	return (nb_print);
}
