# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maginist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/13 09:46:56 by maginist          #+#    #+#              #
#    Updated: 2019/01/15 17:28:26 by floblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OBJ_PATH = ./obj
SRC_PATH = ./src
FILES = add_pre_flgs.c\
	  analyse.c\
	  fillbegin.c\
	  ft_printf.c\
	  gest_allnum.c\
	  gest_b.c\
	  gest_majx.c\
	  gest_o.c\
	  gest_u.c\
	  gest_x.c\
	  gest_c.c\
	  gest_di.c\
	  gest_p.c\
	  gest_s.c\
	  gest_f.c\
	  gest_pc.c\
	  gest_r.c\
	  init_struct.c\
	  newstart_cleanbegin.c\
	  printdc.c\
	  redirection.c\
	  stock_digit.c\
	  stock_flgs.c\
	  bulltoa.c\
	  bultoa.c\
	  bustoa.c\
	  butoa.c\
	  buctoa.c\
	  lltoa.c\
	  ltoa.c\
	  stoa.c\
	  ctoa.c\
	  uctoa.c\
	  ulltoa.c\
	  ultoa.c\
	  ustoa.c\
	  utoa.c\
	  ftoa.c\
	  fltoa.c\
	  putnbr_blong.c

OBJ_NAME = $(FILES:.c=.o)
LIB = libft/
CC = gcc
INC = -I./include
FLG = -Wall -Werror -Wextra
SRC = $(addprefix $(SRC_PATH)/,$(FILES))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
		make -C $(LIB)
		cp libft/libft.a ./$(NAME)
		ar rcs $(NAME) $(OBJ)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
		$(CC) $((FLG) -c $? $(INC) -o $@

clean:
		make -C $(LIB) clean
		rm -rf ./obj

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

fclean: clean
		make fclean -C $(LIB)
		rm -f $(NAME)

re: fclean all
