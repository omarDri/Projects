/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:08:27 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/18 17:08:27 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int c, unsigned int size)
{
	void	*ptr;

	ptr = (void*)malloc(c * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, c);
	return (ptr);
}