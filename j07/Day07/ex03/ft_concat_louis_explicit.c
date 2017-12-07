/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-spie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:56:08 by lde-spie          #+#    #+#             */
/*   Updated: 2017/09/20 15:58:17 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		total_oct(char **argv)
{
	int		l;
	int		c;
	int		total;

	l = 1;
	total = 0;
	while (argv[l] != 0)
	{
		c = 0;
		while (argv[l][c] != '\0')
		{
			total++;
			c++;
		}
		l++;
	}
	return (total);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*final_string;
	int		l;
	int		c;
	int		i;

	final_string = (char*)malloc(sizeof(char) * (total_oct(argv) + argc - 1));
	printf("%d octets ont ete alloue pour \n", total_oct(argv) + argc - 1);
	l = 1;
	i = 0;
	while (argv[l])
	{
		printf("\nArgument n %d : %s\n_____\n", l, argv[l]);
		c = 0;
		while (argv[l][c])
		{
			printf("sortie[%d] -> %c\n", i, argv[l][c]);
			final_string[i] = argv[l][c];
			i++;
			c++;
		}
		printf("sortie[%d] -> \\n\n", i);
		final_string[i] = '\n';
		i++;
		l++;
	}
	printf("sortie[%d] -> \\0\n", i - 1);
	final_string[i - 1] = '\0';
	return (final_string);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
	return (0);
}
