/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 00:12:10 by cperng            #+#    #+#             */
/*   Updated: 2018/03/15 00:13:41 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchart(char c)
{
    write(1, &c, 1);
    return(0);
}

int	main()
{
    ft_putchart('@');
    ft_putchart('\n');
    return (0);
}
