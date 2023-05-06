/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 00:21:58 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/06 16:27:53 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	result;
	int i;

	i = 0;
	signal = 1;
	if (nptr[i] == '-')
	{
		signal *= -1;	
		i++;
	}
	while (*nptr != '\0')
	{
		result = result * 10 + nptr[i] - 0x30; 
		i++;
	}
	return (result * signal);
}

int	main(void)
{
	printf("%d \n", ft_atoi("                     -12      213213 iuahdiahsoi12121 dhasiud haiu shdiuoa"));
	return (0);
}
