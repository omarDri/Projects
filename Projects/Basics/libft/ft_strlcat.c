/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:25:30 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/13 20:25:30 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_strlen.c>

unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int sz)
{
    unsigned int    i;
    int srcl;
    int dl;
    int size;

    size = sz - 1;
    dl = ft_strlen(dest) + 1;
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
    dl = ft_strlen(dest);
    return (dl + i);
}
