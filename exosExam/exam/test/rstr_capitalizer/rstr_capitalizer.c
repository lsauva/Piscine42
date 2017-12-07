/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 19:40:16 by exam              #+#    #+#             */
/*   Updated: 2017/09/15 20:23:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *rstr_capitalizer(char *str)
{
	int i;
	int fin;

	i = 0;
	fin = 0;
	while (str[fin] != '\0')
		fin++;
	while (str[i] != str[fin])
	{
		if (str[i + 1] == ' ' || str[i + 1] == '	')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if (!(str[i + 1] == ' ' || str[i + 1] == '	'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	if (str[i] == str[fin])
	{
		if (str[fin] >= 'a' && str[fin] <= 'z')
			str[fin] = str[fin] - 32;
	}
	i++;
	if (str[i] == '\0')
		ft_putstr(str);
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_putstr("\n");
	while (argc > 1)
	{
		ft_putstr(rstr_capitalizer(argv[i]));
		i++;
	}
	return (0);
}
