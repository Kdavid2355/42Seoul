# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 11:42:15 by beomjuki          #+#    #+#              #
#    Updated: 2023/07/03 15:38:24 by beomjuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_itoa.c ft_puthex.c

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
RM = rm -f
AR = ar
ARFLAGS = -rc

OBJS = ${SRCS:.c=.o}

all : ${NAME}

OBJ_FILES = $(OBJS)

${NAME} : ${OBJ_FILES}
	${AR} ${ARFLAGS} $@ $^

%.o : %.c
	${CC} ${CFLAGS} $< -o $@

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME)

re : fclean all

.PHONY: all, clean, fclean, re, bonus
