/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 00:36:01 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 19:06:23 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d NEXT prime ? %d\n", atoi(argv[1]),
			ft_find_next_prime(atoi(argv[1])));
	return (0);
}
