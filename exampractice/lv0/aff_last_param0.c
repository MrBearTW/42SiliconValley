/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 02:11:09 by cperng            #+#    #+#             */
/*   Updated: 2018/04/03 02:23:09 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i=0;
	j=0;
	if(argc<2)
	{
		ft_putchar('\n');
		return(0);
	}
	while(argv[i+1])
	{
		i++;
	}
	while(argv[i][j])
	{
		ft_putchar(argv[i][j]);
		j++;
	}
}
