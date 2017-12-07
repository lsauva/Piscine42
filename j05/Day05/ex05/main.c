/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:35:41 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/16 18:40:34 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("chaine source : %s\n", argv[1]);
//	printf("Resultat : %s\n", ft_strstr(argv[1], argv[2]));
	printf("Resultat : %s\n", strstr(argv[1], argv[2]));
}
