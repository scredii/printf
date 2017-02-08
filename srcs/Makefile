# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavagner <mavagner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 11:37:19 by mavagner          #+#    #+#              #
#    Updated: 2017/02/07 15:57:40 by abourgeu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC = 	srcs/ft_printf.c srcs/ft_parse_printf.c srcs/ft_resolve_str.c		\
		srcs/ft_resolve_dec.c libft/ft_bzero.c libft/ft_isdigit.c			\
		libft/ft_itoa.c libft/ft_memset.c libft/ft_putchar.c				\
		libft/ft_putstr.c libft/ft_strchr.c libft/ft_strjoin.c				\
		libft/ft_strlen.c libft/ft_strnew.c libft/ft_strsub.c				\
		libft/ft_memalloc.c libft/ft_strdup.c libft/ft_itoa_base.c			\
		libft/ft_tolower.c libft/ft_toupper.c libft/ft_atoi.c				\
		srcs/ft_convert_long.c libft/ft_ltoa_base.c libft/ft_lltoa.c		\
		libft/ft_ltoa.c libft/ft_lltoa_base.c libft/ft_imtoa_base.c			\
		srcs/ft_convert_args.c srcs/ft_resolve_width.c libft/ft_putnbr.c	\
		srcs/ft_convert_x.c libft/ft_strdel.c\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	make -C ./libft
	@ar rc $(NAME) $(OBJ)

	@echo "Libft compiled."

all: $(NAME)

clean:
	make -C ./libft clean
	rm -rf $(OBJ)

fclean : clean
	make -C ./libft fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean re
