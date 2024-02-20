# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 13:14:55 by mpitot            #+#    #+#              #
#    Updated: 2023/10/01 21:44:16 by mpitot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -I includes

NAME = rush-02

SRC	=	srcs/main.c			\
		srcs/check_dict.c		\
		srcs/concat_everything.c	\
		srcs/dict.c			\
		srcs/ft_atoi.c			\
		srcs/ft_cointains.c		\
		srcs/ft_putchar.c		\
		srcs/ft_putstr.c		\
		srcs/ft_split.c			\
		srcs/ft_strcat.c		\
		srcs/ft_strcmp.c		\
		srcs/ft_strjoin.c		\
		srcs/ft_strlen.c		\
		srcs/ft_strndup.c		\
		srcs/ft_strslen.c		\
		srcs/ft_wordlen.c		\
		srcs/ft_words_amount.c		\
		srcs/main_algorithm.c		\
		srcs/tab_init.c	

OBJ = ${SRC:.c=.o}

all: ${NAME}

.c.o:
	cc ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	cc ${FLAGS} ${OBJ} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
