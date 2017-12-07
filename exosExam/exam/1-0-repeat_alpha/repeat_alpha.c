/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 12:32:23 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/20 13:07:01 by fguthman         ###   ########.fr       */
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
	str[i] = '\n';
}

char	*ft_repeat_alpha(char *str)
{
	int i;
	int j;
	int power;

	i = 0;
	j = 0;
	power = 0;
	while (str[i])
	{
		if (str[i] >='a' && str[i] <= 'z')
		{
			power = str[i] - 16;
			while (power != 0)
			{
				str[j] = str[i];
				j++;
				power--;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			power = str[i] - 48;
			while (power != 0)
			{
				str[j] = str[i];
				j++;
				power--;
			}
		}
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&  str[i] <= 'Z')))
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\n';
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("\n");
	else
		ft_putstr(ft_repeat_alpha(argv[1]));
	return (0);
}
