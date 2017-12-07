/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 19:02:38 by exam              #+#    #+#             */
/*   Updated: 2017/09/20 12:35:52 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int nb;
	int i;

	i = 0;
	nb = 1;
	if (argc == 4)
	{
		if (argv[2][i] == '*')
			nb = atoi(argv[1]) * atoi(argv[3]);
		if (argv[2][i] == '+')
			nb = atoi(argv[1]) + atoi(argv[3]);
		if (argv[2][i] == '-')
			nb = atoi(argv[1]) - atoi(argv[3]);
		if (argv[2][i] == '/')
			nb = atoi(argv[1]) / atoi(argv[3]);
		if (argv[2][i] == '%')
			nb = atoi(argv[1]) % atoi(argv[3]);
		printf("%d\n", nb);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}

