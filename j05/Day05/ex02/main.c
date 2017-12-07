/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 12:57:32 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/13 13:06:40 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main(int ac, char **argv)
{
	if (ac != 2)
		return (0);
	printf("ft_atoi : %d\n", ft_atoi(argv[1]));
	printf("atoi : %d\n", atoi(argv[1]));
	return (0);
}
