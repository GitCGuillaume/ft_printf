#include "../ft_printf.h"

void	ft_putstr_limit_fd(char *s, size_t limit, size_t *nb_print, int fd)
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

void	spec_minus_s(t_flags *l_flags, size_t *nb_print, char *s)
{
	ssize_t	width;
	size_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->point == 0)
	{
		if (s == NULL)
			s = ft_strdup("(null)");
		ft_putstr_fd(s, nb_print, 1);
		(*nb_print) += print_width_s(width, s, ' ');
	}
	else
	{
		if (w_spec >=  1 && s == NULL)
		{
			s = ft_strdup("(null)");
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		}
		else if (s != NULL && w_spec > 0)
		{
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		}
		(*nb_print) += print_w_spec(width, *nb_print, ' ');
	}
}
