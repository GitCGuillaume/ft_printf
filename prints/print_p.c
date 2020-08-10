#include "../ft_printf.h"
#include <stdio.h>

size_t	print_p_lr(t_flags *l_flags, char *addr)
{
	size_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (width > 2)
		width = width - 2;
	nb_print += print_width_s(width, addr, ' ');
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	return (nb_print);
}

size_t	print_p_rl(t_flags *l_flags, char *addr)
{
	size_t	nb_print;
	ssize_t	width;

	width = ft_atoi(l_flags->width);
	nb_print = 0;
	if (width > 2)
		width = width - 2;
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	nb_print += print_width_s(width, addr, ' ');
	return (nb_print);
}

size_t	print_p_zero(t_flags *l_flags, char *addr)
{
	size_t	nb_print;
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
	return (nb_print);
}

size_t	print_p_point_star(t_flags *l_flags, char *addr)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;
	ssize_t	i;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	i = 0;
	while (addr[i] != '\0')
		i++;
	if (width > w_spec)
		nb_print += print_w_spec(calc(width, w_spec, ft_strlen(addr), 0),
				nb_print + 2, ' ');
	ft_putstr_fd("0x", 1);
	if (addr != NULL)
		nb_print += 2;
	if (nb_print != 2)
	{
		nb_print += print_w_spec(w_spec, ft_strlen(addr), '0');
	}
	else if (nb_print == 2)
		nb_print += print_w_spec(w_spec, ft_strlen(addr), '0');
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	return (nb_print);
}

size_t	print_p_minus_point_star(t_flags *l_flags, char *addr)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (addr != NULL)
		nb_print += 2;
	ft_putstr_fd("0x", 1);
	nb_print += print_w_spec(w_spec - ft_strlen(addr), 0, '0');
	ft_putstr_limit_fd(addr, 0, &nb_print, 1);
	nb_print += print_w_spec(width, nb_print, ' ');
	return (nb_print);
}

size_t	check_flags_one_p(t_flags *l_flags, char *addr)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->zero == 1 && l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_p_zero(l_flags, addr));
	if (l_flags->minus == 1 && l_flags->point == 0)
		return (nb_print += print_p_rl(l_flags, addr));
	if (l_flags->minus == 0 && l_flags->point == 0)
		return (nb_print += print_p_lr(l_flags, addr));
	if (l_flags->point == 1 && l_flags->minus == 0)
		return (print_p_point_star(l_flags, addr));
	if (l_flags->point == 1 && l_flags->minus == 1)
		return (print_p_minus_point_star(l_flags, addr));
	return (nb_print);
}

size_t	print_empty_part_one(t_flags *l_flags, ssize_t *width, ssize_t *w_spec)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->minus == 0 && l_flags->point == 1)
	{
		nb_print += print_w_spec(*width, *w_spec + 2, ' ');
		if (*w_spec >= 0)
		{
			ft_putstr_fd("0x", 1);
			nb_print += 2;
		}
		else
		{
			ft_putstr_fd("0x0", 1);
			nb_print += 3;
		}
		nb_print += print_w_spec(*w_spec, 0, '0');
	}
	return (nb_print);
}

size_t	print_empty_part_two(t_flags *l_flags, ssize_t *width, ssize_t *w_spec)
{
	size_t	nb_print;

	nb_print = 0;
	if (l_flags->minus == 1 && l_flags->point == 1)
	{
		if (*w_spec >= 0)
		{
			ft_putstr_fd("0x", 1);
			nb_print += 2;
		}
		else
		{
			ft_putstr_fd("0x0", 1);
			nb_print += 3;
		}
		nb_print += print_w_spec(*w_spec, 0, '0');
		nb_print += print_w_spec(*width, *w_spec + 2, ' ');
	}
	return (nb_print);
}
size_t	print_empty(t_flags *l_flags)
{
	size_t	nb_print;
	ssize_t	width;
	ssize_t	w_spec;

	nb_print = 0;
	width = ft_atoi(l_flags->width);
	w_spec = ft_atoi(l_flags->width_specification);
	if (l_flags->minus == 0 && l_flags->point == 0)
	{
		nb_print += print_width_s(width, "0x0", ' ');
		ft_putstr_fd("0x0", 1);
		nb_print += 3;
	}
	if (l_flags->minus == 1 && l_flags->point == 0)
	{
		ft_putstr_fd("0x0", 1);
		nb_print += 3;
		nb_print += print_width_s(width, "0x0", ' ');
	}
	nb_print += print_empty_part_one(l_flags, &width, &w_spec);
	nb_print += print_empty_part_two(l_flags, &width, &w_spec);
	return (nb_print);
}

size_t	print_hexa(va_list ap, t_flags *l_flags)
{
	size_t	nb_print;
	char	*addr;
	char	*hexa;
	
	hexa = 0;
	addr = va_arg(ap, void *);
	nb_print = 0;
	if (addr == NULL)
		print_empty(l_flags);
	else if (!(hexa = ft_putnbr_base(addr, "0123456789abcdef")))
	{
		del(l_flags->width);
		del(l_flags->width_specification);
		return (-1);
	}
	if (addr != NULL)
		nb_print += check_flags_one_p(l_flags, hexa);
	free(hexa);
	return (nb_print);
}

#include <stdio.h>
size_t	print_p(t_flags *l_flags, va_list ap)
{
	size_t	result;
	//void	*addr;
	//char	*hexa;
	size_t	minus;

	result = 0;
	//addr = 0;
	//hexa = 0;
	minus = -1;
	if (l_flags->percentage == 0)
	{
		if (l_flags->asterisk == 1)
			get_one_star(l_flags, ap);
		else if (l_flags->asterisk == 2)
			get_two_stars(l_flags, ap);
		if ((result = check_min_max_value_all(l_flags)) != minus)
		{
			result = print_hexa(ap, l_flags);
			/*addr = va_arg(ap, void *);
			if (addr == NULL)
				print_empty(l_flags);
			else if (!(hexa = ft_putnbr_base(addr, "0123456789abcdef")))
			{
				del(l_flags->width);
				del(l_flags->width_specification);
				return (-1);
			}
			if (addr != NULL)
				result = check_flags_one_p(l_flags, hexa);
			*/
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	return (result);
}
