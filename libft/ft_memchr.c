/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odouhri <odouhri@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 05:11:12 by odouhri           #+#    #+#             */
/*   Updated: 2023/03/17 14:51:00 by odouhri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*((char *) s + i) == (char) c)
		{
			return ((char *) s + i);
		}
		i++;
	}
	return (0);
}
