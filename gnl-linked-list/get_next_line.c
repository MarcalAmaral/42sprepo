/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:34:34 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/29 00:01:14 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

size_t	ft_strlen(char *string)
{
	size_t	counter;

	counter = 0;
	while (string[counter] != '\0')
		counter++;
	return (counter);
}

void	print_list(t_list *list)
{
	t_node	*init;

	init = list->init;
	while (init != NULL)
	{
		printf("%c", init->content);
		init = init->next;
	}
	printf("\n\n");
}

t_list	*get_next_line(int fd)
{	
	t_list	list;
	t_node	*temp;

	list.bytes_read = read(fd, list.buffer, BUFFER_SIZE);
	while (list.buffer[list.len] != '\0')
	{
		temp = list.line;
		insert_string_end(&list, list.buffer[list.len]);
	}
	return (&list);
}

int	main(void)
{
	// t_list	list;
	
	int		fd;

	fd = open("file.txt", O_RDONLY);
	print_list(get_next_line(fd));
	// list.init = NULL;
	// list.len = 0;
	// insert_string_end(&list, "Abobrinha ");
	// insert_string_end(&list, "Abacate");
	// insert_string_init(&list, "feijaozinho ");
	// print_list(&list);
	return (0);
}
