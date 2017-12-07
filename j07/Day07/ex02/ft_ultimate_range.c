/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 00:07:49 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/20 18:24:14 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
**#include <stdio.h>
**
**void	afficher_tab(int *tab, int size)
**{
**	int		i;
**
**	i = 0;
**	while (i < size)
**	{
**		printf("%d : %d\n", i, tab[i]);
**		i++;
**	}
**}
**
**int		main(int ac, char **av)
**{
**	int		*tab;
**
**	if (ac != 3)
**		return (0);
**	ft_ultimate_range(&tab, atoi(av[1]), atoi(av[2]));
**	afficher_tab(tab, atoi(av[2]) - atoi(av[1]));
**	return (0);
**}
*/

int		ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;
	int		*tab;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = (int*)malloc(sizeof(*tab) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}
