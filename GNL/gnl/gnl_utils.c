/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:07:52 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/18 19:55:11 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

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

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ret = (char *) malloc((lens1 + lens2 + 1) * sizeof(char));
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
	free(s1);
	free(s2);
	return (ret);
}

char	*get_line(char *lake)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (lake[i] != '\n' && lake[i] != '\0')
		i++;
	if (lake[i] == '\n')
	{
		line = malloc((i + 2) * sizeof(char));
		line[i] = '\n';
		line[i + 1] = '\0';
	}
	else
	{
		line = malloc((i + 1) * sizeof(char));
		line[i] = '\0';
	}
	j = -1;
	while (j++, j < i)
		line[j] = lake[j];
	line[j] = '\0';
	return (line);
}

/* void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
 */