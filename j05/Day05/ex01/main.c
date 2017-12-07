/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:26:57 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/15 12:34:57 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf(" Put NBR : %d\t", atoi(argv[1]));
	ft_putnbr(atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
