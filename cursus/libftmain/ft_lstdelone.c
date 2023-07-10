/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_BONUS.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:57:32 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/09 17:25:35 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = lst->next;
	del(lst->content);
	free(lst);
	lst = temp;
	return ;
}