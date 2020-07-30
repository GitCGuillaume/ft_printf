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

void	spec_pnt_ast_s(t_flags *l_flags, va_list ap, size_t *nb_prt)
{
	ssize_t	width;
	ssize_t	w_spec;
	int		i;
	char	*s;
	char	*width_to_str;

	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	i = 0;
	//s = va_arg(ap, char *);
	while (l_flags->asterisk > i)
	{
		if (l_flags->asterisk == 2)
		{
			if (i == 0)
				width = va_arg(ap, int);
			else if (i == 1)
				w_spec = va_arg(ap, int);
		}
		i++;
	}
	if (width == 0 && w_spec == 0)
		width = va_arg(ap, int);
	else if (l_flags->asterisk == 1)
		va_arg(ap, int);
	s = va_arg(ap, char *);
	width_to_str = ft_strlimit(s, w_spec);
	//width = -width;
	if (s == NULL)
		s = ft_strdup("(null)");
	if (0 > w_spec)
	{
		width = -width;
		ft_putstr_limit_fd(s, w_spec, nb_prt, 1);
		(*nb_prt) += print_w_spec(calc_s(width,w_spec, *nb_prt), *nb_prt, ' ');
	}
	else if (w_spec > 0)
	{
		(*nb_prt) += print_w_spec(calc_s(width, w_spec, ft_strlen(width_to_str)), ft_atoi(width_to_str),' ');
	}
	ft_putstr_limit_fd(width_to_str, w_spec, nb_prt, 1);
	free(width_to_str);
}
void	spec_minus_ast_s(va_list ap, t_flags *l_flags, size_t *nb_print)
{
	va_list	ap2;
	int	width;
	int w_spec;
	int	i;
	//char	*s_copy;
	char		*s;

	i = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	while (l_flags->asterisk > i)
	{
		if (l_flags->asterisk == 2)
		{
			if (i == 0)
				width = va_arg(ap, int);
			else if (i == 1)
				w_spec = va_arg(ap, int);
		}
		i++;
	}
	if (width == 0 && w_spec == 0 && l_flags->asterisk != 2)
		width = va_arg(ap, int);
	else if (l_flags->asterisk == 1)
		va_arg(ap, int);
	s = va_arg(ap, char *);
	if (0 > width)
		width = -width;
	if (s == NULL)
		s = ft_strdup("(null)");
	if (width != 0)
		ft_putstr_limit_fd(s, w_spec, nb_print, 1);
	//if (width)
	(*nb_print) += print_w_spec(calc_s(width, w_spec, *nb_print), 0, ' ');
	/*printf("va arg=%s\n", s);
	printf("width == %d", width);
	printf("width_specification == %d", w_spec);*/
	/*va_copy(ap2, ap);
	ft_printf("lflags->asterisk == %d\n", l_flags->asterisk);
	s_copy = va_arg(ap2, char *);
	printf("\ns == %d\n", s);

	if (width == 0)
	{
		ft_putstr_limit_fd(s_copy, w_spec, nb_print, 1);
	}
	*/
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
		if (/*w_spec >= 1 &&*/ s == NULL)
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		else if (s != NULL && w_spec > 0)
			ft_putstr_limit_fd(s, w_spec, nb_print, 1);
		(*nb_print) += print_w_spec(width, *nb_print, ' ');
	}
	if (ft_strnstr(s, "(null)", 6))
		free(s);
}
