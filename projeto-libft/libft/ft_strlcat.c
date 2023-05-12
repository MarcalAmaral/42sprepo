/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 02:27:07 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/12 02:45:26 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lenght;

	while (*src && size--)
	{
		*dst = (unsigned char) *src;
		dst++;
		src++;
	}
	lenght = ft_strlen((const char *)&src) + \
	ft_strlen((const char *)&dst);
	return (lenght);
}
