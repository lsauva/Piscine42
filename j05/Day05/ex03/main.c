/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:41:43 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/11 19:07:46 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char			dest[50];
	char			*src;
	unsigned long	i;

	i = 0;
	src = argv[1];
	if (argc == 2)
	{
		printf("SOURCE : %s\n", src);
		ft_strcpy(dest, src);
		printf("DEST : %s\n", dest);
		return (0);
	}
}
