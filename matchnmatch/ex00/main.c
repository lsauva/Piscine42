/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:51:10 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/09 23:19:42 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	printf("Nom du binaire : %s\n", argv[0]);
	if (argc == 3)
	{
		printf("STRCOMP : %d \n", !strcmp(argv[1], argv[2]));
		printf("MATCH ? %d \n", match(argv[1], argv[2]));
	}
	return (0);
}
