/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:26:19 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/14 17:36:49 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*s = "ABCDE";
	int			i;

	i = 0;
	while (i < 2)
	{
		s++;
		i++;
	}
	if (ft_strncmp(s, "CDE", 4) == 0)
	{
		printf("%s \n", s);
	}
	return (0);
}
