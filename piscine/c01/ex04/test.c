/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:16:56 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/18 23:27:29 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 3;
	printf("Valor de a (%d)		Valor de b(%d)\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Quosciente da divisão a / b (%d)	Resto de divisão a b(%d)", a, b);
}
