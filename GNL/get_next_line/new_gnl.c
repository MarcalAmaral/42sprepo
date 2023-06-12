/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_gnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:43:27 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/11 19:11:15 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1 - limpar o inicio da próxima linha (concluded)
	2 - salvar o incio da próxima linha 
	3 - inserir o início da pŕoxima linha no local certo
*/

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

static int	count_words(const char *s, char c);
static char	*substr_split(const char *s, int start, int end);

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

char	**ft_split(char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	int		index;

	if (!s)
		return (0);
	ret = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	j = 0;
	i = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			ret[j++] = substr_split(s, index, i);
			index = -1;
		}
		i++;
	}
	return (ret);
}

static char	*substr_split(const char *s, int start, int end)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *) malloc((end - start + 1) * sizeof(char));
	while (start < end)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}

static int	count_words(const char *s, char c)
{
	int	counter;
	int	target;

	counter = 0;
	target = 0;
	while (*s)
	{
		if (*s != c && target == 0)
		{
			target = 1;
			counter++;
		}
		else if (*s == c && target > 0)
			target = 0;
		s++;
	}
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

char	**clean_lake(char *lake)
{
	char		**matriz;
	char		*str;
	char		*temp;
	int			i;
	int			j;

	matriz = malloc(sizeof(char *) * 2);
	i = 0;
	while (lake[i] != '\n')
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
	i = 0;
	while (lake[i] != '\n')
		i++;
	while (j++, lake[j + 1])
		temp[i++] = lake[j + 1];
	matriz = ft_split(lake, '\n');
	return (matriz);
}

char	*get_next_line(int fd)
{
	int			bytes_read;
	char		*buffer;
	static char	*lake;
	char		**matriz;

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
	matriz = malloc(sizeof(char *) * 2);
	matriz = clean_lake(lake);
	lake = matriz[1];
	return (matriz[0]);
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("file.txt", 'r');
	line = get_next_line(fd);
	printf("%s \n\n", line);
	line = get_next_line(fd);
	printf("%s \n\n", line);
	return (0);
}
