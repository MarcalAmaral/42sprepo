/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 23:56:49 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 01:03:52 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	print_array(char *arr[], int size)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i++, i < argc)
	{
		j = 0;
		while (j++, j < argc - i)
			if (ft_strcmp(argv[j], argv[j + 1]) == 1)
				swap(argv, j + 1);
	}
	print_array(argv, argc);
}
