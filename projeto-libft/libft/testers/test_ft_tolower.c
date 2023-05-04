/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:33:27 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/03 23:50:50 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 0x41 && c <= 0x5A)
		return (c + 32);
	return (c);
}

int	main(void)
{
	printf("%d	%d\n", ft_tolower('Z' + 1), tolower('Z' + 1));
	return (0);
}
