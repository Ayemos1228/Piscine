# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 16:41:37 by tsomeya           #+#    #+#              #
#    Updated: 2021/01/29 22:00:08 by tsomeya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:%.c=%.o}
CC := gcc
CFLAGS := -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I./includes -c $< -o $@

all:	${OBJS}
		ar rc libft.a ${OBJS}

libft.a: all

clean:
		rm -f ${OBJS}

fclean:		clean
			rm -f libft.a

re:			fclean all

.PHONY:		all clean flcean re
