/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:28:24 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/03 22:31:00 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{	
	int	i;

	i = -1;
	while (i++ <= 127)
	{
		printf("%d %c ", ft_isprint(i), i);
		printf("	%d %c\n", isprint(i), i);
	}
	return (0);
}
