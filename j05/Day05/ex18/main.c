/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 15:34:36 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 17:37:39 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(int argc, char **argv)
{
	char dest[100] = "akjbsjosv";
	char dest1[100] = "akjbsjosv";

	if (argc != 3)
		return (0);
	printf("FT_STRLCAT : %u\n", ft_strlcat(dest, argv[1], atoi(argv[2])));
	printf("STRLCAT : %lu \n", strlcat(dest1, argv[1], atoi(argv[2])));
	printf("ft : %s\n", dest);
	printf("orig : %s\n", dest1);
	return (0);
}
