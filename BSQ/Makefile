# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atsuchiy <atsuchiy@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 16:41:37 by tsomeya           #+#    #+#              #
#    Updated: 2021/02/03 18:14:21 by atsuchiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUFFIX  = .c
SRCDIR  = ./srcs
SRCS	= $(wildcard $(SRCDIR)/*$(SUFFIX))
INCLUDE	= -I./includes
OBJS	= ${SRCS:%.c=%.o}
NAME	= bsq
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror ${INCLUDE}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean flcean re
