#include "../ft_printf.h"
#include <stdio.h>
size_t	astrsk_s_rl(int d, char *s/*, char *width_to_str*/)
{
	size_t	nb_print;

	nb_print = 0;
	d = -d;
	ft_putstr_limit_fd(s, 0, &nb_print, 1);
	//nb_print += print_w_spec(calc_s(d, 0, nb_print), ft_atoi(s), ' ');
	nb_print += print_width_s(d, s, ' ');
	return (nb_print);
}

size_t	astrsk_s_lr(int d, char *s/*, char *width_to_str*/)
{
	size_t	nb_print;

	nb_print = 0;
	//nb_print += print_w_spec(calc_s(d, 0, ft_strlen(width_to_str) + nb_print), ft_atoi(width_to_str), ' ');
	nb_print += print_width_s(d, s, ' ');
	ft_putstr_limit_fd(s, 0, &nb_print, 1);
	return (nb_print);
}

size_t	astrsk_s(va_list ap)
{
	size_t	nb_print;
	int	d;
	char	*s;

	nb_print = 0;
	d = va_arg(ap, int);
	s = va_arg(ap, char *);
	if (s == NULL)
		s = ft_strdup("(null)");
	if (d >= 0)
		nb_print += astrsk_s_lr(d, s);
	else
		nb_print += astrsk_s_rl(d, s);
	return (nb_print);
}
