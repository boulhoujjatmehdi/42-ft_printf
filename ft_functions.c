/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:31:41 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/25 19:14:52 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_putchar(char c, int *counter)
{
	write (1, &c, 1);
	counter[0]++;
}
void ft_putstr(char *str , int *counter)
{
    int i= 0;
    if(!str)
    {
        write(1, "(null)", 6);
        counter[0]+=6;
    }else
    {
        while(str[i])
        {
            ft_putchar(str[i], counter);
            i++;
        }
    }
}


void ft_converter(unsigned long dec, char *base, int *counter, int boole)
{
    if(!boole)
    {
        boole = 1;
        write(1, "0x", 2);
        counter[0] += 2;
    }
    if(dec >= 16)
        ft_converter(dec/16, base, counter, boole);
    ft_putchar(base[dec%16], counter);
}