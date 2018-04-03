/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 02:53:13 by cperng            #+#    #+#             */
/*   Updated: 2018/04/03 03:01:29 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_print_numbers(void)
{
	char c;
	c='0';
	while(c>=9)
		write(1,&c,1);
	c++;
	write(1,'n',1);
	return(0);
}

int main(void)
{
	ft_put_numbers(void)
		return(0);
}
