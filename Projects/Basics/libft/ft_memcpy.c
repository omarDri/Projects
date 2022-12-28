/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:51:30 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/13 23:51:30 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	void			*ret;

	i = 0;
	ret = dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*((char *) dst + i) = *((char *) src + i);
		i++;
	}
	return (ret);
}
