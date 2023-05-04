/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   straight_insertion_sort.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:14:32 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 00:18:43 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	straight_insertion_sort(int arr[], int n)
{
	int	i;
	int	key;
	int	j;

	i = 1;
	while (i < n)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		i++;
	}
}

void	print_array(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	arr[] = {2321, 1, 32, 3, 5, 7, 92, 2, 1, 222, 231, 3,2, 5, 512, 3, 465 ,2 3,};
	int	size;

	size = sizeof(arr) / sizeof(arr[0]);
	straight_insertion_sort(arr, size);
	print_array (arr, size);
	return (0);
}
