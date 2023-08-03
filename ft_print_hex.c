/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odouhri <odouhri@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 03:54:48 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/03 14:46:28 by odouhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_len(unsigned int c)
{
    int i;

    i = 0;
    while (c)
    {
        c /= 16;
        i++;
    }
    return (i);
}

void    ft_put_hex(unsigned int c, const char format)
{
    if (c >= 16) //if int > 16 recall this function
    {
        ft_put_hex(c / 16, format); //turns int into hex 1 by 1<
        ft_put_hex(c % 16, format); //>
    }
    if (c < 10) //print hex here
        ft_printchar(c + '0'); //if c < 10 turns it into ascii digit
    else
    {
        if (format == 'x') //if > 10 turn it into capital or lower case>
            ft_printchar(c - 10 + 'a'); //> depending on format
        if (format =='X')
            ft_printchar(c - 10 + 'A');
    }   
}

int ft_print_hex(unsigned int c, const char format)
{
    if (c == 0)
    {
        ft_printchar('0');
        return (2);
    }
    else
        ft_put_hex(c, format);
    return (ft_hex_len(c));
}