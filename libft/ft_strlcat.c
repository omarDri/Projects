/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:40:39 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:40:42 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dstsize;
	unsigned int	srcsize;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size == 0 || size < dstsize)
		return (srcsize + size);
	i = 0;
	while (src[i] != '\0' && dstsize + i < size - 1)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
