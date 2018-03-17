/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 00:24:58 by cperng            #+#    #+#             */
/*   Updated: 2018/03/17 00:52:33 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int i;
	int *ptr;
	int *address;
	char c;

	i = 5;
	c = 'b';
	address = &i;
	*ptr = 3;
	printf("%d\n", i);		//integer
	printf("%p\n", address);//path
	printf("%c\n", c);		//character
	printf("%d\n", c);		//ASCII
	printf("%d\n", *ptr);	//path
	printf("%p\n", ptr);	//address
	return (0);
}
