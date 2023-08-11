/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 03:54:48 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/11 20:19:57 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int c)
{
	int	i;

	i = 0;
	while (c) 
	{
		c /= 16;
		i++;
	}
	return (i);
}

void	ft_put_hex(unsigned int c, const char format)
{
	if (c >= 16)
	{
		ft_put_hex(c / 16, format);
		ft_put_hex(c % 16, format);
	}
	else 
	{
		if (c < 10)
			ft_putchar(c + '0');
		else 
		{
			if (format == 'x')
				ft_putchar(c - 10 + 'a');
			if (format == 'X')
				ft_putchar(c - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int c, const char format)
{
	if (c == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		ft_put_hex(c, format);
	return (ft_hex_len(c));
}
