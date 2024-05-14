NAME = libft.a

SRC = ft_*.c
OBJ = *.o

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I ./
	$(CC) $(CFLAGS) $(OBJ) -o app
	rm -f $(OBJ)
	clear

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f app

re: fclean all
