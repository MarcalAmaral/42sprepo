/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 00:21:58 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/06 00:51:34 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	atoi(const char *nptr)
{
	int	signal;
	int	stop;

	stop = 1;
	signal = 1;
	while ((*nptr == '\n') || (*nptr == '\f') || (*nptr == '\r') \
	|| (*nptr == '\v') || (*nptr == '\t') || (*nptr == '\b'))
		nptr++;
	while (((*nptr == '-') || (*nptr == '+')) && stop--)
	{	
		if (*nptr == '-')
			signal *= -1;
		nptr++;
	}
	if (*)
}

int	main(void)
{
	printf("%d \n", atoi("                     -12      213213 iuahdiahsoi12121 dhasiud haiu shdiuoa"));
	return (0);
}
