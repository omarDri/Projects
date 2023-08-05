/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:42:04 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:42:07 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*str;
	unsigned int	i;
	unsigned int	ssize;

	ssize = ft_strlen(s);
	if (start >= ssize)
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (ssize - start < len)
		len = ssize - start;
	str = malloc((len + 1) * sizeof(char));
	str[len] = '\0';
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
