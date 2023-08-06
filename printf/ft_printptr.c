/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:17:09 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/06 23:35:01 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_ptrl(uintptr_t ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (1);
	while (ptr)
	{
		ptr /= 16;
		i++;
	}
	return (i);
}

void	ft_put_ptr(uintptr_t ptr)
{
	if (ptr == 0)
	{
		ft_print_str("Pointer value: (nil)");
		return;
	}
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ptr %= 16;
	}
	if (ptr < 10)
		ft_putchar(ptr + '0');
	else
		ft_putchar(ptr - 10 + 'a');
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
	{
		ft_print_str("(nil)");
		return (5);
	}
	i += write(1, "0x0", 2);
	ft_put_ptr(ptr);
	i += ft_ptrl(ptr);
	return (i);
}
