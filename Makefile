# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fantone <fantone@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/27 02:42:41 by lmartin           #+#    #+#              #
#    Updated: 2021/04/21 18:15:31 by fantone          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =			gcc

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf

LIBFT	=		libft.a

DIR_HEADERS	=	./includes/

INCLUDES =  	-I $(DIR_HEADERS) -I $(LIBFT)

SRC =			parser.c \
				v3.c \
				v3_2.c \
				color.c \
				color2.c 


COMPIL =		$(FLAGS) $(SAVE)

OBJS =			$(SRC:.c=.o)

NAME =			miniRT

all:			$(NAME)

$(NAME) :		$(OBJS)
				make -C ./libft
				cp ./libft/libft.a .
				$(CC) $(COMPIL) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
				@gcc $(FLAGS) $(INCLUDES) -c $< -o $@
				@echo "Compiled "$<" successfully!"


clean:
				$(RM) $(OBJS)
				make clean -C ./libft

fclean:			clean

				$(RM) $(NAME)

re:				fclean all

.PHONY:			all, clean, fclean, re, bonus
