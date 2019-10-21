/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 09:10:59 by rhutchin          #+#    #+#             */
/*   Updated: 2019/06/13 14:24:01 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa_base(long value, int base)
{
    static  char rep[] = "0123456789abcdef";
    static  char buf[50];
    char    *ptr;
    long     num;
	unsigned long b;

    ptr = &buf[49];
    *ptr = '\0';
    num = value;
    if (value < 0 && base == 10)
        value *= -1;
	b = (unsigned long)value;
    if (b == 0)
        *--ptr = rep[b % base];
    while (b != 0)
    {
        *--ptr = rep[b % base];
        b /= base;
    }
    if (num < 0 && base == 10)
        *--ptr = '-';
    return (ptr);
}