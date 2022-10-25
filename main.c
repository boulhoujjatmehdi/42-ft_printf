/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:47:18 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/25 19:56:49 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int main ()
{
    // int i = printf("\001\002\007\v\010\f\r\n\n");
    // int j = ft_printf("\001\002\007\v\010\f\r\n\n");
    // printf("%d------%d-----%d", j, i  , 8);
    
    

	int a = 0;
	int b = 0;
	a += printf("%c \n", 'a');
    printf("%d---------\n" , a);
	a += printf("%s \n", "abc");
    printf("%d---------\n" , a);
	// a += printf("%p \n", &a);
	// a += printf("\001\002\007\v\010\f\r\n\n");
	// printf("----------------------------------\n");
	b += ft_printf("%c \n", 'a');
    printf("%d---------\n" , b);
	b += ft_printf("%s \n", "abc");
    printf("%d---------\n" , b);
	// b += ft_printf("%p \n", &a);
	// b += ft_printf("\001\002\007\v\010\f\r\n\n");
    
    // printf("\nLength : \na = %d\nb = %d\n", a, b);
}

