/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:43:27 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/10 21:37:41 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1 - limpar o inicio da próxima linha (concluded)
	1.5 - salvar a primeira linha como temp
	2 - salvar o incio da próxima linha
	3 - inserir o início da pŕoxima linha no local certo
*/

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	counter;

	counter = 0;
	if (!s)
		return (0);
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*ret;
	int		i;
	int		j;

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
		ret[i++] = s2[j];
	ret[i] = '\0';
	return (ret);
}


char	*line(char *lake, char *buffer)
{
	// char	*temp;

	lake = ft_strjoin_free(lake, buffer);
	// temp = malloc((ft_strlen(lake)) + 1) * sizeof(char);
	return (lake);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char) c)
	{
		if (*s == 0)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*clean_lake(char *lake)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while(lake[i] != '\n')
		i++;
	str = malloc((i + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (lake[j] && lake[j] != '\n')
	{
		str[i] = lake[j];
		i++;
		j++;
	}
	str[i] = lake[j];
	return (str);
}

char	*get_next_line(int fd)
{
	int			bytes_read;
	char		*buffer;
	static char *lake;

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	lake = malloc(100 * sizeof(char));
	while (bytes_read > 0)
	{
		lake = line(lake, buffer);
		if (ft_strchr(lake, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	lake = clean_lake(lake);
	return (lake);
}

int	main(void)
{
	char *line;
	int	fd;

	fd = open("file.txt", 'r');
	line = get_next_line(fd);
	printf("%s \n\n", line);
	line = get_next_line(fd);
	printf("%s \n\n", line);
	return (0);
}