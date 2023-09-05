# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 11:38:58 by gchopin           #+#    #+#              #
#    Updated: 2021/04/12 16:06:16 by gchopin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_LIBFT	=	./libft/ft_memset.o ./libft/ft_bzero.o ./libft/ft_memcpy.o ./libft/ft_memccpy.o ./libft/ft_memmove.o ./libft/ft_memchr.o ./libft/ft_memcmp.o ./libft/ft_strlen.o ./libft/ft_isalpha.o ./libft/ft_isdigit.o ./libft/ft_isalnum.o ./libft/ft_isascii.o ./libft/ft_isprint.o ./libft/ft_toupper.o ./libft/ft_tolower.o ./libft/ft_strchr.o ./libft/ft_strrchr.o ./libft/ft_strncmp.o ./libft/ft_strlcpy.o ./libft/ft_strlcat.o ./libft/ft_strnstr.o ./libft/ft_atoi.o ./libft/ft_calloc.o ./libft/ft_strdup.o ./libft/ft_substr.o ./libft/ft_strjoin.o ./libft/ft_strtrim.o ./libft/ft_split.o ./libft/ft_itoa.o ./libft/ft_strmapi.o ./libft/ft_putchar_fd.o ./libft/ft_putstr_fd.o ./libft/ft_putendl_fd.o ./libft/ft_putnbr_fd.o ./libft/ft_lstnew.o ./libft/ft_lstadd_front.o ./libft/ft_lstsize.o ./libft/ft_lstlast.o ./libft/ft_lstadd_back.o ./libft/ft_lstdelone.o ./libft/ft_lstclear.o ./libft/ft_lstiter.o ./libft/ft_lstmap.o

SRCS	=	./ft_printf.c $(MANAGE)/ft_manage_convertor.c $(MANAGE)/ft_manage_specification.c $(MANAGE)/ft_manage_indicator.c $(MANAGE)/ft_manage_width.c $(PRINTS)/print_d.c $(PRINTS)/print_d_tools.c $(PRINTS)/print_d_special.c $(PRINTS)/print_s.c $(PRINTS)/print_s_specification.c $(PRINTS)/print_s_tools.c $(PRINTS)/print_s_tools_two.c $(PRINTS)/print_p.c $(PRINTS)/print_tool.c $(PRINTS)/print_p_tool.c $(PRINTS)/print.c  $(PRINTS)/ft_putnbr_base.c $(PRINTS)/print_c.c $(PRINTS)/print_c_tool.c $(PRINTS)/print_u.c $(PRINTS)/print_u_tool.c $(PRINTS)/print_x.c $(PRINTS)/print_x_tool.c $(PRINTS)/ft_putnbr_base_x.c $(PRINTS)/print_pct.c $(PRINTS)/print_pct_tool.c

OBJS	=	$(SRCS:.c=.o)

LIBFT	=	./libft

PRINTS	=	./prints

MANAGE	=	./manage_formats

SPECIFICATION	=	./srcs/specification_precision

NAME	=	libftprintf.a

GCC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

$(NAME): $(OBJS)
		make -C libft/
		make bonus -C libft/
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
