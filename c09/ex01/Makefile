SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror -I includes/
AR = ar
ARFLAGS = rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
        $(AR) $(ARFLAGS) $(NAME) $(OBJ)


srcs/t_putchar.o: srcs/t_putchar.c
        $(CC) $(FLAGS) -c srcs/t_putchar.c -o srcs/t_putchar.o

srcs/ft_swap.o: srcs/ft_swap.c
        $(CC) $(FLAGS) -c srcs/ft_swap.c -o srcs/ft_swap.o

srcs/ft_putstr.o: srcs/ft_putstr.c
        $(CC) $(FLAGS) -c srcs/ft_putstr.c -o srcs/ft_putstr.o

srcs/ft_strlen.o: srcs/ft_strlen.c
        $(CC) $(FLAGS) -c srcs/ft_strlen.c -o srcs/ft_strlen.o

srcs/ft_strcmp.o: srcs/ft_strcmp.c
        $(CC) $(FLAGS) -c srcs/ft_strcmp.c -o srcs/ft_strcmp.o


clean:
	$(RM) $(OBJ)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
