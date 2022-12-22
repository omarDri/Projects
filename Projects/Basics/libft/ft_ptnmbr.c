/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnmbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 06:54:51 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/22 06:54:51 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// 2147483647
// -2147483648
void ft_putnbr(int nbr)
{
    if (nbr > -2147483648 || nbr <= 2147483647)
    {
        if (nbr == -2147483648)
        {
            ft_putchar('-');
            ft_putchar('2');
            ft_putnbr(147483648);
            return ;
        }
        else if (nbr >= 10)
        {
		    ft_putnbr(nbr / 10);
		    ft_putnbr(nbr % 10);
	    }
        else if (nbr < 0)
        {
            nbr = -nbr;
		    ft_putchar('-');
		    ft_putnbr(nbr);
        }
        else
            ft_putchar(nbr + '0');
    }
}

int main(void)
{
    int input;

    input = -1;
    ft_putnbr(input);
    return(0);
}