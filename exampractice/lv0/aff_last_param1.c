/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 09:39:37 by cperng            #+#    #+#             */
/*   Updated: 2018/04/04 21:48:47 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
			return (0);
	}
	while(argv[i+1])
	{
		i++;
	}
	while(argv[i][j] != '\0')
	{
		ft_putchar(argv[i][j]);
		j++;
	}
	ft_putchar('\n');

}
