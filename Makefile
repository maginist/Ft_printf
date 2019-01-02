# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maginist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/13 09:46:56 by maginist          #+#    #+#              #
#    Updated: 2019/01/02 13:04:12 by maginist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = add_pre_flgs.c\
	  analyse.c\
	  dollar.c\
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
	  allputnbr/putnbr_bllong.c\
	  allputnbr/putnbr_blong.c\
	  allputnbr/putnbr_bshort.c\
	  allputnbr/putnbr_llong.c\
	  allputnbr/putnbr_long.c\
	  allputnbr/putnbr_short.c\

OBJS = $(SRC:.c=.o)

FLG = -Wall -Werror -Wextra

INC = ft_printf.h\
	  fct_tab.h

all : $(NAME)

$(NAME) : $(INC) $(OBJS) $(SRC)
		gcc $(FLG) -c $(SRC) -I $(INC)
		ar rcs $(NAME) $(OBJS)
clean :
		rm -f $(OBJS)
		

flcean : clean
		rm -f $(NAME)

re : fclean all
