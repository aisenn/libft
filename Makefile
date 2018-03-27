#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdulla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/24 13:51:57 by aabdulla          #+#    #+#              #
#    Updated: 2018/03/24 18:57:25 by aabdulla         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRC =	./ft_memset.c \
		./ft_bzero.c \
		./ft_memcpy.c \
		./ft_memccpy.c \
		./ft_memmove.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_strlen.c \
		./ft_strdup.c \
		./ft_strcpy.c \
		./ft_strncpy.c \
		./ft_strcat.c \
		./ft_strncat.c \
		./ft_strlcat.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strstr.c \
		./ft_strnstr.c \

OBJ =	$(SRC:.c=.o)

HEADERS = libft.h

all: $(NAME)

$(NAME): | 
	@ gcc -c $(CFLAGS) $(SRC) -I .
	@ ar rc $(NAME) $(OBJ)

clean:
	@ /bin/rm -f $(OBJ)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all