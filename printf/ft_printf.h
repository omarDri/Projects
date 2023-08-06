/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:14:08 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/06 23:25:37 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_hex_len(unsigned int c);
void	ft_put_hex(unsigned int c, const char format);
int		ft_print_hex(unsigned int c, const char format);
int		ft_unsigned_numlen(int c);
int		ft_print_unsigned_nbr(int c);
int		ft_print_unsigned(unsigned int c);
int		ft_print_str(char *str);
int		ft_numlen(int c);
int		ft_putchar(int c);
int		ft_printnbr(int c);
int		ft_printpercent(void);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_ptrl(uintptr_t ptr);
int		ft_print_ptr(unsigned long long ptr);
#endif