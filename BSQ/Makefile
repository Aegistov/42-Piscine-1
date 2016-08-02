NAME = bsq

SRCS = create_bsq.c main.c bsq.c functions.c ft_other_functions.c ft_error.c /
ft_atoi.c get_size.c

OBJ = create_bsq.o main.o bsq.o functions.o ft_other_functions.o ft_error.o /
ft_atoi.o get_size.o

LIB = ft_header.h

all : $(NAME)

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(LIB)
	gcc -o $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
