/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 22:48:26 by cperng            #+#    #+#             */
/*   Updated: 2018/04/05 00:17:07 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char str[3])
{
	int	i;
	char c;

	i=0;
	while ( i < 3)
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		main(void)
{
	char  str[3] = "ABC";
	ft_putstr(str);
}	
