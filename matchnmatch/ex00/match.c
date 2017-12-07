/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:50:23 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/10 21:14:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ##### Fonction match  #####
** Le but de la fonction est de savoir si deux chaînes matchent.
** On dit que s1 et s2 matchent lorsque s1 et s2 sont identiques.
** Si s2 contient une étoile (’*’), on pourra remplacer cette étoile par
** n’importe quelle chaîne de caractères (même vide) afin de rendre s1 et s2
** identiques. s2 peut contenir autant d’étoiles que l’on souhaite.
** Elle devra renvoyer 1 si s1 correspond à s2 ou 0 dans le cas contraire.
**
** si on arrive en bout de chaine de s1 et s2, les 2 chaînes sont identiques,
** on retourne 1
** sinon si s2 contient une etoile et qu'on n'est pas au bout de s1, 
** on relance la fonction avec un decallage de 1 sur s2.
** sinon on relance avec un decallage sur s1 ou sur s2 pour comparer les
** caracteres suivants
** si s1 et s2 sont differents, on retourne 0
** sinon on relanec avec un decallage de 1 sur chaque chaine.
*/

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (match(s1, s2 + 1));
		else 
			return (match(s1 + 1, s2) || match(s1, s2 + 1));
	}
	else if (*s1 != *s2)
		return (0);
	else
		return (match(s1 + 1, s2 + 1));
}
