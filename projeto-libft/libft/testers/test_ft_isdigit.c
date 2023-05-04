/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:28:24 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/03 22:30:54 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 0x30 && c <= 0x39)
		return (1);
	return (0);
}

int	main(void)
{	
	int	i;

	i = -1;
	while (i++ <= 127)
	{
		printf("%d %c ", ft_isdigit(i), i);
		printf("	%d %c\n", isdigit(i), i);
	}
	return (0);
}
