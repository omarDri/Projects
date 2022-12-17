/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:59:00 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/15 19:59:00 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    int    ret;
    int    c;
    int    i;

    ret = 0;
    c = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] < 48 || str[i] > 57)
        {
             if (str[i] == '-')
                c++;
            i++;
        }
        while (str[i] > 47 && str[i] < 58)
        {
            ret = ret * 10 + str[i] - 48;
            i++;
        }
        break;
    }
    if (c % 2 != 0)
        ret = -ret;
    return (ret);
}
