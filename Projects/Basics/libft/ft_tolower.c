/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:20:50 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/12 14:20:50 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_tolower(char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
    {
        if (src[i] >= 'A' && src[i] <= 'Z')
            src[i] = src[i] + 32;
        i++;
    }
    return (src);
}

int main(void)
{
    char src[] = "HELLOWORLD12";

    ft_tolower(src);
    printf("%s", src);
    return(0);
}