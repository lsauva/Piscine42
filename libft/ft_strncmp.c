/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 13:00:56 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/14 16:08:48 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!*s1)
		return (-(unsigned char)*s2);
	if (!*s2)
		return ((unsigned char)*s1);
	while (*s1 && *s2 && n >= 1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			n--;
		}
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
