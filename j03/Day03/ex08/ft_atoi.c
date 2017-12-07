/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 22:25:01 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/08 10:28:47 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** reproduire a l'identique le fonctionnementde la fonction atoi
** the atoi() function converts the initial portion of the string pointed by
** str to int representation
*/

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	char	c;

	i = 1;
	res = 0;
	c = *str;
	while (c != '\0' && (c >= 8 && c <= 14))
		c = *str++;
	while (c == 32)
		c = *str++;
	while (c == 43 || c == 45)
	{
		if (c == 45)
			i = -1;
		c = *str++;
	}
	while ((c >= 48 && c <= 57) && c != '\0')
	{
		res = res * 10 + (c - 48);
		c = *str++;
	}
	return (res * i);
}
