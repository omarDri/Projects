/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:17:23 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/12 13:17:23 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] < 65 || (str[c] > 90 && str[c] < 97) || str[c] > 122)
            return(0);
        c++;
    }
    return(1);
}