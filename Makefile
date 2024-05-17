# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 18:09:17 by gecarval          #+#    #+#              #
#    Updated: 2024/05/15 15:24:09 by gecarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
LIBGCH = libft.h.gch
LIB = libft.h
CFILES = ft_*.c
OFILES = ft_*.o
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(LIB) $(CFILES) -I./
	ar rc $(NAME) $(LIBGCH) $(OFILES)
	$(CC) ft_main.c -L. -lft

clean:
	$(RM) $(OFILES) $(LIBGCH)

fclean: clean
	$(RM) $(NAME) a.out

re: fclean all
