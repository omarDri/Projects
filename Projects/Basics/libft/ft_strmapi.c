/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 05:12:25 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/21 05:12:25 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char    *ret;

    if (!s)
        return (0);
    i = 0;
    ret = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (ret == 0)
        return (0);
    while (s[i] != '\0')
    {
        ret[i] = f(i, s[i]);
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
