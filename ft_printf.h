/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 18:48:06 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/03 15:23:00 by gchopin          ###   ########.fr       */
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
	int		minus;
	int		zero;
	int		point;
	int		asterisk;
	char	*width;
	char	*width_specification;
	int		space;
}				t_flags;

void			init_list_flags(t_flags *lst_flags);
int				find_indicators(const char *fmt, size_t *i, t_flags *l_flags);
int				is_indicator(char const *fmt, size_t *i, t_flags *l_flags);
int				find_convertor(char const *fmt, t_flags *l_flags,
	va_list ap, size_t *i);
int				is_convertor(char c);
int				is_digit(t_flags *l_flags, size_t *i, char const *fmt);
int				is_specification(t_flags *l_flags,
	va_list ap, char const *fmt, size_t *i);
ssize_t			print_d(t_flags *l_flags, va_list ap);
int				check_min_max_value(t_flags *l_flags, int d);
ssize_t			browse_two_stars_d(va_list ap, t_flags *l_flags, int d);
ssize_t			print_d_stars_minus(ssize_t width, ssize_t w_spec, int value);
ssize_t			print_d_stars(t_flags *l_flags, ssize_t width, ssize_t w_spec, int value);
ssize_t			check_flags_spec_d(t_flags *l_flags, va_list ap, int d);
ssize_t			print_width_d(ssize_t width, int d, char c);
ssize_t			calc(ssize_t width, ssize_t width_specification,
	ssize_t lensize, int d);
void			negative_d(ssize_t *nb_print, int *d);
void			handle_sizes(ssize_t *width);
ssize_t			print_zero_d(ssize_t *width, int value);
ssize_t			print_basic_value_d(ssize_t *width, int d, char c);
ssize_t			print_w_spec(ssize_t width, ssize_t sum, char c);
void			spec_minus_d(t_flags *l_flags,
	va_list ap, ssize_t *nb_print, int d);
ssize_t			astrsk_d_lr(va_list ap, int d);
ssize_t			astrsk_d_rl(va_list ap, int d);
void			spec_pnt_no_ast_d(t_flags *l_flags, ssize_t *nb_prt, int d);
//void			spec_point_astrsk_d(va_list ap, t_flags *l_flags,
//	ssize_t *nb_prt, ssize_t w_spec);
ssize_t			print_s(t_flags *l_flags, va_list ap);
int				check_min_max_value_s(t_flags *l_flags);
ssize_t			print_s_zero(t_flags *l_flags, char *value);
char			*ft_strlimit(char *s, ssize_t width);
void			ft_putstr_limit_fd(char *s, size_t limit,
	ssize_t *nb_print, int fd);
ssize_t			astrsk_s_rl(int d, char *s, char padding);
ssize_t			astrsk_s_lr(int d, char *s, char padding);
ssize_t			print_basic_value_s(ssize_t *width, char *s, char c);
ssize_t			calc_s(ssize_t width,
	ssize_t width_specification, ssize_t lensize);
void			ft_putstr_limit_fd(char *s,
	size_t limit, ssize_t *nb_print, int fd);
ssize_t			print_width_s(ssize_t width, char *s, char c);
char			*ft_strlimit(char *s, ssize_t width);
ssize_t			spec_minus_no_ast_s(t_flags *l_flags, char *s);
ssize_t			spec_minus_ast_s(t_flags *l_flags, char *value);
ssize_t			astrsk_s(t_flags *l_flags, char *value);
void			spec_pnt_no_ast_s(t_flags *l_flags, ssize_t *nb_prt, char *s);
ssize_t			spec_pnt_ast_s(t_flags *l_flags, ssize_t *nb_prt, char *value);
ssize_t			print_p(t_flags *l_flags, va_list ap);
int				get_one_star(t_flags *l_flags, va_list ap);
int				get_two_stars(t_flags *l_flags, va_list ap);
int				check_min_max_value_all(t_flags *l_flags);
ssize_t			print_zero_p(size_t atoi, char *p);
char			*ft_putnbr_base(void *nbr, char *base);
ssize_t			ft_lensize(ssize_t n);
char			*width_string(char const *fmt, size_t *i);
void			swap(char *a, char *b);
void			ft_rev_char_tab(char *tab, int size);
ssize_t			print_p_lr(t_flags *l_flags, char *addr);
ssize_t			print_p_rl(t_flags *l_flags, char *addr);
ssize_t			print_p_zero(t_flags *l_flags, char *addr);
ssize_t			print_p_point_star(t_flags *l_flags, char *addr);
ssize_t			print_p_minus_point_star(t_flags *l_flags, char *addr);
ssize_t			print_c(t_flags *l_flags, va_list ap);
ssize_t			print_c_lr(t_flags *l_flags, unsigned char c);
ssize_t			print_c_rl(t_flags *l_flags, unsigned char c);
ssize_t			print_width_c(ssize_t width, unsigned char c);
int				check_min_max_value_c(t_flags *l_flags);
ssize_t			print_u(t_flags *l_flags, va_list ap);
ssize_t			print_width_u(ssize_t width, unsigned int d, char c);
ssize_t			calc_u(ssize_t width, ssize_t w_spec,
	ssize_t lensize, unsigned int u);
ssize_t			print_u_zero(t_flags *l_flags, unsigned int value);
ssize_t			print_u_rl(t_flags *l_flags, unsigned int value);
ssize_t			print_u_lr(t_flags *l_flags, unsigned int value);
ssize_t			print_u_stars(t_flags *l_flags, unsigned int value);
ssize_t			print_u_stars_minus(t_flags *l_flags, unsigned int value);
char			*ft_putnbr_base_x(unsigned int nbr, char *base);
ssize_t			print_x(t_flags *l_flags, va_list ap, char *base);
ssize_t			print_x_lr(t_flags *l_flags, char *hexa);
ssize_t			print_x_rl(t_flags *l_flags, char *hexa);
ssize_t			print_x_zero(t_flags *l_flags, char *hexa);
ssize_t			print_x_point_star(t_flags *l_flags, char *hexa);
ssize_t			print_x_minus_point_star(t_flags *l_flags, char *hexa);
ssize_t			print_pct(t_flags *l_flags, va_list ap);
ssize_t			print_pct_lr(t_flags *l_flags, unsigned char c);
ssize_t			print_pct_rl(t_flags *l_flags, unsigned char c);
void			del(void *lst);

#endif
