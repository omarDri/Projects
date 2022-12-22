/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:59:21 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/19 17:59:21 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_dgtcount(int n)
{
  int i;
  
  i = 0;
  while (n != '\0')
  {
    n = n / 10;
    i++;
  }
  return(i + 1);
}

char  *ft_itoa(int n)
{
    int c;
    int i;
    char    *ret;
    char  dgt[] = "0123456789";
    
    i = 0;
    c = ft_dgtcount(n);
    ret = malloc(sizeof(char) * (c));
    if (!ret || ret == 0)
      return(0);
    if (n < 0)
        ret[0] = '-';
    while (n)
        {
           if (n > 0)
            ret[--c] = dgt[n % 10];
        else
            ret[--c] = dgt[n % 10 * -1];
        n /= 10;
        }
}

int main (void)
{
    int i;

    i = 0;
    ft_itoa(i);
}