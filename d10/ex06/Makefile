# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcapling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 13:15:08 by jcapling          #+#    #+#              #
#    Updated: 2016/07/26 13:15:10 by jcapling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FLAGS = -Werror -Wall -Wextra

all:
		gcc $(FLAGS) -o $(NAME) srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/add.c \
	srcs/mod.c srcs/div.c srcs/mult.c srcs/minus.c srcs/do_op.c

clean:
		rm -f $(NAME)

fclean : clean

re: fclean all