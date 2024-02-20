# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitot <mpitot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 09:43:39 by mpitot            #+#    #+#              #
#    Updated: 2023/10/04 15:29:29 by mpitot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsq

SRCS	=	srcs/main.c		\
		srcs/std_entry.c	\
		srcs/ft_error.c		\
		srcs/txt_to_map.c	\
		srcs/solve.c		\
		srcs/malloc_things.c	\
		ft/ft_putchar.c		\
		ft/ft_putstr.c		\
		ft/ft_split.c		\
		ft/ft_atoi.c		\
		ft/ft_strcmp.c		\
		ft/ft_strlen.c		\
		ft/ft_strdup.c		\
		ft/ft_contains.c

OBJS	=	$(SRCS:.c=.o)

CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror -g3
LIB	=	-I includes

RM	=	rm -f



all	:	$(NAME)

.c.o:
	$(CC) $(CFLAGS) $(LIB) -c $< -o $(<:.c=.o)

$(NAME)	:	$(OBJS)
	$(CC) $(CFLAGS) $(LIB) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all
