# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarin-h <jmarin-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/19 04:48:18 by jmarin-h          #+#    #+#              #
#    Updated: 2016/11/24 13:39:59 by glouyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fillit
SRC			=	srcs/check_size.c			\
				srcs/check_place_letter.c	\
				srcs/set_up_left.c			\
				srcs/main.c					\
				srcs/coordonee.c			\
				srcs/init_out.c				\
				srcs/solver.c
FLAGS		= -Wall -Werror -Wextra
DIRLIB		= ./libft/
LIBFT		= $(addprefix $(DIRLIB),libft.a)

all: $(NAME)

$(NAME): libft
	@gcc $(FLAGS) -I ./ -I ./libft/ $(SRC) $(LIBFT) -o $(NAME)
	@echo "Compilation: \033[1;32mDONE!\033[m"

libft:
	@make -C $(DIRLIB)

clean:
	@make clean -C $(DIRLIB)
	@rm -rf $(OBJ)

fclean: clean
	@make fclean -C $(DIRLIB)
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, libft
