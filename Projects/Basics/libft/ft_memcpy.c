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

#include"ft_strlen.c"

void *ft_memcpy(void *dest, void * src, unsigned int n)
{
    unsigned int i;
    char *dest1;
    char *src1;
    unsigned int    sl;

    src1 = (unsigned char *)src;
    dest1 = (unsigned char *)dest;
    
    i = 0;
    sl = ft_strlen(src);
    while (i < sl && i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return(dest1);
}
