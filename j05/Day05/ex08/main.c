/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 23:48:38 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/13 23:54:52 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("Upper Case : %s\n", ft_strupcase(argv[1]));
	return (0);
}
