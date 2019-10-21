# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 11:19:49 by rhutchin          #+#    #+#              #
#    Updated: 2019/06/26 09:33:22 by rhutchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_lstdel.c ft_putchar.c ft_strdel.c ft_strnequ.c ft_lstdelone.c \
	  ft_putchar_fd.c ft_strdup.c ft_strnew.c ft_lstiter.c ft_putendl.c \
	  ft_strequ.c ft_strnstr.c ft_atoi.c ft_lstmap.c ft_putendl_fd.c \
	  ft_striter.c ft_strrchr.c ft_bzero.c ft_lstnew.c ft_putnbr.c \
	  ft_striteri.c ft_strsplit.c ft_isalnum.c ft_memalloc.c ft_putnbr_fd.c	\
	  ft_strjoin.c ft_strstr.c ft_isalpha.c ft_memccpy.c ft_putstr.c \
	  ft_strlcat.c ft_strsub.c ft_isascii.c ft_memchr.c ft_putstr_fd.c \
	  ft_strlen.c ft_strtrim.c ft_isdigit.c ft_memcmp.c ft_strcat.c \
	  ft_strmap.c ft_swap.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strmapi.c \
	  ft_tolower.c ft_iswhitespace.c ft_memdel.c ft_strclr.c ft_strncat.c \
	  ft_toupper.c ft_itoa.c ft_memmove.c ft_strcmp.c ft_strncmp.c ft_lstadd.c \
	  ft_memset.c ft_strcpy.c ft_strncpy.c ft_replacechr.c ft_strdupdel.c \
	  ft_itoa_base.c ft_strtoupper.c ft_strtolower.c

OBJ = $(SRC:.c=.o)

INCL = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
