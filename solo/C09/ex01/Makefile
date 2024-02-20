# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 11:12:30 by mpitot            #+#    #+#              #
#    Updated: 2023/10/05 14:46:22 by mpitot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ${SRC:.c=.o}

INCLUDES = includes

NAME = libft.a

FLAGS =  -Wall -Wextra -Werror

.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}: ${OBJ}
	ar -rc ${NAME} ${OBJ}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
