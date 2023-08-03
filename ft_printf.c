/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odouhri <odouhri@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:12:45 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/03 15:00:42 by odouhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_formats (va_list args, const char format)
{
    int print_length = 0;

    print_length = 0;
    //check what format the input is and run the functions accordingly 
    if (format =='c') //print char and return length
        print_length += ft_printchar(va_arg(args, int));
    else if (format == 's') //printstr and return length
        print_length += ft_putstr(va_arg(args, char *));
    else if (format == 'p') //print ptr in hex and return length
        print_length += ft_print_ptr(va_arg(args, unsigned long long)); 
    else if (format == 'd' || format == 'i') //printnmbr and return lengt of the string
        print_length += ft_printnbr(va_arg(args, int));
    else if (format == 'u') //print unsigned int and return lengt of the string
        print_length += ft_print_unsigned(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')//Print unsigned as hex
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
    else if (format == '%') //print percent
        print_length += ft_printpercent(); 
    return (print_length); //return the length of the string
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
