/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_prints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:34:09 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/20 18:43:33 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c	, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(int ac, char **av)
{
	if (ac != 1)
		ft_putstr(av[ac - 1]);
	ft_putchar('\n');
	return (0);
}
