#include "../ft_printf.h"

void	ft_putstr_limit_fd(char *s, size_t limit, ssize_t *nb_print, int fd)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	if (limit == 0)
		limit = ft_strlen(s);
	while (s[i] && limit > i)
	{
		write(fd, &s[i], 1);
		(*nb_print)++;
		i++;
	}
}

ssize_t	calc_s(ssize_t width, ssize_t width_specification, ssize_t lensize)
{
	ssize_t size;

	size = width - lensize;
	if (width > width_specification && 0 > size)
		size = -size;
	return (size);
}

int		check_min_max_value_s(t_flags *l_flags)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		if (width < -2147483646 || width > 2147483646)
			return (-1);
	}
	if (width < -2147483646 || width > 2147483646)
		return (-1);
	if (w_spec < -2147483648)
		return (-1);
	return (0);
}
#include <stdio.h>
ssize_t	print_s_zero(t_flags *l_flags, char *value)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;
	char	padding;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	padding = '0';
	if (0 > width)
		padding = ' ';
	if (l_flags->minus == 0 && width > 0)
		nb_print += astrsk_s_lr(width, value, padding);
	else if (l_flags->minus == 0)
		nb_print += astrsk_s_rl(width, value, padding);
	else if (l_flags->minus == 1)
	{
		if (0 > width)
			width = -width;
		nb_print += astrsk_s_rl(width, value, ' ');
	}
	return (nb_print);
}
