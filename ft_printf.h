/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 18:48:06 by gchopin           #+#    #+#             */
/*   Updated: 2020/08/05 17:07:13 by gchopin          ###   ########.fr       */
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

int				ft_printf(const char *, ...);
void				init_list_flags(t_flags *lst_flags);
int				find_indicators(const char *fmt, size_t *i, size_t *nb_print, t_flags *l_flags);
int				is_indicator(char const *fmt, size_t *i, size_t *nb_print, t_flags *l_flags);
int				find_convertor(char const *fmt, t_flags *l_flags, va_list ap, size_t *i);
int				is_convertor(char c);
int				is_digit(t_flags *l_flags, size_t *i, char const *fmt);
int				is_specification(t_flags *l_flags, va_list ap, char const *fmt, size_t *i);
size_t				print_d(t_flags *l_flags, va_list ap);
int				check_min_max_value(t_flags *l_flags, int d);
size_t				browse_two_stars_d(va_list ap, t_flags *l_flags, int d);
size_t				print_d_stars_minus(ssize_t width, ssize_t w_spec, int value);
size_t				print_d_stars(ssize_t width, ssize_t w_spec, int value);
size_t				check_flags_spec_d(t_flags *l_flags, va_list ap, int d);
int				print_width_d(ssize_t width, int d, char c);
ssize_t				calc(ssize_t width, ssize_t width_specification, ssize_t lensize, int d);
void				negative_d(size_t *nb_print, int *d);
size_t				print_basic_value_d(ssize_t *width, int d, char c);
int				print_w_spec(ssize_t width, ssize_t sum, char c);
void				spec_minus_d(t_flags *l_flags, va_list ap,size_t *nb_print, int d);
size_t				astrsk_d_lr(va_list ap, t_flags *l_flags, int d, ssize_t *width);
size_t				astrsk_d_rl(va_list ap, t_flags *l_flags, int d, ssize_t *width);
void				spec_pnt_no_ast_d(t_flags *l_flags, size_t *nb_prt, int d);
void				spec_point_astrsk_d(t_flags *l_flags, va_list ap, size_t *nb_prt, int d);
size_t				print_s(t_flags *l_flags, va_list ap);
int	check_min_max_value_s(t_flags *l_flags);
char				*ft_strlimit(char *s, ssize_t width);
void				ft_putstr_limit_fd(char *s, size_t limit, size_t *nb_print, int fd);
size_t				print_basic_value_s(ssize_t *width, char *s, char c);
ssize_t				calc_s(ssize_t width, ssize_t width_specification, ssize_t lensize);
void				ft_putstr_limit_fd(char *s, size_t limit, size_t *nb_print, int fd);
int				print_width_s(ssize_t width, char *s, char c);
char				*ft_strlimit(char *s, ssize_t width);
void				spec_minus_no_ast_s(t_flags *l_flags, size_t *nb_print, char *s);
void				spec_minus_ast_s(va_list ap, t_flags *l_flags, size_t *nb_print);
size_t				astrsk_s(va_list ap);
void				spec_pnt_no_ast_s(t_flags *l_flags, size_t *nb_prt, char *s);
void				spec_pnt_ast_s(t_flags *l_flags, va_list ap, size_t *nb_prt);
size_t	print_p(t_flags *l_flags, va_list ap);
int	get_one_star(t_flags *l_flags, va_list ap);
int	get_two_stars(t_flags *l_flags, va_list ap);
int	check_min_max_value_all(t_flags *l_flags);
int				print_zero_p(size_t atoi, char *p);
char				*ft_putnbr_base(void *nbr, char *base);
ssize_t				ft_lensize(ssize_t n);
char				*width_string(char const *fmt, size_t *i);
void				ft_putnbr_precision_fd(int n, int fd, int max);
void			del(void *lst);


#endif
