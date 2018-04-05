/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:40:29 by cperng            #+#    #+#             */
/*   Updated: 2018/03/30 15:50:04 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a", 1);
		}
		i++;
	}
	write(1, "\n" ,1);
	return (0);
}