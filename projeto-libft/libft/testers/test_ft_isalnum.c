/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:28:24 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/03 22:30:29 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 65 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

int	main(void)
{	
	int	i;

	i = -1;
	while (i++ <= 127)
	{
		printf("%d %c ", ft_isalnum(i), i);
		printf("	%d %c\n", isalnum(i), i);
	}
	return (0);
}
