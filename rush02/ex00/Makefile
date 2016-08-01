# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huspinat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 15:51:44 by huspinat          #+#    #+#              #
#    Updated: 2016/07/31 20:59:33 by huspinat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

FLAG = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putstr.c main.c rush01.c rush04.c\
		ft_putnbr.c ft_strcmp.c rush00.c rush02.c rush03.c

OFILE =  ft_putchar.o ft_putstr.o main.o rush01.o rush04.o\
		ft_putnbr.o ft_strcmp.o rush00.o rush02.o rush03.o

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAG) $(SRC)

clean:
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

re: fclean all
