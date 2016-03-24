# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/29 16:38:18 by thifranc          #+#    #+#              #
#*   Updated: 2015/12/01 00:33:14 by thifranc         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

FILESO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Wextra -Werror

HEADER = ./includes/ft.h

all: $(NAME)

$(NAME): $(FILESO)
	@ ar rc $(NAME) $(FILESO) $(HEADER)

$(FILESO):
	@ gcc -c $(FLAGS) $(SRC)

clean:
	@ /bin/rm -f $(FILESO)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
