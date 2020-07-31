#include "../ft_printf.h"

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

ssize_t	calc_s(ssize_t width, ssize_t width_specification, ssize_t lensize)
{
	ssize_t size;

	size = width - lensize;
	if (width > width_specification && 0 > size)
		size = -size;
	return (size);
}
