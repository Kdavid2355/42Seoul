# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 19:49:19 by beomjuki          #+#    #+#              #
#    Updated: 2023/04/07 16:08:28 by beomjuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_calloc.c ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c
SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CC = cc
CFLAGS = -c -Wall -Wextra -Werror
RM = rm -f 
AR = ar
ARFLAGS = -rc

OBJS_BONUS = $(SRCS_BONUS:.c=.o)
OBJS = ${SRCS:.c=.o}

ifdef WITH_BONUS
	OBJ_FILES = $(OBJS) $(OBJS_BONUS)
else
	OBJ_FILES = $(OBJS)
endif

all : ${NAME}
	sleep 1

${NAME} : ${OBJ_FILES}
	${AR} ${ARFLAGS} $@ $^

bonus:
	make WITH_BONUS=1 all

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all, clean, fclean, re, bonus
