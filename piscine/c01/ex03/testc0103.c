/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testc0103.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:52:25 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/18 21:30:35 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = *a / *b;
	*mod = *a % *b;
}

int	main(void)
{	
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 50;
	b = 10;
	ft_div_mod(&a, &b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
	return (0);
}
