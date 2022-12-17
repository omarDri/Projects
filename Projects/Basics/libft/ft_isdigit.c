/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:19:25 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/12 13:19:25 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

int ft_isdigit(char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] < 48 || str[c] > 57)
            return(0);
        c++;
    }
    return(1);
}
