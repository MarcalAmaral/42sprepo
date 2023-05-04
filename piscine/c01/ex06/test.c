/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 01:55:32 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/19 01:59:06 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	printf("%d", len);
	return (len);
}

int	main(void)
{
	ft_strlen("ASHDAUISHDUIAHDIUWHAI UHSDIUAH DUIAHUI HDWUIA");
	return (0);
}
