# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 11:15:06 by rokamen-          #+#    #+#              #
#    Updated: 2023/09/27 16:48:32 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	   	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   	ft_atoi.c ft_itoa.c ft_split.c\
		ft_strdup.c ft_calloc.c \
	   	ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_strmapi.c ft_striteri.c \
	   	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS_SOURCES = ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
		ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c \
		ft_lstnew.c \

OBJECTS = ${SOURCES:.c=.o}
BONUS_OBJECTS = ${BONUS_SOURCES:.c=.o}
CFLAGS += -Wall -Wextra -Werror
CUR_DIR = $(shell pwd)

DEPS = ./libft.h

${NAME}: ${OBJECTS}
	ar rcs libft.a ${OBJECTS}
	ranlib ${NAME}

all: ${NAME}

%.o: %.c Makefile ${DEPS} libft.h
	cc ${CFLAGS} -c $< -o $@

bonus:	$(OBJECTS) $(BONUS_OBJECTS) $(HEADER)
	ar rcs libft.a $(OJBECTS) ${BONUS_OBJECTS}
	ranlib ${NAME}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

.PHONY: all clean fclean re

re: fclean all
