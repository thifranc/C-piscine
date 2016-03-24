# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 19:24:34 by thifranc          #+#    #+#              #
#    Updated: 2016/02/07 11:00:17 by thifranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_tail.c lib.c ft_amont.c ft_display.c 

TEMP = ft_tail.o lib.o ft_amont.o ft_display.o 

INC = ft_all.h

NAME = ft_tail

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) $(INCLUDE)
	@gcc $(TEMP) -o $(NAME)

clean :
	@/bin/rm -f $(TEMP)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
