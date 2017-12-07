/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 03:21:07 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/09 13:47:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	afficher_tab(int *tab, int size);
void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int		size;
	int		tab[8] = {15, 2, 35, 5, 57, 22, 1, 3};

	size = 8;
	afficher_tab(tab, size);
	ft_sort_integer_table(tab, size);
	printf("Tableau apres tri : \n");
	afficher_tab(tab, size);
	return (0);
}
