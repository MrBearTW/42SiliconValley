/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 01:52:55 by cperng            #+#    #+#             */
/*   Updated: 2018/04/04 02:03:56 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	
	i = 0;
	if(argc>1)
	{
		while(argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return(0);
}
