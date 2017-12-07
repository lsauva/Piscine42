/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:30:23 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/14 22:14:51 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

char	*wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] && str2[j])
	{
		if (str1[i] != str2[j])
			j++;
		if (str1[i] == str2[j])
		{
			j++;
			i++;
		}
	}
	if (str1[i] == '\0')
		return (str1);
	if (str2[j] == '\0' && str1[i])
		return ("\n");
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		putstr("\n");
	else
		putstr(wdmatch(argv[1], argv[2]));
	return (0);
}
	
