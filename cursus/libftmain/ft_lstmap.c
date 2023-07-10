/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_BONUS.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:22:23 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/09 17:52:14 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	head = new;
	lst = lst->next;
	while (lst)
	{
		new -> next = ft_lstnew(f(lst->content));
		if(!new)
		{
			del(new);
			free(lst);
		}
		new = new->next;
		lst = lst->next;
	}
	return (head);
}