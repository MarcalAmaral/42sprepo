/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:26:19 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/18 00:35:24 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	i = -1;
	n = 6546513;
	while (i++, n != 0)
		n = n / 10;
	printf("%d \n", i);
	printf("%d \n", n / 10);
	return (0);
}


void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	*s = '1';
	write(fd, &(*s), 1);
}

