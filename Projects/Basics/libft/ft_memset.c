/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:17:16 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/13 21:17:16 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, unsigned int n)
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