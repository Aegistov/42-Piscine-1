# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcapling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 18:14:57 by jcapling          #+#    #+#              #
#    Updated: 2016/07/28 18:14:58 by jcapling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = main.c ft_putchar.c ft_putstr.c ft_tail.c ft_atoi.c ft_size.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) main.o ft_putchar.o ft_putstr.o ft_tail.o ft_size.o ft_atoi.o

clean:
		/bin/rm -f main.o ft_putchar.o ft_putstr.o ft_tail.o ft_atoi.o ft_size.o

fclean:
		/bin/rm -f $(NAME)

re: fclean all