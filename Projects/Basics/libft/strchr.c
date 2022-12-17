/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <aortmann@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:54:19 by aortmann          #+#    #+#             */
/*   Updated: 2022/12/15 01:54:19 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *str, int c)
{
	int i;
	char *ch;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == c)
			ch = &str[i];
		i++;
	}
	str = ch;
	if (c == '\0')
		return(&str[i]);
	else
		return (str);
	return(0);
}
