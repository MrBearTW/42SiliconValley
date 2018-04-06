/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fFt_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:25:38 by cperng            #+#    #+#             */
/*   Updated: 2018/04/06 00:59:47 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_atoi(const char *str)
{
	int		i;
	bool	neg;
	int		res;

	i = 0;
	neg = false;
	res = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = true;
	while(str[i] == '-' || str[i] == '+')
		i++;
	while((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res *= 10;
		res += (int)str[i] - '0';
		i++;
	}
	if (neg)
		return (-res);
	else
		return (res);
}
