/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 23:12:37 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/13 23:38:27 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("FT STR COMP : %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("STR COMP : %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
