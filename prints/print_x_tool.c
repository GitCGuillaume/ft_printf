#include "../ft_printf.h"

ssize_t	print_x_lr(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		return (nb_print += print_x_rl(l_flags, hexa));
	nb_print += print_width_s(width, hexa, ' ');
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_x_rl(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		width = -width;
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	nb_print += print_width_s(width, hexa, ' ');
	return (nb_print);
}

ssize_t	print_x_zero(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		return (nb_print += print_x_rl(l_flags, hexa));
	nb_print += print_width_s(width, hexa, '0');
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_x_point_star(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (0 > width)
		return (nb_print += print_x_minus_point_star(l_flags, hexa));
	if ((hexa[0] == '0' && hexa[1] == '\0') && w_spec == 0)
		width++;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_strlen(hexa), 0),
				nb_print, ' ');
	nb_print += print_w_spec(w_spec, ft_strlen(hexa), '0');
	if (w_spec != 0 || !(hexa[0] == '0' && hexa[1] == '\0'))
		ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_x_minus_point_star(t_flags *l_flags, char *hexa)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (0 > width)
		width = -width;
	nb_print += print_w_spec(w_spec - ft_strlen(hexa), 0, '0');
	if (w_spec != 0 || !(hexa[0] == '0' && hexa[1] == '\0'))
		ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}
