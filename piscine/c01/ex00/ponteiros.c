/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteiros.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:43:13 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/18 16:50:27 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	*ponteiro;
	int	y;

	a = 12;
	ponteiro = &a;
	printf("%d\n", *ponteiro);
	printf("%p\n", ponteiro);
	y = 32;
	/* ponteiro = &y; */
	*ponteiro = 20;
	printf("%d\n", *ponteiro);
	printf("%p\n", ponteiro);
}
