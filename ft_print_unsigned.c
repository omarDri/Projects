/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odouhri <odouhri@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 03:25:42 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/03 14:44:56 by odouhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsigned_numlen(unsigned int c)
{
  int l;
  
  l = 0;
  if (c == 0)
    return (1);
  if (c < 0)//turn negative int into positive
  {
    l = l + 1;//add +1 to length for -
    c = -c;
  }
  
  while (c  > 0)
  {
    c /= 10;//divide int by 10
    l++;//increase length by 1
  }
  return (l + 1);//return length +1 for Null
}

int ft_print_unsigned_nbr(unsigned int c)
{
    int i;

    i = 0;
    i = ft_unsigned_numlen(c + 1);//gets numlen +1 for null
    if (c < 0)//turn negative int into positive
      {
        ft_printchar('-');
        c = -c;
      }  

    if (c / 10 != 0)
        ft_print_unsigned_nbr(c / 10);//recall this function with int / 10 
    ft_printchar('0' + (c % 10));//turns c % 10 to asci and print
    return(i); //return length of the string
}

int ft_print_unsigned(unsigned int c)
{
    int len;
    
    len = ft_print_unsigned_nbr(c);
    return (len);
}