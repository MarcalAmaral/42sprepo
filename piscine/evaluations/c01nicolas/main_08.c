/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:41:40 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/03/09 13:18:59 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	a[SIZE];

	srand(time(NULL));
	printf("\n\nBefore ft_sort_int_tab:\n");
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 11;
		printf("%d ", a[i]);
	}
	printf("\n\nAfter ft_sort_int_tab:\n");
	ft_sort_int_tab(a, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
