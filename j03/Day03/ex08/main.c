/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 22:25:57 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/08 10:38:25 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str[] = "+123+12d";
	char str2[] = " -456";
	char str3[] = "	+2	";
	char str4[] = "		-(12)djf54";

	printf("%s\n", "ATOI : ");
	printf("%d\n", atoi(str));
	printf("%d\n", atoi(str2));
	printf("%d\n", atoi(str3));
	printf("%d\n", atoi(str4));
	printf("%s\n", "FT_ATOI : ");
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	return (0);
}
