/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:21:07 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/19 17:36:53 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 'z';
		i++;
	}
	return (dest);
}

int	main(void)
{
	int	n = 10;
	char	a[25] = "";
	char	b[] = "leonardo";

	printf("Antes a: %s\n", a);
	printf("Antes b: %s\n \n", b);
	ft_strncpy(a, b, n);
	printf("Depois a: %s\n", a);
	printf("Depois b: %s\n", b);
}
