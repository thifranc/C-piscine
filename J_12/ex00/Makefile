# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 19:24:34 by thifranc          #+#    #+#              #
#    Updated: 2016/02/11 09:17:42 by thifranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_display_file.c

NAME = ft_display_file

TEMP = ft_display_file.o

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
