/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 23:56:49 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 00:51:49 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s1)
{
	while (*s1)
	{
		ft_putchar(*s1);
		s1++;
	}
}

void	swap(char *arr[], int idx)
{
	char	*temp;

	temp = arr[idx];
	arr[idx] = arr[idx - 1];
	arr[idx - 1] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

void	bubble_sort(char *arr[], int n)
{
	int	i;
	int	j;

	i = -1;
	while (i++, i < n)
	{
		j = -1;
		while (j++, j < n - i - 1)
			if (ft_strcmp(arr[j], arr[j + 1]) == 1)
				swap(arr, j + 1);
	}
}

void	print_array(char *arr[], int size)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (i++, i < size)
	{
		while (arr[i][j])
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		j = 0;
		ft_putchar('\n');
	}
}

int	main(void)
{
	char	*arr[] = {"abobrinha", "abacate", "avocado", "blusa", "blusinha", "camisa", "camisinha", "namorado", "bebe", "league", "ab"};
	int		n;

	n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	ft_putstr("Sorted array: \n");
	print_array(arr, n);
	return (0);
}
