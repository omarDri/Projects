/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:33:05 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/18 19:33:05 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"


char    *ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	ft_strlcat(ret, s2, len + 1);
	return (ret);
}

int main(void)
{
    char const str[20] = "Heo";
    char const str2[20] = "Hello";
    char    *ret;

    // str = "Hello";
    // str2 = "Hello";
    ret = ft_strjoin(str, str2);
    printf("the pointer is %s", ret);
}