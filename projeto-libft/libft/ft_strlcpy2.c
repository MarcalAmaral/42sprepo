/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 01:51:19 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/12 03:21:25 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	printf("%p \n", dst);
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (--size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dst++;
	}
	printf("%p \n", dst);
	printf("%lu \n", i);
	dst[i] = '\0';
	printf("%lu \n", i);
	printf("%lu \n", i);
	return (ft_strlen(src));
}
int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "ceci et un test tu voissss";
	size = 10;
	printf("%lu\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
}
