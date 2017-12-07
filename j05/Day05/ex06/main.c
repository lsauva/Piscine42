/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 21:48:52 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/13 23:33:27 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("FT STR COMP : %d\n", ft_strcmp(argv[1], argv[2]));
	printf("STR COMP : %d\n", strcmp(argv[1], argv[2]));
	return (0);
}
