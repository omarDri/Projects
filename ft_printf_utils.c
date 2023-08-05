/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:41:02 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 18:22:05 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_putstr(char *str)
{
    int len = 0;
    while (*str)
    {
        write(1, str, 1);
        str++;
        len++;
    }
    return len; // Return the length of the printed string
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
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

int ft_putchar(int c)
{
    write(1, &c, 1);
    return(1);
}

int ft_printnbr(int c)
{
  char *str;
  int str_len;
  
  str = ft_itoa(c);
  ft_putstr(str); // Use puts() or your custom ft_putstr() implementation to print the string
  str_len = ft_strlen(str); // Calculate the length of the printed string
  free(str);
  return str_len; // Return the length of the printed string
}

int ft_printpercent(void)
{
  write(1, "%", 1);
  return (1);
}
