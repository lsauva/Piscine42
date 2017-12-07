/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:26:50 by lsauvage          #+#    #+#             */
/*   Updated: 2017/09/16 17:39:23 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 1)
	{
		ft_putstr("Bad usage : this function don't need argument.");
		ft_putchar('\n');
		return (0);
	}
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
