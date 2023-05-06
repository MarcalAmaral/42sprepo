/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:14:44 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/06 05:49:31 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t		i;
	char		*s_dest;
	char		*s_src;

	i = 0;
	s_dest = (char *) dest;
	s_src = (char *) src;
	if (dest == NULL)
		return (NULL);
	if ((src + n > dest) || (src > dest))
	{
		i = n + 1;
		while (n--)
			s_dest[i] = s_src[i];
	}
	s_dest[n + 1] = '\0';
	return (dest);
}
