SRCS_LIBFT	=	$(LIBFT)/ft_strdup.c $(LIBFT)/ft_putchar_fd.c $(LIBFT)/ft_putstr_fd.c $(LIBFT)/ft_putnbr_fd.c $(LIBFT)/ft_strlen.c $(LIBFT)/ft_atoi.c $(LIBFT)/ft_itoa.c $(LIBFT)/ft_substr.c $(LIBFT)/ft_strnstr.c

SRCS	=	./ft_printf.c $(MANAGE)/ft_manage_convertor.c $(MANAGE)/ft_manage_specification.c $(MANAGE)/ft_manage_indicator.c $(MANAGE)/ft_manage_width.c $(PRINTS)/print_d.c $(PRINTS)/print_d_tools.c $(PRINTS)/print_d_specification.c $(PRINTS)/print_d_special.c $(PRINTS)/print_s.c $(PRINTS)/print_s_specification.c $(PRINTS)/print_s_tools.c $(PRINTS)/print_s_tools_two.c $(PRINTS)/print_p.c $(PRINTS)/print_tool.c $(PRINTS)/print_p_tool.c $(PRINTS)/print.c  $(PRINTS)/ft_putnbr_base.c $(PRINTS)/print_c.c $(PRINTS)/print_c_tool.c $(PRINTS)/print_u.c $(PRINTS)/print_u_tool.c $(PRINTS)/print_x.c $(PRINTS)/print_x_tool.c $(PRINTS)/ft_putnbr_base_x.c $(PRINTS)/print_pct.c $(PRINTS)/print_pct_tool.c

OBJS	=	$(SRCS_LIBFT:.c=.o) $(SRCS:.c=.o)

LIBFT	=	./libft

PRINTS	=	./prints

MANAGE	=	./manage_formats

SPECIFICATION	=	./srcs/specification_precision

NAME	=	libftprintf.a

GCC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)
.c.o:
		$(GCC) $(CFLAGS) -Ilibft -c $< -o $(<:.c=.o)

all:		$(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
