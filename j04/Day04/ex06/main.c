/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:46:42 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 17:10:45 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d is prime ? %d\n", atoi(argv[1]), ft_is_prime(atoi(argv[1])));
	return (0);
}
