/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:58:04 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/09 16:02:36 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		i = nb * i;
		power--;
	}
	return (i);
}
