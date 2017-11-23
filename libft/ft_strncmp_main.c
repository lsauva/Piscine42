/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:46:04 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/13 16:25:42 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int ac, const char **av)
{
	if (ac == 4)
	{
		printf("FT STR N COMP : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("STR N COMP : %d\n", strncmp(av[1], av[2], atoi(av[3])));
		return (0);
	}
	return (0);
}
