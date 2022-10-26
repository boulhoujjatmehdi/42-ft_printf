NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

OBJ = ft_printf.o ft_functions.o ft_functions2.o

%.o:%.c
	$(CC) $(FLAGS) -c $< 

all: $(NAME)

$(NAME):$(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:fclean all
