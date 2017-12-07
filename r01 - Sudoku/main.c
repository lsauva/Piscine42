/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:56:35 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/10 21:47:53 by lsauvage         ###   ########.fr       */
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

void	resoudre_grille(char **grille)

int		est_grille_valide(char **grille)

int		est_ligne_valide(char *ligne)


int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 10)
	{
		while (i < 10)
		{
			afficher_ligne(argv[i]);
			i++;
		}
	}
}
