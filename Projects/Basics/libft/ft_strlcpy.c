/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:25:05 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/13 18:25:05 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int    i;
    int srcl;
    int dl;

    dl = ft_strlen(dest);
    i = 0;
    if (size == 0)
        return(srcl);
    while (i < size - 1)
    {
        dest[i + dl] = src[i];
        if (i == size)
            dest[i] = '\0';
        i++;
    }
    return (dl + i);
}
