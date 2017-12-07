/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:23:59 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/15 14:00:23 by fguthman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *str)
{
	int i;
	i = 0;
	while (str[i])		
	{
		write(1, &str[i], 1);
		i++;
	}
}
char *aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return ("a\n");
		i++;
	}
	if (str[i] == '\0')
		return ("\n");
	return(0);
}

int	main(int argc, char **argv)
{
	int i;
	i = 1; 
	if (argc == 2)
		ft_putchar(aff_a(argv[i]));
	if (argc != 2)
		ft_putchar("a\n");
	return (0);
}
