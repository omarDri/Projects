/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:35:38 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:35:39 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((char *) s + i) = '\0';
		i++;
	}
}