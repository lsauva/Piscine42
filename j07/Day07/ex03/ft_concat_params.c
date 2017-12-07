/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 01:41:06 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/20 18:47:44 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <stdio.h>
**
**int		main(int argc, char **argv)
**{
**	printf("concat : %s\n", ft_concat_params(argc, argv));
**	return (0);
**}
*/

#include <stdlib.h>

int		nb_char(char **tab)
{
	int		i;
	int		j;
	int		cpt;

	i = 1;
	cpt = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			cpt++;
			j++;
		}
		i++;
	}
	return (cpt);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		lig;
	int		col;
	int		index;

	str = (char*)malloc(sizeof(*str) * nb_char(argv) + argc - 1);
	lig = 1;
	index = 0;
	while (argv[lig])
	{
		col = 0;
		while (argv[lig][col])
		{
			str[index] = argv[lig][col];
			col++;
			index++;
		}
		str[index] = '\n';
		index++;
		lig++;
	}
	str[index - 1] = '\0';
	return (str);
}
