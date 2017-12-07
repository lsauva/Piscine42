/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:34:32 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/07 16:44:45 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;
	int		*ptr;
	int		*ptr2;

	a = 5;
	b = 2;
	ptr = &a;
	ptr2 = &b;
	printf("valeur de a : %d\n", *ptr);
	printf("valeur de b : %d\n", *ptr2);
	printf("ft_ultimate_div_mod : \n");
	ft_ultimate_div_mod(ptr, ptr2);
	printf("valeur de a apres ft : %d\n", *ptr);
	printf("valeur de b apres ft : %d\n", *ptr2);
	return (0);
}
