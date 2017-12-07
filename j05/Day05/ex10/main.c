/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 00:52:18 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/16 23:23:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("Capitalize : %s\n", ft_strcapitalize(argv[1]));
	return (0);
}
