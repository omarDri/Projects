/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 06:45:54 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/22 06:45:54 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_toupper(char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
    {
        if (src[i] >= 'a' && src[i] <= 'z')
            src[i] = src[i] - 32;
        i++;
    }
    return (src);
}

int main(void)
{
    char src[] = "HELLOWORLD12";

    ft_toupper(src);
    printf("%s", src);
    return(0);
}