# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 11:37:19 by abourgeu          #+#    #+#              #
#    Updated: 2017/02/07 15:57:40 by abourgeu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC = 	srcs/ft_printf.c srcs/ft_parse_printf.c srcs/ft_resolve_str.c	\
		srcs/ft_resolve_dec.c srcs/ft_bzero.c srcs/ft_isdigit.c			\
		srcs/ft_itoa.c srcs/ft_memset.c srcs/ft_putchar.c				\
		srcs/ft_putstr.c srcs/ft_strchr.c srcs/ft_strjoin.c				\
		srcs/ft_strlen.c srcs/ft_strnew.c srcs/ft_strsub.c				\
		srcs/ft_memalloc.c srcs/ft_strdup.c srcs/ft_itoa_base.c			\
		srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_atoi.c				\
		srcs/ft_convert_long.c srcs/ft_ltoa_base.c srcs/ft_lltoa.c		\
		srcs/ft_ltoa.c srcs/ft_lltoa_base.c srcs/ft_imtoa_base.c		\
		srcs/ft_convert_args.c srcs/ft_resolve_width.c srcs/ft_putnbr.c	\
		srcs/ft_convert_x.c srcs/ft_strdel.c srcs/ft_strjoinfree.c		\
		srcs/ft_strcat.c srcs/ft_strcpy.c\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean re
