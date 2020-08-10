#include "../ft_printf.h"

void	spec_pnt_no_ast_s(t_flags *l_flags, size_t *nb_prt, char *s)
{
	ssize_t	width;
	ssize_t	w_spec;
	char	*width_to_str;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	width_to_str = ft_strlimit(s, w_spec);
	(*nb_prt) += print_w_spec(calc_s(width, w_spec,
				ft_strlen(width_to_str)), ft_atoi(width_to_str), ' ');
	if (w_spec > 0)
		ft_putstr_limit_fd(s, w_spec, nb_prt, 1);
	free(width_to_str);
}

void	browse_two_stars_s(va_list ap, t_flags *l_flags,
		ssize_t *width, ssize_t *w_spec)
{
	int	i;

	i = 0;
	*width = ft_atoi(l_flags->width);
	*w_spec = ft_atoi(l_flags->width_specification);
	while (l_flags->asterisk > i)
	{
		if (l_flags->asterisk == 2)
		{
			if (i == 0)
				(*width) = va_arg(ap, int);
			else if (i == 1)
				(*w_spec) = va_arg(ap, int);
		}
		i++;
	}
	if (*width == 0 && *w_spec == 0 && l_flags->asterisk != 2)
		*width = va_arg(ap, int);
	else if (l_flags->asterisk == 1)
		va_arg(ap, int);
}

void	spec_pnt_ast_s(t_flags *l_flags, va_list ap, size_t *nb_prt)
{
	ssize_t	width;
	ssize_t	w_spec;
	char	*s;
	char	*width_to_str;

	browse_two_stars_s(ap, l_flags, &width, &w_spec);
	s = va_arg(ap, char *);
	width_to_str = 0;
	if (w_spec >= 0)
		width_to_str = ft_strlimit(s, w_spec);
	if (s == NULL)
		s = ft_strdup("(null)");
	if (0 > w_spec)
	{
		width = -width;
		ft_putstr_limit_fd(s, w_spec, nb_prt, 1);
	}
	(*nb_prt) += print_w_spec(calc_s(width, w_spec,
				ft_strlen(width_to_str)), ft_atoi(width_to_str), ' ');
	if (w_spec > 0)
		ft_putstr_limit_fd(s, w_spec, nb_prt, 1);
	if (ft_strnstr(s, "(null)", 6))
		free(s);
	free(width_to_str);
}

void	spec_minus_ast_s(va_list ap, t_flags *l_flags, size_t *nb_print)
{
	va_list	ap2;
	ssize_t	width;
	ssize_t	w_spec;
	char	*s;

	browse_two_stars_s(ap, l_flags, &width, &w_spec);
	s = va_arg(ap, char *);
	if (width < -2147483646 || width > 2147483646)
		return ;
	if (0 > width)
		width = -width;
	if (s == NULL)
		s = ft_strdup("(null)");
	if (0 > w_spec)
		w_spec = ft_strlen(s);
	if (l_flags->asterisk == 1 && w_spec == 0)
		ft_putstr_limit_fd(s, 0, nb_print, 1);
	else if (w_spec > 0)
		ft_putstr_limit_fd(s, w_spec, nb_print, 1);
	if (ft_strnstr(s, "(null)", 6))
		free(s);
	(*nb_print) += print_w_spec(calc_s(width, w_spec, *nb_print), 0, ' ');
	va_end(ap2);
}

void	spec_minus_no_ast_s(t_flags *l_flags, size_t *nb_print, char *s)
{
	ssize_t	width;
	size_t	w_spec;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (s == NULL)
		s = ft_strdup("(null)");
	if (l_flags->point == 0)
	{
		ft_putstr_pr_fd(s, nb_print, 1);
		(*nb_print) += print_width_s(width, s, ' ');
	}
	else
	{
		if (w_spec > 0)
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		(*nb_print) += print_w_spec(width, *nb_print, ' ');
	}
	if (ft_strnstr(s, "(null)", 6))
		free(s);
}
