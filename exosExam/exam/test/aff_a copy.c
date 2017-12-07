/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:37:27 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/14 20:57:54 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return ('a');
		i++;
	}
	if (str[0] == '\0')
		return ('a');
	return (0);
}

int	main()
{
	char	str[] = "toto";
	ft_putchar(aff_a(str));
	ft_putchar('\n');
	return (0);
}

