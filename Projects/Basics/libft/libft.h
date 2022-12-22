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
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int ft_atoi(char *str);
void	*ft_bzero(void  *s, unsigned int n);
void    *ft_calloc(unsigned int c, unsigned int size);
void    ft_is_negative(int nbr);
int ft_isalpha(char *str);
int ft_isalnum(char *str);
int ft_isascii(char *str);
int ft_isdigit(char *str);
void    ft_is_negative(int nbr);
int ft_isprint(char *str);
char    *ft_itoa(int n);
void    *ft_memchr(const void *str, int c, unsigned int n);
int ft_memcmp(const void *str1, const void *str2, unsigned int n);
void    *ft_memcpy(void *dest, void * src, unsigned int n);
void    *ft_memmove(void *s, int c, unsigned int n);
void    *ft_memset(void *s, int c, unsigned int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(const char *s, char c);
char    *ft_strchr(char *str, int c);
char    *ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *str);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncmp(char *str, char *to_find, int size);
char	*ft_strstr(char *str, char *to_find, int size);
char    *ft_tolower(char *src);
char    *ft_toupper(char *src);
char    *ft_strchr(char *str, int c);
char    *ft_strrchr(char *str, int c);
char	*ft_strnstr(char *str, char *to_find, int size);
char    *ft_substr(char const *s, unsigned int start,size_t len);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list  *ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);

#endif 