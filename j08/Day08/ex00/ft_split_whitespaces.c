/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:22:25 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/19 16:12:01 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_nb_mots(char *str)
{
	int		w;
	int		i;

	w = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] <= 32 && str[i])
			i++;
		if (!(str[i] <= 32) && str[i])
		{
			while (!(str[i] <= 32) && str[i])
				i++;
			w++;
		}
	}
	return (w);
}

char	**ft_nb_lettres(char **string, char *str)
{
	int		w;
	int		i;
	int		letter;

	w = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] <= 32 && str[i])
			i++;
		if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				&& str[i])
		{
			letter = 0;
			while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
					&& str[i])
			{
				i++;
				letter++;
			}
			string[w++] = (char *)malloc(sizeof(char) * letter + 1);
		}
		string[w] = 0;
	}
	return (string);
}

char	**ft_split(char **string, char *str)
{
	int		i;
	int		w;
	int		letter;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] <= 32 && str[i])
			i++;
		if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				&& str[i])
		{
			letter = 0;
			while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
					&& str[i])
			{
				string[w][letter] = str[i];
				letter++;
				i++;
			}
			string[w++][letter] = '\0';
		}
	}
	return (string);
}

char	**ft_split_whitespaces(char *str)
{
	char	**string;

	if (ft_strlen(str) != 0)
	{
		string = (char **)malloc(sizeof(char *) * ft_nb_mots(str) + 1);
		string = ft_nb_lettres(string, str);
		string = ft_split(string, str);
	}
	else
	{
		string = (char **)malloc(sizeof(char *));
		string[0] = "0";
	}
	return (string);
}
