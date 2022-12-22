/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:49:12 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/18 18:49:12 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int	i;
	int	c;
	char	*str;

	i = 0;
	c = 0;
	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);

	while (s[i] != '\0')
	{
		if (i >= start && c < len)
		{
			str[c] = s[i];
			c++;
		}
		i++;
	}
	str[c] = 0;
	return (str);
}

// int main (void)
// {
//     char const  s[] = "     HelloWorld";
//     unsigned int    i;
//     size_t  len;
//     char    *ret;

//     len = 10;
//     i = 3;
//     ret = ft_substr(s, i, len);
// 	printf("the substring is %s", ret);

// }
// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len