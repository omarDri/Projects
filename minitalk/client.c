/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:33:04 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/23 19:47:56 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk/printf/ft_printf.h"
#include "../minitalk/printf/libft/libft.h"
#include "minitalk.h"

void string_to_binary(pid_t server_pid, const char* str)
{
    int j;
    size_t i;
    
    i = 0;
    // j = 7;
    while (str[i] != '\0') 
    {
        j = 64;
        while (j > 0) 
        {
            if ((str[i] & j) > 0)
                kill(server_pid, SIGUSR1);
            usleep(2000);
            j /= 2; // Move to the next bit position
            kill(server_pid, SIGUSR2);
            usleep(2000);
        }
        i++; // Move to the next character in the string
    }
}

int main(int argc, char* argv[])
{
    if (argc != 3) 
    {
        ft_printf("usage: <server_pid> <string_to_send>\n"); // Print message 
        return (1); // Return error
    }
    pid_t server_pid = ft_atoi(argv[1]); // Convert server PID from string to integer
    const char* input_string = argv[2]; // Get the input string from command line
    ft_printf("Sending message to server with PID: %d\n", server_pid);
    string_to_binary(server_pid, input_string); // Start sending characters to the server
    ft_printf("Message sent.\n");
    return 0; // Return success
}