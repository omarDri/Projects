/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:39:36 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/18 17:39:36 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char	*str;
	unsigned int	i;
    unsigned int    c;

    c = ft_strlen(s1) + 1;
    i = 0;
	str = (char*)malloc(sizeof(*s1) * c);
	if (!s1)
		return (NULL);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int main(void)
{
    char  *str;
    char    *ret;

    str = "Hello";
    ret = ft_strdup(str);

    printf("the pointer is %s", ret);
}