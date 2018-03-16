/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 09:56:59 by cperng            #+#    #+#             */
/*   Updated: 2018/03/16 10:26:10 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	a = '0';
	b = '1';
	c = '1';
	while (a < '8')
	{
		while (b < '9')
		{
			while (c < '9')
			{
				c++;
				if (c > b && b > a)
					{
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(c);
						ft_putchar(',');
						ft_putchar(' ');
					}
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}

int	main()
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
