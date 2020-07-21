#include "../ft_printf.h"
#include <stdio.h>
ssize_t	calc_s(ssize_t width, ssize_t width_specification, ssize_t lensize)
{
	ssize_t size;

	size = 0;
	size = width - lensize;
	if (width > width_specification && 0 > size)
		size = -size;
	if (width > width_specification)
		size = size - width_specification;
	return (size);
}

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

void	spec_pnt_no_ast_s(t_flags *l_flags, size_t *nb_prt, char *s)
{
	ssize_t	width;
	ssize_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	(*nb_prt) += print_w_spec(calc_s(width, w_spec, ft_strlen(s)), 0, ' ');

	//(*nb_prt) += print_width_s(calc_s(width, w_spec, ft_strlen(s)), s, ' ');
	ft_putstr_limit_fd(s, w_spec, nb_prt, 1);
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
