/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 01:55:23 by cperng            #+#    #+#             */
/*   Updated: 2018/04/05 02:05:18 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while(argv[1][i] <= 32 && argv[1][i] != '\0')
			i++;
		while(argv[1][i] >32 && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
			if (argv[1][i] <= 32 || argv[1][i] == '\0')
			{
				ft_putchar('\n');
				return (0);
			}
		}
		ft_putchar('\n');
	}
	return (0);
}
