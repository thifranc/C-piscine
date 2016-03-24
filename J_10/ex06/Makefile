# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 16:14:16 by thifranc          #+#    #+#              #
#*   Updated: 2015/11/27 20:52:33 by thifranc         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_lib.c ft_op.c do_op.c

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	@/bin/rm -f $(NAME)
re : clean all
