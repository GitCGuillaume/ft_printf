/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 18:48:06 by gchopin           #+#    #+#             */
/*   Updated: 2020/06/25 13:18:20 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct	s_flags
{
	int	minus;
	int	zero;
	int	point;
	int	asterisk;
	int	percentage;
	char	*width;
	char	*width_specification;
}				t_flags;

void				init_list_flags(t_flags *lst_flags);
int				find_indicators(const char *fmt, size_t *i, t_flags *l_flags);
int				is_indicator(char const *fmt, size_t *i,t_flags *l_flags);
int				find_convertor(char const *fmt, t_flags *l_flags, va_list ap, size_t *i);
int				is_convertor(char c);
int				is_digit(t_flags *l_flags, size_t *i, char const *fmt);
int				is_specification(t_flags *l_flags, va_list ap, char const *fmt, size_t *i);
int				print_d(t_flags *l_flags, va_list ap);
int				print_width_d(ssize_t width, int d, char c);
int				print_width_specification(ssize_t width, ssize_t sum, char c);
int				print_s(t_flags *l_flags, va_list ap);
int				print_s_zero(t_flags *l_flags, char *s, size_t atoi);
int				print_s_space(t_flags *l_flags, char *s, size_t atoi);
int				print_space_s(size_t atoi, char *s);
int				print_p(t_flags *l_flags, void *addr);
int				print_zero_p(size_t atoi, char *p);
char				*ft_putnbr_base(void *nbr, char *base);
int				ft_lensize(int n);
char				*width_string(char const *fmt, size_t *i);
void				ft_putnbr_precision_fd(int n, int fd, int max);

#endif
