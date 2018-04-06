/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:21:46 by cperng            #+#    #+#             */
/*   Updated: 2018/04/05 19:43:31 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main(int argc, char *argv[])
{
	int i;
	char ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if ('A' <= argv[1][i] && 'Z' >= argv[1][i])
				ltr = 'z' - argv[1][i] + 'A';
			if ('a' <= argv[1][i] && 'z' >= argv[1][i])
				ltr = 'z' - argv[1][i] + 'a';
			write(1, &ltr, 1);
			i+=1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
