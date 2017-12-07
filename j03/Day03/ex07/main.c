/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:44:56 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/06 18:22:19 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char str[] = "laurent";
	printf("chaine normale : %s\n", str);
	printf("chaine inversee : %s", ft_strrev(str));

	return (0);
}
