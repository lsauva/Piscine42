/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:27:52 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/08 16:33:14 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int i;

	i = -1;
	while (i < 30)
	{
		printf("%d Puissance %d = %d\n", 2, i, ft_iterative_power(2, i));
		i++;
	}
	return (0);
}
