/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguthman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:21:47 by fguthman          #+#    #+#             */
/*   Updated: 2017/09/15 11:53:27 by fguthman         ###   ########.fr       */
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


char *ft_capitalizer(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
	   return("\n");	
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (str[i - 1] == ' ' || str[i - 1] == '	' )
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		
		if (!(str[i - 1] == ' ' || str[i - 1] == '	'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	if (str[i] == '\0')
		return (str);
	return (0);
}

int main()
{
	char str[] = "";

	ft_putstr(ft_capitalizer(str));
	return (0);
}
