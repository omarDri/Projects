/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odouhri <odouhri@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:41:02 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/03 14:53:55 by odouhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i; //print string

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);//return str length
}

int ft_numlen(int c)
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

int ft_printchar(int c)
{
    write(1, &c, 1);
    return(1);
}

int ft_printnbr(int c)
{
    int i;

    i = 0;
    i = ft_numlen(c + 1);//gets numlen +1 for null
    if (c < 0)//turn negative int into positive
      {
        ft_printchar('-');
        c = -c;
      }  

    if (c / 10 != 0)
        ft_printnbr(c / 10);//recall this function with int / 10 
    ft_printchar('0' + (c % 10));//turns c % 10 to asci and print
    return(i); //return length of the string
}

int ft_printpercent(void)
{
  write(1, "%", 1);
  return (1);
}
