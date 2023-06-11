/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:43:27 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/10 19:44:05 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strjoin_free(const char *s1, const char *s2)
{
	char	*ret;
	int		i;

	if (!s1 || !s2)
		return (0);
	ret = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (i++, s1[i] != '\0')
		ret[i] = s1[i];
	j = -1;
	while (j++, s2[j] != '\0')
		ret[i++] = s2[j]
	ret[i] = '\0';
	free(s1);
	free(s2);
	return (ret);
}


char	*line(char *lake, char *buffer)
{
	char	*temp;
	
	lake = ft_strjoin_free(lake, buffer);
	temp = malloc((ft_strlen(lake) + ft_strlen(buffer) + 1) * sizeof(char));
	
	return (lake);
}

char	*get_next_line(int fd)
{
	int			bytes_read;
	char		*buffer;
	static char *lake;

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	lake = line(lake, buffer);
	printf("%s\n", lake);
	return (lake);
}

int	main(void)
{
	char *line;
	int	fd;

	fd = open("file.txt", 'r');
	line = get_next_line(fd);
	printf("%s \n", line);
	return (0);
}