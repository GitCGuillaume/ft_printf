#include "../ft_printf.h"

size_t		check_flags_spec_s(t_flags *l_flags, va_list ap)
{
	size_t	nb_print;
	char	*s;

	nb_print = 0;
	s = NULL;
	if (l_flags->point == 1)
	{
		if (l_flags->asterisk == 0)
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				s = ft_strdup("(null)");
			spec_pnt_no_ast_s(l_flags, &nb_print, s);
			if (ft_strnstr(s, "(null)", 6))
				free(s);
			return (nb_print);
		}
		else
			spec_pnt_ast_s(l_flags, ap, &nb_print);
	}
	return (nb_print);
}

size_t		check_flags_one_s(va_list ap, t_flags *l_flags)
{
	va_list	ap2;
	ssize_t	width;
	size_t	nb_print;
	char	*s;

	va_copy(ap2, ap);
	width = ft_atoi(l_flags->width);
	nb_print = 0;
	s = va_arg(ap, char *);
	if (check_min_max_value_s(l_flags) == -1)
		return (-1);
	if (l_flags->zero == 0 && l_flags->minus == 0
			&& l_flags->point == 0 && l_flags->asterisk == 0)
	{
		nb_print += print_basic_value_s(&width, s, ' ');
		va_end(ap2);
		return (nb_print);
	}
	else if (l_flags->minus == 1)
	{
		if (l_flags->asterisk == 0)
			spec_minus_no_ast_s(l_flags, &nb_print, s);
		else
			spec_minus_ast_s(ap2, l_flags, &nb_print);
	}
	va_end(ap2);
	return (nb_print);
}

size_t		check_flags_two_s(t_flags *l_flags, va_list ap)
{
	va_list	ap2;
	size_t	nb_print;

	va_copy(ap2, ap);
	nb_print = 0;
	if (check_min_max_value_s(l_flags) == -1)
		return (-1);
	if (l_flags->asterisk == 1 && l_flags->point == 0)
	{
		nb_print += astrsk_s(ap2);
		va_end(ap2);
		return (nb_print);
	}
	else if (l_flags->minus == 0 && l_flags->point == 1)
	{
		nb_print += check_flags_spec_s(l_flags, ap2);
		va_end(ap2);
		return (nb_print);
	}
	va_end(ap2);
	return (nb_print);
}

size_t		check_flags_three_s(t_flags *l_flags, va_list ap)
{
	size_t	nb_print;
	ssize_t	width;
	char	*s;

	s = va_arg(ap, char *);
	nb_print = 0;
	width = ft_atoi(l_flags->width);
	if (check_min_max_value_s(l_flags) == -1)
		return (-1);
	if (l_flags->zero == 1 && l_flags->point == 0 && l_flags->asterisk == 0)
	{
		nb_print += print_basic_value_s(&width, s, '0');
		return (nb_print);
	}
	return (nb_print);
}

size_t		print_s(t_flags *l_flags, va_list ap)
{
	va_list	ap2;
	va_list	ap3;
	size_t	result;

	result = 0;
	va_copy(ap2, ap);
	va_copy(ap3, ap);
	if (l_flags->percentage == 0)
	{
		if ((result = check_flags_one_s(ap, l_flags)) == 0)
		{
			if ((result = check_flags_two_s(l_flags, ap2)) == 0)
			{
				result = check_flags_three_s(l_flags, ap3);
			}
		}
	}
	del(l_flags->width);
	del(l_flags->width_specification);
	va_end(ap2);
	va_end(ap3);
	return (result);
}
