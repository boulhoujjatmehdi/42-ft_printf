NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

OBJ = ft_printf.o ft_functions.o

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME) $(LIB_FT)

$(NAME):$(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:fclean all
