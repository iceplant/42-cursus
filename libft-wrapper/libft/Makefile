# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 11:15:06 by rokamen-          #+#    #+#              #
#    Updated: 2023/09/20 15:40:24 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SOURCES = $(wildcard ft_*.c)
OBJECTS = ${SOURCES:.c=.o}
CFLAGS += -Wall -Wextra -Werror
#INC_DIR = includes
CUR_DIR = $(shell pwd)

DEPS = $(INC_DIR)/libft.h

${NAME}: ${OBJECTS}
	# cc -c ${CFLAGS} -o ${NAME} ${OBJECTS}
	ar rc libft.a ${OBJECTS}
	ranlib ${NAME}

all: ${NAME}

%.o: %.c ${DEPS}
	cc ${CFLAGS} libft.h -c $< -o $@ #-I ${INC_DIR}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

#.PHONY: all clean fclean

re: fclean all
