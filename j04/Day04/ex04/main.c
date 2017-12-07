/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:48:26 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/09 16:03:09 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int	val;

	val = 20;
	printf("Fibo(%d) = %d\n", val, ft_fibonacci(val));
	return (0);
}
