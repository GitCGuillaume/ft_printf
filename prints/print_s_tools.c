/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:54:31 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/02 10:54:32 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strlimit(char *s, ssize_t width)
{
	ssize_t	i;
	char	*ptr;

	i = 0;
	if (s != NULL && width != 0)
	{
		if (!(ptr = malloc(width + 1)))
			return (NULL);
		while (s[i] != '\0' && width > i)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	else
		ptr = NULL;
	return (ptr);
}

ssize_t	print_basic_value_s(ssize_t *width, char *s, char c)
{
	ssize_t	nb_print;

	nb_print = 0;
	nb_print += print_width_s(*width, s, c);
	ft_putstr_pr_fd(s, &nb_print, 1);
	return (nb_print);
}

ssize_t	astrsk_s_rl(int d, char *s, char padding)
{
	ssize_t	nb_print;

	nb_print = 0;
	if (0 > d)
		d = -d;
	ft_putstr_limit_fd(s, 0, &nb_print, 1);
	nb_print += print_width_s(d, s, padding);
	return (nb_print);
}

ssize_t	astrsk_s_lr(int d, char *s, char padding)
{
	ssize_t	nb_print;

	nb_print = 0;
	nb_print += print_width_s(d, s, padding);
	ft_putstr_limit_fd(s, 0, &nb_print, 1);
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
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (l_flags->zero == 1)
		padding = '0';
	if (l_flags->minus == 0)
	{
		if (width >= 0)
			nb_print += astrsk_s_lr(width, value, padding);
		else
			nb_print += astrsk_s_rl(width, value, padding);
	}
	else
		nb_print += astrsk_s_rl(width, value, padding);
	return (nb_print);
}
