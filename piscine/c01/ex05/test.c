i/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:31:36 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/18 23:50:08 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str)
{
	while (*str)
	{
		printf("%p	 %c\n", str, *str);
		str++;
	}
}

int	main(void)
{
	ft_putstr("Hello World!");
	return (0);
}

