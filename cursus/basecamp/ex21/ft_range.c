/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:55:30 by myokogaw          #+#    #+#             */
/*   Updated: 2023/04/23 16:52:53 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*r;
	int	i;
	int	diff;

	diff = max - min;
	i = 0;
	r = malloc (sizeof(int) * diff);
	if (min >= max)
	{
		return (0);
	}
	while (i <= diff)
	{
		r[i] = min;
		min += 1;
		i++;
	}
	return (r);
}
