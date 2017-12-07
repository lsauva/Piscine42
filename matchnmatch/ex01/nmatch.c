/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 13:45:42 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/10 17:05:22 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fonction N Match : Le but de la fonction est de compter le nombre de fois
** que deux chaînes matchent.
** Lorsqu’on a deux étoiles ou plus, plusieurs combinaisons de chaînes
** de caractères peuvent convenir.
** nmatch calculera le nombre total de ces combinaisons.
**
** si on arrive en fin des 2 chaines, on retourne 1, les 2 sont identiques
** sinon, si on a une * sur s2, et si on est en fin de s1, on avance sur s2
**				sinon on avance sur s1 et sur s2
** sinon, si s1 et s2 sont differentes, on retourne 0
** sinon on avance sur les 2 chaines.
*/

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (nmatch(s1, s2 + 1));
		else
			return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	}
	else if (*s1 != *s2)
		return (0);
	else
		return (nmatch(s1 + 1, s2 + 1));
}
