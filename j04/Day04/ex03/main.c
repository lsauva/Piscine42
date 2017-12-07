/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:41:48 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/08 16:46:29 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int i;

	i = -1;
	while (i < 30)
	{
		printf("%d puissance %d = %d\n", 2, i, ft_recursive_power(2, i));
		i++;
	}
	return (0);
}
