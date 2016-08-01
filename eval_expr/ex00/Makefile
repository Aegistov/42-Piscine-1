# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcapling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 03:11:22 by jcapling          #+#    #+#              #
#    Updated: 2016/07/31 03:11:24 by jcapling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = main.c eval_expr.c functions.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) main.o eval_expr.o functions.o

clean:
		/bin/rm -f main.o eval_expr.o functions.o

fclean:	clean
		/bin/rm -f $(NAME)

re: fclean all
