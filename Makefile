# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnukeri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/08 14:32:52 by mnukeri           #+#    #+#              #
#    Updated: 2019/06/08 17:03:13 by mnukeri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAG = -Wall -Wextra -Werror
ARC = ar rc
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalpha.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_toupper.c ft_tolower.c
OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_isalpha.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnstr.o ft_strrchr.o ft_strstr.o ft_toupper.o ft_tolower.o
# all: ${NAME}

${NAME}:
	@echo "creating objects.."
	@${CC} ${FLAG} -c ${SRC}
	@echo "creating library.."
	@${ARC} ${NAME} ${OBJ}
	@echo "optimizing library.."
	@ranlib ${NAME}

all: ${NAME}

clean:
	@echo "cleaning *.o .."
	@rm -f *.o

fclean:	clean
	@echo "cleaning alles.."
	@rm -f ${NAME}

re: fclean all
