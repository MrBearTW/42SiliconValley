/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:40:31 by cperng            #+#    #+#             */
/*   Updated: 2018/04/03 13:46:48 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

#include<unistd.h>
#include<stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	ft_strcmp(char *s1, char *s2);

char	position00(int col, int row, int h);

char	*rush00(int w, int h);

char	position01(int col, int row, int w, int h);

char	*rush01(int w, int h);

char	position02(int col, int row, int w, int h);

char	*rush02(int w, int h);

char	position03(int col, int row, int w, int h);

char	*rush03(int w, int h);

char	position04(int col, int row, int w, int h);

char	*rush04(int w, int h);

#endif
