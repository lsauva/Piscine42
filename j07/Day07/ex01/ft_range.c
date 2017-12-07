/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 23:26:32 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/20 18:20:21 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** #include <stdio.h>
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
**	int *var;
**
**	if (ac != 3)
**		return (0);
**	var = ft_range(atoi(av[1]), atoi(av[2]));
**	afficher_tab(var, atoi(av[2]) - atoi(av[1]));
**	free((void*)var);
**	return (0);
**}
*/

int		*ft_range(int min, int max)
{
	int		*res;
	int		size;
	int		i;

	if (max <= min)
		return (0);
	size = max - min;
	res = (int*)malloc(sizeof(*res) * size);
	i = 0;
	while (i < size)
		res[i++] = min++;
	return (res);
}
