/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:09:09 by cperng            #+#    #+#             */
/*   Updated: 2018/03/23 16:10:03 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	write(1, "a", 1);
	return (0);
}