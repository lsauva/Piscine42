/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 19:36:08 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/07 15:01:02 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_comb(void);

/*
** Écrire une fonction qui affiche toutes les différentes combinaisons de n **
** chiffres dans l’ordre croissant.
*/

void	ft_print_combn(int n)
{
	int		i;
	int		str[n];

	i = 0;
	while (str[i] <= '9' && str[i] != '\0')
	{
		if (str[i] < str[i + 1])
		{
			ft_putchar(str[i]);
			ft_putchar(str[i + 1]);
		}
		i++;
	}
}
