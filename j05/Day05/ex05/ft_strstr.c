/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:34:56 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/16 19:11:52 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int size;
	int j;

	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
