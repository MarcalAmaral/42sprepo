/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:39:04 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/28 23:55:52 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_node	*new_node(char content)
{
	t_node	*new;

	new = (t_node *) malloc(sizeof(t_node));
	new->content = content;
	new->next = NULL;
	return (new);
}

void	insert_init(t_list *list, char content)
{
	t_node	*temp;

	temp = (t_node *) malloc(sizeof(t_node));
	temp->content = content;
	temp->next = list->init;
	list->init = temp;
	list->len++;
}

void	insert_end(t_list *list, char content)
{
	t_node	*temp;
	t_node	*new;

	new = (t_node *) malloc(sizeof(t_node));
	new->content = content;
	new->next = NULL;
	if (list->init == NULL)
	{
		list->init = new;
		return ;
	}
	else
	{
		temp = list->init;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		list->len++;
	}
	return ;
}

void	insert_string_init(t_list *list, char *content)
{
	int	i;

	i = ft_strlen(content);
	if (!content)
		return ;
	while (i--, content[i] != '\0')
		insert_init(list, content[i]);
	return ;
}

void	insert_string_end(t_list *list, char *content)
{
	int	i;

	i = -1;
	if (!content)
		return ;
	while (i++, content[i] != '\0')
		insert_end(list, content[i]);
	return ;
}
