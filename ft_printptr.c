/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:17:09 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 21:06:44 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_ptrl(uintptr_t ptr)
{
    int i = 0;

    if (ptr == 0)
        return 1;

    while (ptr)
    {
        ptr /= 16; // Divide ptr by 16
        i++;       // Increment length
    }
    return i; // Return length
}

void ft_put_ptr(uintptr_t ptr)
{
    if (ptr == 0)
    {
        ft_putstr("Pointer value: (nil)");
        return;
    }

    if (ptr >= 16) // If num greater than or equal to 16, recall this function
    {
        ft_put_ptr(ptr / 16); // Turns ptr into hex 1 by 1
        ptr %= 16; // Get the last digit in hexadecimal
    }

    if (ptr < 10)
        ft_putchar(ptr + '0');
    else
        ft_putchar(ptr - 10 + 'a');
}

int ft_print_ptr(unsigned long long ptr)
{
    int i = 0;

    if (ptr == 0)
      {
        ft_putstr("(nil)");
        return(5);
      }
    i += write(1, "0x0", 2);
    ft_put_ptr(ptr);
    i += ft_ptrl(ptr);
    

    return i;
}
