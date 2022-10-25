/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:46:28 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/25 19:42:31 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_loops(size_t i, char *form, va_list vlist, int *counter)
{
	char c;
	while(form[i])
	{
		c = form[i];
		if(c== '%')
		{
			i++;
			c = form[i];
			if (c == 'c')
				ft_putchar(va_arg(vlist, int), counter);
			else if (c == 's')
				ft_putstr(va_arg(vlist, char *), counter);	
			else if (c == 'p')
				ft_converter((unsigned long)(va_arg(vlist, void*)), "0123456789abcdef", counter, 0);
			else if(c == '%')
				ft_putchar('%', counter); 
		}
		else
		{
		ft_putchar(c , counter);
		}
		i++;
	}
}

int		ft_printf(const char *format, ...)
{
	va_list	vlist;
	size_t i;
	int counter[1];
	char *form  = (char *)format;
	va_start(vlist, format);
	i = 0;
	ft_printf_loops(i , form, vlist, counter);
	return counter[0];
}