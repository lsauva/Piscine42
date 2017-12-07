/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:54:03 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/17 18:53:53 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && size > i)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		return (i - 1);
	else
	{
		while (size > 1)
		{
			dest[i] = '\0';
			i++;
		}
		return (i - 1);
	}
}
