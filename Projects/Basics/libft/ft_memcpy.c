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

void    ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n)
    {
        *((char*) dest + i) = *((char*) src + i);
        i++;
    }
    return (dest);
}
