/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:39:03 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/14 00:39:03 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_strlen.c"
#include<stdio.h>


void *ft_memmove(void *s, int c, unsigned int n)
{
    unsigned int    i;
    unsigned char    *str;

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return(s);
}

int    main(void)
{
    unsigned char c;
    unsigned char    str[]  = "ALLESKLAR";
    int    size;
    char *ret;

    c = 'a';
    size = 2;
    ret = ft_memset(str, c, size);
    printf("%s", ret);
    return(0);
}
	