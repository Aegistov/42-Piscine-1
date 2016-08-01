# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcapling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 12:40:17 by jcapling          #+#    #+#              #
#    Updated: 2016/07/25 12:40:19 by jcapling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
srcs/ft_swap.c

HEADER_DIR = includes

CFLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I$(HEADER_DIR)
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_strlen.o ft_putstr.o ft_strcmp.o
	ranlib $(NAME)

clean: 
		/bin/rm ft_strcmp.o ft_putstr.o ft_strlen.o ft_swap.o ft_putchar.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
