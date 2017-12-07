/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 02:40:12 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 02:53:04 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("FT_STRCAT : %s\n", ft_strcat(argv[1], argv[2]));
	printf("STRCAT : %s\n", strcat(argv[1], argv[2]));
	return (0);
}
