/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:21:50 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/14 17:49:04 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t	len)
{
	size_t	little_len;
	size_t	i;

	i = -1;
	little_len = ft_strlen(little);
	if (!little)
		return ((char *) big);
	while (i++, big[i] && (little_len - 1) < len--)
	{
		if (ft_strncmp((big + i), little, little_len) == 0)
			return ((char *) little);
	}
	return (NULL);
}
