/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:36:25 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/28 18:33:48 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Creating a count words
char	**ft_split(const char *s, char c);
size_t	ft_count_words(const char *s, char c);

int	main(void)
{
	size_t		i;
	size_t		i_old;
	const char	*s;
	char		*s_cpy;
	char		c;
	char		**ret;

	s = "                   Hello              ABOBRINHA abacate amarelo              World! Ola, Mundo!";
	c = 0x20;
	i = 0;
	printf("%lu \n", ft_count_words(s, c));
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	alloc;
	size_t	i;

	
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c)
		{
			i++;
			s++;
		}
		sub = ft_substr(s, i, i);
		ret[i] = sub;
	}
	return (ret);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:01:03 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/28 18:28:27 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	int		len_ret;
	int		index_ret;
	int		iter;

	index_ret = -1;
	if (s == NULL)
		return (NULL);
	len_ret = count_words(s, c);
	ret = (char **) ft_calloc(len_ret + 1, sizeof(char *));
	if (ret == NULL)
		return (NULL);
	while (index_ret++, index_ret < len_ret)
	{
		iter = 0;
		while (*s && *s == c)
			s++;
		while (*(s + iter) && *(s + iter) != c)
			iter++;
		*(ret + index_ret) = ft_substr(s, 0, iter);
		if (*(ret + index_ret) == NULL)
			return (NULL);
		s += iter;
	}
	return (ret);
}
