SRCS_LIBFT	=	$(LIBFT)/ft_strdup.c $(LIBFT)/ft_putchar_fd.c $(LIBFT)/ft_putstr_fd.c $(LIBFT)/ft_putnbr_fd.c $(LIBFT)/ft_strlen.c $(LIBFT)/ft_atoi.c $(LIBFT)/ft_itoa.c $(LIBFT)/ft_substr.c

SRCS	=	./ft_printf.c $(MANAGE)/ft_manage_convertor.c $(MANAGE)/ft_manage_specification.c $(MANAGE)/ft_manage_indicator.c $(MANAGE)/ft_manage_width.c $(PRINTS)/print_d.c $(PRINTS)/print_d_specification.c $(PRINTS)/print_s.c $(PRINTS)/print_s_specification.c $(PRINTS)/print_p.c $(PRINTS)/print.c  $(PRINTS)/ft_putnbr_base.c

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
