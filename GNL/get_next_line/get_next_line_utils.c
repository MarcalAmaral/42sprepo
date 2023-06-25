/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:07:52 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/25 18:36:55 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s)
{
	size_t	i;
	size_t	lenght;
	char	*n_string;

	i = 0;
	lenght = ft_strlen(s);
	n_string = (char *) malloc((lenght + 1) * sizeof(char));
	if (!n_string)
		return (n_string);
	while (i != lenght)
	{
		n_string[i] = s[i];
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}

char	*ft_strchr(char *lake, int c)
{
	size_t	i;

	i = 0;
	while (lake[i] != '\0')
	{
		if (lake[i] == c)
			return ((lake + i));
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	while (*s && s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	int		lens1;
	int		lens2;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ret = (char *) malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = -1;
	while (i++, i < lens1)
		ret[i] = s1[i];
	j = -1;
	while (j++, j < lens2)
	{
		ret[i] = s2[j];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*get_line(char *lake)
{
	char	*line;
	int		i;

	i = 0;
	while (lake[i] != '\n' && lake[i] != '\0')
		i++;
	if (lake[i] == '\n')
		i++;
	line = malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (lake[i] != '\n' && lake[i] != '\0')
	{
		line[i] = lake[i];
		i++;
	}
	line[i] = lake[i];
	if (line[i] != '\0')
		line[++i] = '\0';
	return (line);
}
