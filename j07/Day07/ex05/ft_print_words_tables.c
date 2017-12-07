/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:12:28 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/20 18:15:44 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**int		main(int argc, char **argv)
**{
**	if (argc == 2)
**		ft_print_words_tables(ft_split_whitespaces(argv[1]));
**	return (0);
**}
**
**char	**ft_split_whitespaces(char *str);
*/

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
