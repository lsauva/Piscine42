/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:47:44 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/10 21:48:45 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_space(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		if (i != 8)
			ft_putchar(' ');
		i++;
	}
}
void	afficher_ligne(char *ligne)
{
	ft_putstr_space(ligne);
	ft_putchar('\n');
}
