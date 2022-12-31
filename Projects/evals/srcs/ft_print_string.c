/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:23:41 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/12 13:23:41 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_string(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar (str[i]);
        i++;
    }
    
}

int main(void)
{
    char    *str;

    str = "Hello World";
    ft_print_string(str);
    return (0);
}
