/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 02:56:32 by cperng            #+#    #+#             */
/*   Updated: 2018/04/05 03:17:38 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int letter;

	i = 0;
	if (argc ==2)
	{
		while (argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >='A' && 'Z' >= argv[1][i])
				letter = argv[1][i] - 63;
			if (argv[1][i] >='a' && 'z' >= argv[1][i])
				letter = argv[1][i] -95;
				while(--letter)
					write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
