/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:15:31 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/14 17:36:52 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends src to string dst of size siz (unlike strncat, siz is the full
** size of dst, not space left).  At most siz-1 characters will be copied.
** Always NUL terminates (unless siz <= strlen(dst)).
** Returns strlen(src) + MIN(siz, strlen(initial dst)).
** If retval >= siz, truncation occurred.
**
** Ajoute src à string dst de taille siz (contrairement à strncat,
** siz est la taille pleine de dst, pas l'espace restant).
** Au plus siz-1 caractères seront copiés.
** Toujours NUL se termine (sauf siz <= strlen (dst)).
** Renvoie strlen (src) + MIN (siz, strlen (dst initial)).
** Si retval> = siz, une troncature s'est produite.
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	while (dest[i])
		i++;
	dest_size = i;
	i = 0;
	while (src[i])
		i++;
	src_size = i;
	i = 0;
	while (src[i] && (dest_size + i) < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + ((dest_size < size) ? dest_size : size));
}
