# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 19:24:34 by thifranc          #+#    #+#              #
#    Updated: 2016/02/11 09:16:13 by thifranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_cat.c 

NAME = ft_cat

TEMP = ft_cat.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) 
	@gcc $(TEMP) -o $(NAME)

clean :
	@/bin/rm -f $(TEMP)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
