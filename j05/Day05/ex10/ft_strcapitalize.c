/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 00:27:56 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/17 02:41:39 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (ft_is_alnum(str[i - 1]) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!(ft_is_alnum(str[i - 1])) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
