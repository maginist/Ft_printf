# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maginist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/13 09:46:56 by maginist          #+#    #+#              #
#    Updated: 2018/12/14 13:36:57 by maginist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = main.c\

OBJS = $(SRC:.c=.o)

FLG = -Wall -Werror -Wextra

INC = ft_printf.h

all : $(NAME)

$(NAME) : $(INC) $(INC) $(OBJS)

clean :
	rm -f $(OBJS)

flcean : clean
		rm -f $(NAME)

re : fclean all
