/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 12:21:24 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 17:35:09 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("FT_STRNCAT : %s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	printf("STR N CAT : %s\n", strncat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
