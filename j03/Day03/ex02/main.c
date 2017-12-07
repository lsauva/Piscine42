/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 15:11:04 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/07 15:30:22 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 32;
	b = 55;
	printf("a before : " "%d\n", a);
	printf("b before : " "%d\n", b);
	ft_swap(&a, &b);
	printf("a after swap : " "%d\n", a);
	printf("b after swap : " "%d\n", b);
	return (0);
}
