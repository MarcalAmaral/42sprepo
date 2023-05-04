/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:33:27 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/03 23:59:32 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 0x61 && c <= 0x7A)
		return (c - 32);
	return (c);
}

int	main(void)
{
	printf("%d	%d\n", ft_tolower('z' + 1), tolower('z' + 1));
	return (0);
}
