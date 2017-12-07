/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 13:09:11 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/08 13:13:03 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
