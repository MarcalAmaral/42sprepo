/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:30:43 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/28 23:56:06 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 30
# endif

# include <stdlib.h>

typedef struct s_node {
	char			content;
	struct s_node	*next;
}	t_node;

typedef struct s_list {
	t_node	*init;
	int		bytes_read;
	int		len;
	char	buffer[BUFFER_SIZE];
	t_node	*line;
}	t_list;

void	print_list(t_list *list);
void	insert_string_end(t_list *list, char *content);
void	insert_string_init(t_list *list, char *content);
void	insert_end(t_list *list, char content);
void	insert_init(t_list *list, char content);
size_t	ft_strlen(char *string);
t_node	*new_node(char content);

#endif