/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:39:05 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/27 17:53:26 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s_string;
	size_t	end_string;
	size_t	alloc;
	char	*ptr;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return ((char *) s1);
	s_string = 0;
	end_string = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + s_string)))
		s_string += 1;
	while (ft_strchr(set, *(s1 + end_string - 1)))
		end_string -= 1;
	alloc = end_string - s_string;
	ptr = ft_substr(s1, s_string, alloc);
	return (ptr);
}
