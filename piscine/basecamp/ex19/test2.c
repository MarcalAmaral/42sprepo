/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:31:10 by myokogaw          #+#    #+#             */
/*   Updated: 2023/04/26 22:23:00 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (strcmp(argv[1], argv[2]) < 0)
	{
		printf("%s \n", argv[1]);
	}
	else
	{
		printf("%s \n", argv[2]);
	}
	return (0);
}
