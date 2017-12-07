/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 23:30:03 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/16 23:34:16 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_printable(char *str);

int		main(void)
{
	char	*str;

	str = "bonjour !\n";
	printf("chaine : %d\n", ft_str_is_printable(str));
	return (0);
}
