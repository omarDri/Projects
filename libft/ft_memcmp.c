/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:53 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:38:55 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*((char *) s1 + i) - *((char *) s2 + i) != 0)
			return (*((unsigned char *) s1 + i) - *((unsigned char *) s2 + i));
		i++;
	}
	return (0);
}
