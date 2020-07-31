#include "../ft_printf.h"

char	*ft_strlimit(char *s, ssize_t width)
{
	ssize_t	i;
	char	*ptr;

	i = 0;
	if (s != NULL && width != 0)
	{
		if (!(ptr = malloc(width + 1)))
			return (NULL);
		while (s[i] != '\0' && width > i)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	else
		ptr = NULL;
	return (ptr);
}

size_t	print_basic_value_s(ssize_t *width, char *s, char c)
{
	size_t	nb_print;

	nb_print = 0;
	if (s == NULL)
		s = ft_strdup("(null)");
	nb_print += print_width_s(*width, s, c);
	ft_putstr_pr_fd(s, &nb_print, 1);
	if (ft_strnstr(s, "(null)", 6))
		free(s);
	return (nb_print);
}

size_t	astrsk_s_rl(int d, char *s)
{
	size_t	nb_print;

	nb_print = 0;
	d = -d;
	ft_putstr_limit_fd(s, 0, &nb_print, 1);
	nb_print += print_width_s(d, s, ' ');
	return (nb_print);
}

size_t	astrsk_s_lr(int d, char *s)
{
	size_t	nb_print;

	nb_print = 0;
	nb_print += print_width_s(d, s, ' ');
	ft_putstr_limit_fd(s, 0, &nb_print, 1);
	return (nb_print);
}

size_t	astrsk_s(va_list ap)
{
	size_t	nb_print;
	int		d;
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
