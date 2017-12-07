/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 16:24:41 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/05 17:54:46 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(5, 2, &div, &mod);
	printf("div: %d", div);
	printf("\n");
	printf("mod: %d", mod);
	printf("\n");
	return (0);
}
