# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 16:41:37 by tsomeya           #+#    #+#              #
#    Updated: 2021/01/31 14:13:01 by tsomeya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= atoi.c ft_convert_num.c ft_convert_num_helper.c ft_rush02.c ft_split.c ft_strjoin.c ft_tool2.c ft_tool_str.c main.c putstr_in_order.c
OBJS	= ${SRCS:%.c=%.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= rush-02

.c.o:
	${CC} ${CFLAGS}  -c $< -o $@

all:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${NAME}:	all

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all

.PHONY:		all clean flcean re
