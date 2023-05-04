/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:41:40 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/09 13:16:48 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	a[6];
	int	b[5];

	srand(time(NULL));
	for (int i = 0; i < 6; i++)
	{
		if (i < 5)
			b[i] = rand() % 11;
		a[i] = rand() % 11;
	}
	printf("Before ft_rev_int_tab:\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	ft_rev_int_tab(a, 6);
	printf("\n\nAfter ft_rev_int_tab:\n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\nBefore ft_rev_int_tab:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	ft_rev_int_tab(b, 5);
	printf("\n\nAfter ft_rev_int_tab:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}
