#include "../ft_printf.h"
#include <stdio.h>
ssize_t	calc_s(ssize_t width, ssize_t width_specification, ssize_t lensize)
{
	ssize_t size;

	size = width - lensize;
	if (width > width_specification && 0 > size)
		size = -size;
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
#include <stdio.h>
void	spec_pnt_no_ast_s(t_flags *l_flags, size_t *nb_prt, char *s)
{
	ssize_t	width;
	ssize_t	w_spec;
	char	*width_to_str;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	width_to_str = ft_strlimit(s, w_spec);
	(*nb_prt) += print_w_spec(calc_s(width, w_spec, ft_strlen(width_to_str)), ft_atoi(width_to_str),' ');

	if (w_spec > 0)
		ft_putstr_limit_fd(s, w_spec, nb_prt, 1);
	free(width_to_str);
}
#include <stdio.h>
void	spec_minus_ast_s(va_list ap, t_flags *l_flags, size_t *nb_print, int s)
{
	va_list	ap2;
	ssize_t	width;
	ssize_t w_spec;
	char	*s_copy;

	va_copy(ap2, ap);
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	s_copy = va_arg(ap2, char *);
	printf("\ns == %d\n", s);
	printf("s_copy == %s\n", s_copy);
	/*printf("width == %li", width);
	printf("width_specification == %li", w_spec);*/
	(void)nb_print;(void)ap2, (void)ap; (void)width, (void)w_spec;(void)s_copy;(void)l_flags;
	if (s_copy == NULL)
		s_copy = ft_strdup("(null)");
	/*if (l_flags->point == 0)
	{
		ft_putstr_fd(s_copy, nb_print, 1);
		(*nb_print) += print_width_s(s, s_copy, ' ');
	}
	else
	{
		if (s == NULL)
			ft_putstr_limit_fd(s_copy, , nb_print, 1);
	}*/
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
		ft_putstr_fd(s, nb_print, 1);
		(*nb_print) += print_width_s(width, s, ' ');
	}
	else
	{
		if (/*w_spec >= 1 &&*/ s == NULL)
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		else if (s != NULL && w_spec > 0)
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		(*nb_print) += print_w_spec(width, *nb_print, ' ');
	}
	if (ft_strnstr(s, "(null)", 6))
		free(s);
}
