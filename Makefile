# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maginist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/13 09:46:56 by maginist          #+#    #+#              #
#    Updated: 2019/01/03 15:22:16 by maginist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = add_pre_flgs.c\
	  analyse.c\
	  fillbegin.c\
	  ft_printf.c\
	  gest_allnum.c\
	  gest_c.c\
	  gest_di.c\
	  gest_p.c\
	  gest_s.c\
	  init_struct.c\
	  newstart_cleanbegin.c\
	  printdc.c\
	  redirection.c\
	  stock_digit.c\
	  stock_flgs.c\
	  test_the_true.c\
	  allitoa/lltoa.c\
	  allitoa/ltoa.c\
	  allitoa/stoa.c\
	  allitoa/ulltoa.c\
	  allitoa/ultoa.c\
	  allitoa/ustoa.c\
	  allitoa/utoa.c\
	  allputnbr/putnbr_blong.c\

OBJS = $(SRC:.c=.o)

LIB = libft/

CC = gcc

FLG = -Wall -Werror -Wextra

INC = ft_printf.h fct_tab.h

all: libs $(NAME)

libs:
		make -C $(LIB)

$(NAME): $(OBJS)
		$(CC) $(FLG) $(OBJS) -L $(LIB) -o $(SRC)

%.o: %.c $(INC)
	$(CC) $(FLG) -I. -o $@ -c $<

clean:
		rm -f $(OBJS)
		make -C $(LIB) fclean

fclean: clean
		rm -f $(NAME)

re: fclean all
