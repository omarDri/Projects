/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortmann <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:38:18 by aortmann          #+#    #+#             */
/*   Updated: 2023/08/04 14:38:21 by aortmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*head;

	newlst = 0;
	head = lst;
	while (head != 0)
	{
		head->content = f(head->content);
		head = head->next;
	}
	head = lst;
	while (head != 0)
	{
		ft_lstadd_back(&newlst, ft_lstnew(head->content));
		head = head->next;
	}
	if (head != 0)
		del(head->content);
	return (newlst);
}
