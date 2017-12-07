/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 18:29:56 by exam              #+#    #+#             */
/*   Updated: 2017/09/15 18:49:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
char *rev_print(char *str)
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
		j++;
		i--;
	}
	if (j >= i)
	{
		ft_putstr(str);
		ft_putstr("\n");
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	else
	{
		rev_print(argv[i]);
		return (0);
	}
	return (0);
}
