/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odouhri <odouhri@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:17:09 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/03 14:44:01 by odouhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_ptrl(uintptr_t ptr)//get len of ptr
{
    int i;

    i = 0;

    while (ptr)
    {
        ptr  /= 16; //divide ptr by 16
        i++;        //inc length
    }
    return(i); //return length
}

void    ft_put_ptr(uintptr_t ptr)
{
    if (ptr >= 16) //if num greater than 16 recall this function
    {
        ft_print_ptr(ptr / 16); //turns ptr into hex 1 by 1<
        ft_print_ptr(ptr % 16); //>
    }
    if (ptr < 10) //print hex here
        ft_printchar(ptr + '0'); //if ptr < 10 turns it into ascii digit
    else
        ft_printchar(ptr - 10 + 'a');//if ptr > 10 - 10 and turn it into char
}

int ft_print_ptr(uintptr_t ptr)
{
    int i;

    i = 0;
    i += write (1, "0x", 2);
    if (ptr == 0)
        i += write(1, "0", 1);
    else
    {
        ft_put_ptr(ptr);
        i += ft_ptrl(ptr);

    }
    return (i);
}
