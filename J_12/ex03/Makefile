# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 19:24:34 by thifranc          #+#    #+#              #
#    Updated: 2016/02/09 16:01:30 by thifranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_hexdump.c ft_display.c lib.c ft_hex_opt.c

TEMP = ft_hexdump.o ft_display.o lib.o ft_hex_opt.o

INC = ft_all.h

NAME = ft_hexdump

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) $(INC)
	@gcc $(TEMP) -o $(NAME)

clean :
	@/bin/rm -f $(TEMP)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
