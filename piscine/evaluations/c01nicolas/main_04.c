/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:41:40 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/09 13:10:23 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("12/10\ndiv = %d (should be 1)\nmod = %d (should be 2)\n", a, b);
}
