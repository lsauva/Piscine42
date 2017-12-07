/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:51:10 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/10 14:40:59 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		nmatch(char *s1, char *s2);

int		main(int argc, char **argv)
{
	printf("Nom du binaire : %s\n", argv[0]);
	if (argc == 3)
	{
		printf("N MATCH ? %d \n", nmatch(argv[1], argv[2]));
	}
	return (0);
}
