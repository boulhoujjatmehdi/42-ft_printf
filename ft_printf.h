/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboulhou <eboulhou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:39:12 by eboulhou          #+#    #+#             */
/*   Updated: 2022/10/25 19:22:25 by eboulhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stdarg.h>
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>



int ft_printf(const char *format, ...);
void	ft_putchar(char c, int *counter);
void ft_putstr(char *str , int *counter);
void ft_put_pointer(void *pointer,int *counter);
void ft_converter(unsigned long dec ,char *base , int *counter, int boole);



#endif