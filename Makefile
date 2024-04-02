# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcano-mu <mcano-mu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 14:32:57 by mcano-mu          #+#    #+#              #
#    Updated: 2024/03/28 14:43:54 by mcano-mu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
CC=gcc
CFLAGS=-Wall -Werror -Wextra
INCLUDE=-I minitalk.h
RM=rm -fr

FILES=main.c utils.c functions/*.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(INCLUDE) $(FILES) -o $(NAME)

clean:
	$(RM) $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re
