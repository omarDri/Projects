/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:36:29 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:36:32 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (0);
	arr = malloc(nmemb * size);
	if (!arr)
		return (0);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
