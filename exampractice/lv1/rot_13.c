/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 12:06:00 by cperng            #+#    #+#             */
/*   Updated: 2018/04/05 14:01:13 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while(argv[1][i] != '\0')
	{	
		if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			ft_putchar(argv[1][i] + 13);
		else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			ft_putchar(argv[1][i] - 13);
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			ft_putchar(argv[1][i] + 13);
		else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			ft_putchar(argv[1][i] - 13);
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return(0);
}

