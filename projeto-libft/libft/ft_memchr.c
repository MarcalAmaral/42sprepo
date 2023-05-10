/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:14:31 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/09 22:23:28 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *) s;
	while (n--)
	{
		if (*s1 == (char) c)
			return (s1);
		s1++;
	}
	return (NULL);
}

int	main(void)
{
	char s[] = "Acabate Amarelo";

	printf("%s \n", memchr(s, 't', 6));
	printf("%s \n", ft_memchr(s, 't', 6));
	return (0);
}
