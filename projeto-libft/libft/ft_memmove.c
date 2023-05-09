/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:28:57 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/08 22:33:20 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	dest1 = (char *) dest;
	src1 = (const char *) src;
	i = -1;
	if (n == 0)
		return (dest);
	if (src + n > dest)
		while (n--)
			dest1[n] = src1[n];
	else
		while (i++, i < n)
			dest1[i] = src1[i];
	return (dest);
}
