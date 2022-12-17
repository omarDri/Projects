/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:00:26 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/14 23:00:26 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_H
# define libft_Hnt

int    ft_atoi(char *str);
void	*ft_bzero(void  *s, unsigned int n);
void    ft_is_negative(int nbr);
int ft_isalpha(char *str);
int ft_isalnum(char *str);
int ft_isascii(char *str);
int ft_isdigit(char *str);
void    ft_is_negative(int nbr);
int	ft_isprint(char *str);
void *ft_memcpy(void *dest, void * src, unsigned int n);
void *ft_memmove(void *s, int c, unsigned int n);
void *ft_memset(void *s, int c, unsigned int n);
char *ft_strchr(char *str, int c);
int    ft_strlcat(char *src, char *dest, int size);
unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size);
int ft_strlen (char *str);
char	*ft_strncmp(char *str, char *to_find, int size);
char	*ft_strstr(char *str, char *to_find, int size);
char    *ft_tolower(char *src);
char    *ft_toupper(char *src);
char *ft_strrchr(char *str, int c);
char	*ft_strstr(char *str, char *to_find, int size);

# endif 