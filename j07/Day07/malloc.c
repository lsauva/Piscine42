/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 19:45:47 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/20 16:02:51 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define LEN		42

int		main(void)
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}
