# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 16:41:37 by tsomeya           #+#    #+#              #
#    Updated: 2021/02/03 21:51:34 by tsomeya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUFFIX  = .c
SRCS	= $(wildcard ./*$(SUFFIX))
OBJS	= ${SRCS:%.c=%.o}
CC 		= gcc
CFLAGS  = -Wall -Wextra -Werror
NAME 	= ft_tail

${NAME} : ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:		fclean all

.PHONY:		all clean flcean re
