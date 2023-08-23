/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 03:25:42 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/06 23:01:19 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Function to calculate the length of an unsigned integer */

static int	unbrlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/* Function to convert an unsigned integer to a string */

static void	convert_unbr(char *str, unsigned int n, int size, int isovf)
{
	int	count;

	count = size;
	while (n > 0)
	{
		str[count - 1] = n % 10 + '0';
		n /= 10;
		count--;
	}
	if (isovf == 1)
		str[size - 1]++;
}

/* Function to handle negative numbers and convert to string */

static char	*uneg_num(unsigned int i)
{
	char	*str;
	int		isovf;
	int		size;
	int		n;

	n = i;
	isovf = 0;
	if (n == -2147483648)
	{
		n += 1;
		isovf = 1;
	}
	n *= -1;
	size = unbrlen(n) + 1;
	str = malloc((size + 1) * sizeof(char));
	str[size] = '\0';
	str[0] = '-';
	convert_unbr(str, n, size, isovf);
	return (str);
}

/* Function to convert unsigned integer to string */

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		size;

	if (n > 0) 
	{
		size = unbrlen(n); 
		str = malloc((size + 1) * sizeof(char)); 
		str[size] = '\0'; 
		convert_unbr(str, n, size, 0);
	}
	else if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = 0 + '0';
		str[1] = '\0';
	}
	else
		str = uneg_num(n);
	return (str);
}

/* Function to print unsigned integers */

int	ft_print_unsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_length += ft_print_str(num);
		free(num);
	}
	return (print_length);
}
