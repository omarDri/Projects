/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:07:12 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/23 00:07:12 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, unsigned int n)
{
	int				nl;
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	nl = '\0';
	i = 0;
	while (i < n)
	{
		str[i] = nl;
		i++;
	}
	return (s);
}
