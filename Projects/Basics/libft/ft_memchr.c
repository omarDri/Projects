/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 02:11:19 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/15 02:11:19 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strlen.c"

void    *ft_memchr(const void *str, int c, unsigned int n)
{
	int i;
	unsigned char   *h;
    unsigned char   *ch;

	i = 0;
    h = (unsigned char *)str;
	while (*h != '\0')
	{	
		if (*h == c)
		    return(h);
		*h++;
	}
	if (c == '\0')
		return(h);
	else
		return (h);
	return(NULL);

}
