/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 11:59:09 by cperng            #+#    #+#             */
/*   Updated: 2018/03/18 13:58:12 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	putchar_row(int type, int i)
{
	if (type == 1)
		ft_putchar('B');
	else
	{
		if (i == 1)
			ft_putchar('A');
		else
			ft_putchar('C');
	}
}

void	print_row(int width, int type)
{
	int i;

	i = 1;
	while (i <= width)
	{
		if (i == 1 || i == width)
		{
			putchar_row(type, i);
		}
		else
		{
			if (type == 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
		}
		i++;
	}
}

void	rush(int width, int height)
{
	int i;

	i = 1;
	while (i <= height)
	{
		if (i == 1 || i == height)
			print_row(width, 0);
		else
			print_row(width, 1);
		i++;
		ft_putchar('\n');
	}
}
