/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:53:04 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/15 21:50:44 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		c;

	c = -1;
	if (!s)
		return (NULL);
	if (ft_strlen(s + start) < len)
		return (NULL);
	if (ft_strlen(s) < len)
		
	substr = (char *) malloc(sizeof(char) * len + 1);
	while (c++, s[start] && len--)
	{
		substr[c] = s[start];
		start++;
	}
	substr[c] = '\0';
	return (substr);
}
