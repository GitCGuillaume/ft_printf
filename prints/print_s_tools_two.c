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
ssize_t	print_s_zero(va_list ap, t_flags *l_flags)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;
	char	*value;

	nb_print = 0;
	if (l_flags->asterisk == 1)
		get_one_star(l_flags, ap);
	else if (l_flags->asterisk == 2)
		get_two_stars(l_flags, ap);
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	value = va_arg(ap, char *);
	nb_print += print_width_s(width, value, '0');
	if (value == NULL)
		value = ft_strdup("(null)");
	if (w_spec > 0 || l_flags->point == 0)
		ft_putstr_limit_fd(value, w_spec, &nb_print, 1);
	if (ft_strnstr(value, "(null)", 6))
		free(value);
	if (0 > width)
	{
		width = -width;
		nb_print += print_width_s(width, value, ' ');
	}
	return (nb_print);
}
