/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:41:57 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:41:59 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		first;
	int		last;

	first = 0;
	last = ft_strlen(s1);
	while (first < last && (check_char(set, s1[first])
			|| check_char(set, s1[last - 1])))
	{
		if (check_char(set, s1[first]) == 1)
			first++;
		if (check_char(set, s1[last - 1]) == 1)
			last--;
	}
	str = malloc((last - first + 1) * sizeof(char));
	str[last - first] = '\0';
	i = 0;
	while (first < last)
	{
		str[i] = s1[first++];
		i++;
	}
	return (str);
}
