# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eblackbu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 12:32:34 by eblackbu          #+#    #+#              #
#    Updated: 2019/09/06 12:51:24 by eblackbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra *.c -I libft.h
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
