/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:32:51 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/23 19:59:31 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "../minitalk/printf/ft_printf.h"

void	sig_handler(int signo)
{
	static int	bits = 64;
	static char	ascii = 0;

	if (signo == SIGUSR2)
	{
		bits /= 2;
		if (bits == 0)
		{
			write(1, &ascii, 1);
			ascii = 0;
			bits = 64;
		}
        // ft_printf("Received SIGUSR1\n"); // Debug message for SIGUSR1
	}
	else if (signo == SIGUSR1)
	{
		ascii += bits;
		// bits /= 2;
        // ft_printf("Received SIGUSR2\n"); // Debug message for SIGUSR2
	}
    else
    {
        ft_printf("Received an unknown signal: %d\n", signo); // Debug message for unknown signals
    }
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);

	while (1)
		pause();
	return 0;
}