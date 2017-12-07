/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 21:22:33 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/19 22:06:10 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

char	*rotone(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
		if (str[i] == 'z' || str[i] == 'Z')
			str[i] = str[i] - 25;
		i++;
	}

	str[i] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	ft_putstr(rotone(argv[1]));
	write(1, "\n", 1);
	return (0);
}
