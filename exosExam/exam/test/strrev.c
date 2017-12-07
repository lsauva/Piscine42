/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:04:46 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/14 20:31:00 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i > j)	
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}

int main()
{
	char tab[] = "bateau";
	printf("%s\n", ft_strrev(tab));
	return(0);
}
