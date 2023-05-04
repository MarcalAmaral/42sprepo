/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:08:22 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/19 02:55:49 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	l;
	int	j;

	j = 0;
	i = 0;
	l = size - 1;
	while (j != size)
	{	
		printf("%d", tab[j]);
		j++;
	}
	printf("\n");
	while (i < l)
	{
		temp = tab[i];
		tab[i] = tab[l];
		tab[l] = temp;
		i++;
		l--;
	}
	j = 0;
	while (j != size)
	{
		printf("%d", tab[j]);
		j++;
	}
}

int	main(void)
{
	int	a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	int	*b = &a[0];
	int	size = 9;

	ft_rev_int_tab(b, size);
	return (0);
}
