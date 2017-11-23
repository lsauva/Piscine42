/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:24:47 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/13 16:37:43 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int ac, const char **av)
{
	if (ac == 3)
	{
		printf("FT STR COMP : %d\n", ft_strcmp(av[1], av[2]));
		printf("STR COMP : %d\n", strcmp(av[1], av[2]));
		return (0);
	}
	return (0);
}
