# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 12:21:11 by lsauvage          #+#    #+#              #
#    Updated: 2017/11/22 19:21:18 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

OPTION = -I $(HEADER)

SRC = 	ft_atoi.c ft_bzero.c ft_int_len.c ft_isalnum.c ft_isalpha.c 	\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c 	\
		ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c 	\
		ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putstr.c 	\
		ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c 	\
		ft_strdel.c \
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c	\
		ft_strlcat.c \
		ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c	\
		ft_strncpy.c ft_strnequ.c \
		ft_strnew.c ft_strnstr.c ft_strstr.c ft_strsub.c				\
		ft_swap.c \
		ft_tolower.c ft_toupper.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[33m...creating archive...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@echo "\033[33m...generating index... \033[0m"
	@ranlib $(NAME)
	@echo "\033[32m[OK]libft is ready\033[0m"

$(OBJ):
	@echo "\033[33m...compiling sources...\033[0m"
	@$(CC) $(FLAGS) $(OPTION) -c $(SRC)

clean:
	@echo "\033[33m...removing object files... \033[0m"
	@/bin/rm -f $(OBJ)
	@echo "\033[32m[OK]\033[0m \033[33mall .o files are removed\033[0m"

fclean: clean
	@echo "\033[33m...removing Library... \033[0m"
	@/bin/rm -f $(NAME)
	@echo "\033[32m[OK]\033[0m \033[31m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
