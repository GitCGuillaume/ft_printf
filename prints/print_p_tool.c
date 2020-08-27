#include "../ft_printf.h"

ssize_t	print_p_rl(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		width = -width;
	if (width > 0)
		width = width - 2;
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	nb_print += print_width_s(width, addr, ' ');
	return (nb_print);
}

ssize_t	print_p_lr(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (0 > width)
		return (nb_print +=print_p_rl(l_flags, addr));
	if (width > 0)
		width = width - 2;
	if (addr != NULL)
		nb_print += 2;	
	nb_print += print_width_s(width, addr, ' ');
	ft_putstr_fd("0x", 1);
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	/*if (0 > width)
	{
		width = -width;
		nb_print += print_width_s(width - 2, addr, ' ');
	}*/
	return (nb_print);
}

ssize_t	print_p_zero(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (width > 2)
		width = width - 2;
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	nb_print += print_width_s(width, addr, '0');
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	if (0 > width)
	{
		width = -width;
		nb_print += print_width_s(width - 2, addr, ' ');
	}
	return (nb_print);
}
#include <stdio.h>
ssize_t	print_p_point_star(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (0 > width)
		return (nb_print += print_p_minus_point_star(l_flags, addr));
	if (addr != NULL)
		nb_print += 2;
	if (addr[0] == '0' && (w_spec == 0 || l_flags->width_specification == NULL)/*&& addr[1] == '\0'*/)
		width++;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_strlen(addr), 0),
				nb_print, ' ');
	ft_putstr_fd("0x", 1);
	nb_print += print_w_spec(w_spec, ft_strlen(addr), '0');
	if (addr[0] != '0' || (w_spec <= -1 || w_spec >= 1)/*&& addr[1] != '\0'*/)
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	return (nb_print);
}

ssize_t	print_p_minus_point_star(t_flags *l_flags, char *addr)
{
	ssize_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (addr != NULL)
		nb_print += 2;
	ft_putstr_fd("0x", 1);
	nb_print += print_w_spec(w_spec - ft_strlen(addr), 0, '0');
	//if (w_spec > 0 || (l_flags->width_specification != NULL && w_spec != 0))
	//	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	if (addr[0] != '0' || (w_spec <= -1 || w_spec >= 1)/*&& addr[1] != '\0'*/)
		ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	if (0 > width)
		width = -width;
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}
