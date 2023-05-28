/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:01:03 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/27 19:32:45 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	ret_s;
	size_t	iter;

	ret_s = 0;
	iter = 0;
	while (*s)
	{
		if (*s == c)
			*s++;
		if (*s != c)
			iter++;
	}
}
