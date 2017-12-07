/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:08:42 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/18 15:07:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_atoi(char *str);

void	afficher_table(char *str, int size)
{
	int i;

	i = 0;
	printf("{");
	while (i < size)
	{
		printf("%c, ", str[i]);
		i++;
	}
	printf("}");
}

int		main(void)
{
	char *src = "salut les copains !";
	char dest[20];
	char dest1[20];

	printf("SOURCE : %s\n", src);
	ft_strncpy(dest, src, 0);
	strncpy(dest1, src, 0);
	printf("DEST : %s\n", dest);
	afficher_table(dest, 20);
	printf("\n");
	printf("\n");
	afficher_table(dest1, 20);
	return (0);
}
