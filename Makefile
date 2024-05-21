# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 14:08:19 by gecarval          #+#    #+#              #
#    Updated: 2024/05/21 19:11:43 by gecarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
OUT = printf
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBGCH = ./includes/ft_printf.h.gch
LIB = ./includes/ft_printf.h
CFILES = ./srcs/ft_printf_deps.c ./srcs/ft_printf_display.c ./srcs/ft_printf.c 
OFILES = ft_printf_deps.o ft_printf_display.o ft_printf.o
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(LIB) $(CFILES) -I./includes/
	ar rc $(NAME) $(LIBGCH) $(OFILES)

clean:
	$(RM) $(OFILES) $(LIBGCH)

fclean: clean
	$(RM) $(NAME) $(OUT)

re: fclean all
