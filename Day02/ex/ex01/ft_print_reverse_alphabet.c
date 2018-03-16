/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 16:30:13 by cperng            #+#    #+#             */
/*   Updated: 2018/03/15 16:30:21 by cperng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

 int ft_putchar(char c)
 {
     write(1,&c,1);
    return(0);
 }

 void ft_print_alphabet(void)
 {
     int letter;

     letter =122;
     while(letter>='a')
     {
         ft_putchar(letter);
         letter =letter-1;
     }
     ft_putchar('\n');
 }

 int main()
 {
     ft_print_alphabet();
     return(0);
 }