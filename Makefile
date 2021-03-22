# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 11:38:58 by gchopin           #+#    #+#              #
#    Updated: 2021/03/22 11:19:41 by gchopin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_LIBFT	=	$(LIBFT)/ft_strdup.o $(LIBFT)/ft_putchar_fd.o $(LIBFT)/ft_putstr_fd.o $(LIBFT)/ft_putnbr_fd.o $(LIBFT)/ft_strlen.o $(LIBFT)/ft_atoi.o $(LIBFT)/ft_itoa.o $(LIBFT)/ft_substr.o $(LIBFT)/ft_strnstr.o

SRCS	=	./ft_printf.c $(MANAGE)/ft_manage_convertor.c $(MANAGE)/ft_manage_specification.c $(MANAGE)/ft_manage_indicator.c $(MANAGE)/ft_manage_width.c $(PRINTS)/print_d.c $(PRINTS)/print_d_tools.c $(PRINTS)/print_d_specification.c $(PRINTS)/print_d_special.c $(PRINTS)/print_s.c $(PRINTS)/print_s_specification.c $(PRINTS)/print_s_tools.c $(PRINTS)/print_s_tools_two.c $(PRINTS)/print_p.c $(PRINTS)/print_tool.c $(PRINTS)/print_p_tool.c $(PRINTS)/print.c  $(PRINTS)/ft_putnbr_base.c $(PRINTS)/print_c.c $(PRINTS)/print_c_tool.c $(PRINTS)/print_u.c $(PRINTS)/print_u_tool.c $(PRINTS)/print_x.c $(PRINTS)/print_x_tool.c $(PRINTS)/ft_putnbr_base_x.c $(PRINTS)/print_pct.c $(PRINTS)/print_pct_tool.c

OBJS	=	$(SRCS:.c=.o)

LIBFT	=	./libft

PRINTS	=	./prints

MANAGE	=	./manage_formats

SPECIFICATION	=	./srcs/specification_precision

NAME	=	libftprintf.a

GCC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

$(NAME):	$(OBJS)
		make -C libft/
		ar rcs $(NAME) $(SRCS_LIBFT) $(OBJS)
.c.o:
		$(GCC) $(CFLAGS) -I. -c $< -o $(<:.c=.o)

all:		$(NAME)

clean:
		$(RM) $(OBJS)
		make clean -C libft/

fclean:		clean
		make fclean -C libft/
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
