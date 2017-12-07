/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 20:33:03 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/06 18:25:35 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strrev(char *str)
{
	int		index;
	int		end_index;
	char	temp;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	end_index = index - 1;
	index = 0;
	while (index < end_index)
	{
		temp = str[index];
		str[index] = str[end_index];
		str[end_index] = temp;
		index++;
		end_index--;
	}
	return (str);
}
