/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 00:01:05 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 00:56:01 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("Lower case : %s\n", ft_strlowcase(argv[1]));
	return (0);
}
