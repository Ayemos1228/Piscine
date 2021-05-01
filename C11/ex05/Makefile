# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 16:41:37 by tsomeya           #+#    #+#              #
#    Updated: 2021/01/30 00:38:01 by tsomeya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./*.c
OBJS	= ${SRCS:%.c=%.o}
CC := gcc
NAME	= do-op
CFLAGS := -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I./ -c $< -o $@

all:
		${CC} ${CFLAGS} -c ${SRCS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean flcean
