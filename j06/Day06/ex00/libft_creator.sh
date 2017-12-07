# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/15 14:22:48 by lsauvage          #+#    #+#              #
#    Updated: 2017/09/18 10:59:56 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/sh
gcc -c ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c ft_atoi.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o ft_atoi.o
ranlib libft.a
rm *.o
