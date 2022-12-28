/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:47:08 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/13 22:47:08 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	unsigned char	*haystack;
	unsigned char	*needle;
	unsigned int	i;

	i = 0;
	haystack = (unsigned char *)str1;
	needle = (unsigned char *)str2;
	while (i < n)
	{
		if (*haystack != *needle)
			return (*haystack - *needle);
		i++;
		haystack++;
		needle++;
	}
	return (0);
}
