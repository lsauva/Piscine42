/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 14:41:34 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/05 14:57:24 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	ft_putstr("bonjour ");
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		ft_putstr("usage: command toto\n");
		return (0);
	}
	ft_putchar('\n');

	return (0);
}
