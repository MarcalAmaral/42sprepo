/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:13:37 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/21 19:16:48 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static size_t	intlen(int n);

char	*ft_itoa(int n)
{
	size_t		i;
	size_t		alloc;
	long int	long_n;
	char		*s;

	long_n = (long int) n;
	alloc = intlen(n);
	i = alloc - 1;
	s = ft_calloc(alloc, sizeof(char));
	if (!s)
		return (malloc(0));
	if (n == 0)
		s[0] = '0';
	if (long_n < 0)
	{
		long_n *= -1;
		s[0] = '-';
	}
	while (i--, long_n != 0)
	{
		s[i] = long_n % 10 + '0';
		long_n = long_n / 10;
	}
	return (s);
}

static size_t	intlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i += 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}
