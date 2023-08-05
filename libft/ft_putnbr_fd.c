/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:39:41 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:39:43 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nums[11];
	int		mod;
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
		write(fd, "-", 1);
	i = 0;
	while (n != 0)
	{
		mod = n % 10;
		n /= 10;
		if (mod < 0)
			mod *= -1;
		nums[i] = mod + 48;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(fd, &nums[i], 1);
		i--;
	}
}
