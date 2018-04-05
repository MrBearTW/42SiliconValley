/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 03:39:54 by cperng            #+#    #+#             */
/*   Updated: 2018/04/05 04:10:25 by cperng           ###   ########.fr       */
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
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <='Z')
		{
			j = argv[1][i];
			while (j - 64 >0)
			{
				ft_putchar(argv[1][i]);
				j--;
			}
			j = 0;
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			j = argv[1][i];
			while (j - 96 > 0)
			{
				ft_putchar(argv[1][i]);
				j--;
			}
			j = 0;
		}
		else
		{
			ft_putchar(argv[1][i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
