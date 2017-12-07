/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:28:40 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/15 15:01:46 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *wdmatch(char *src, char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] && dest[j])
	{
		if (src[i] != dest[j])
			j++;
		if (src[i] == dest[j])
		{
			i++;
			j++;
		}
	}
	if (src[i] == '\0')
	{
		ft_putstr(src);
		ft_putstr("\n");
		return (0);
	}
	if (dest[j] == '\0' && src[i])
	{
		ft_putstr("\n");
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 3)
	{
		wdmatch(argv[i], argv[i + 1]);
	}
	return (0);
}
