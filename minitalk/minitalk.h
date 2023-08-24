/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:22:50 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/23 19:11:05 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
// #include "/workspaces/Projects/Projects/minitalk/printf/libft/libft.h"
//#include "libft/libft.h"

void string_to_binary(pid_t server_pid, const char* str);
void	sig_handler(int signo);
#endif