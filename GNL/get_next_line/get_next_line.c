/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:20:21 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/11 19:20:32 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strchr(char *s, int c)
{
	while (*s != (char) c)
	{
		if (*s == 0)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strjoin_free(char *lake, char *buffer)
{
	char	*ret;
	int		i;
	int		j;

	if (!lake || !buffer)
		return (0);
	ret = (char *) malloc(ft_strlen(lake) + ft_strlen(buffer) + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (i++, lake[i] != '\0')
		ret[i] = lake[i];
	j = -1;
	while (j++, buffer[j] != '\0')
		ret[i++] = buffer[j];
	free(lake);
	ret[i] = '\0';
	return (ret);
}

char	**clean_lake(char *lake)
{
	char	**matriz;
	int		i;
	int		j;

	i = 0;
	matriz = (char **) malloc(3 * sizeof(char *));
	while (lake[i] != '\n')
		i++;
	matriz[0] = malloc((i + 1) * sizeof(char));
	j = -1;
	while (j++, j < i)
		matriz[0][j] = lake[j];
	matriz[0][j] = '\0';
	matriz[1] = malloc(ft_strlen(lake) - i);
	i = 0;
	while (j++, j < ft_strlen(lake))
		matriz[1][i++] = lake[j];
	free(lake);
	matriz[2] = "\0";
	return (matriz);
}

char	*get_next_line(int fd)
{
	char		**matriz;
	static char	*lake;
	char		*buffer;
	int			bytes_read;
	char		*line;

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (!lake)
		lake = malloc(BUFFER_SIZE * sizeof(char));
	if (!lake)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		lake = ft_strjoin_free(lake, buffer);
		if (ft_strchr(lake, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	matriz = (char **) malloc(2 * sizeof(char *));
	matriz = clean_lake(lake);
	lake = matriz[1];
	line = matriz[0];
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("file.txt", 'r');
	printf("%s \n", get_next_line(fd));
	return (0);
}