/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:17:34 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/15 15:34:35 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
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
	while (j < i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	return (str);
	return (0);
}

int main()
{
	char str[] = "bonjour";
	ft_putstr(ft_strrev(str));
	return (0);
}

