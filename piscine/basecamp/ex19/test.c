/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:24:13 by myokogaw          #+#    #+#             */
/*   Updated: 2023/04/26 21:37:06 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (-1 == strcmp(argv[1], argv[2]))
	printf("%s \n", argv[1]);
	printf("%s \n", argv[2]);
	printf("%s \n", argv[3]);
	return (0);
}
