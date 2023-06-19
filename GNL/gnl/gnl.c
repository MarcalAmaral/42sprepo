/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:35:21 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/18 20:00:30 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "gnl.h"

char	*clean_lake(char *lake)
{
	char	*lake_clear;
	size_t	len_lake;
	size_t	i;
	size_t	j;

	i = 0;
	while (lake[i] != '\n' && lake[i] != '\0')
		i++;
	len_lake = ft_strlen(lake);
	lake_clear = malloc((len_lake - i + 1) * sizeof(char));
	j = 0;
	while (i++, i <= (len_lake - 1))
	{
		lake_clear[j] = lake[i];
		j++;
	}
	lake_clear[j] = '\0';
	free(lake);
	return (lake_clear);
}

char	*get_next_line(int fd)
{
	static char	*lake;
	char		*ret;
	char		*buffer;
	int			bytes_read;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	if (!lake)
		lake = malloc(BUFFER_SIZE * sizeof(char));
	while (bytes_read >= 0)
	{
		lake = ft_strjoin(lake, buffer);
		if (ft_strchr(lake, '\n'))
		{
			ret = get_line(lake);
			lake = clean_lake(lake);
			return (ret);
		}
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
	}
	return (NULL);
}

int	main(void)
{
	char	*s;
	int		fd;

	fd = open("file.txt", 'r');
	s = get_next_line(fd);
	printf("%s \n", s);
	free(s);
	s = get_next_line(fd);
	printf("%s \n", s);
	free(s);
	return (0);
}
