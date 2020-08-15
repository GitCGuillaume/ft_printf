#include "../ft_printf.h"

ssize_t	print_x_lr(t_flags *l_flags, char hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	nb_print += print_width_s(width, hexa, ' ');
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_x_rl(t_flags *l_flags, char hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	nb_print += print_width_s(width, hexa, ' ');
	return (nb_print);
}

ssize_t	print_p_zero(t_flags *l_flags, char hexa)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	nb_print += print_width_s(width, hexa, '0');
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_p_point_star(t_flags *l_flags, char hexa)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;
	ssize_t	i;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	i = 0;
	while (hexa[i] != '\0')
		i++;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_strlen(hexa), 0),
				nb_print, ' ');

	nb_print += print_w_spec(w_spec, ft_strlen(hexa), '0');
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_p_minus_point_star(t_flags *l_flags, char hexa)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	nb_print += print_w_spec(w_spec - ft_strlen(hexa), 0, '0');
	ft_putstr_limit_fd(hexa, 0, &nb_print, 1);
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}