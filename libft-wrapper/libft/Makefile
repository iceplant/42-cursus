# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 11:15:06 by rokamen-          #+#    #+#              #
#    Updated: 2023/09/27 14:42:49 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SOURCES = $(wildcard ft_*.c)
OBJECTS = ${SOURCES:.c=.o}
CFLAGS += -Wall -Wextra -Werror
INC_DIR = includes
CUR_DIR = $(shell pwd)

DEPS = ./libft.h

${NAME}: ${OBJECTS}
	ar rcs libft.a ${OBJECTS}
	ranlib ${NAME}

all: ${NAME}

%.o: %.c Makefile ${DEPS} libft.h
	cc ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

.PHONY: all clean fclean re

re: fclean all
