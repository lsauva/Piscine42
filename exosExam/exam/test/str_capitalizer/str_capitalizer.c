/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 20:25:53 by exam              #+#    #+#             */
/*   Updated: 2017/09/15 20:45:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_putstr(char *str)
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

char *str_capitalizer(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '	')
		{
			if (str[i] >='a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if (!(str[i - 1] == ' ' || str[i - 1] == '	'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	if (!(str[i]))
	{
		ft_putstr(str);
		ft_putstr("\n");
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if  (argc == 1)
		ft_putstr("\n");
	while (argv[i])
	{
		str_capitalizer(argv[i]);
		i++;
	}
	return (0);
}

