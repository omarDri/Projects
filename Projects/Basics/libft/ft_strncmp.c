/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:26:32 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:32 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncmp(char *str, char *to_find, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k] && str[k + i] != '\0' && k < size)
			k++;
		if (to_find[k] == '\0' || k >= size)
			return (str + i);
		i++;
		k = 0;
	}
	return (0);
}
