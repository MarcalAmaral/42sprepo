/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 02:51:00 by r-afonso          #+#    #+#             */
/*   Updated: 2023/03/14 18:38:19 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char text, int comma)
{
	if (comma == 1)
		write(1, ", ", 1);
	else
		write(1, &text, 1);
}

// 48 is a ascii 0
void	compar_numbers(int *numbers)
{
	if (numbers[1] > numbers[0])
	{
		print(' ', 0);
		print(numbers[0] / 10 + 48, 0);
		print(numbers[0] % 10 + 48, 0);
		print(' ', 0);
		print(numbers[1] / 10 + 48, 0);
		print(numbers[1] % 10 + 48, 0);
		if (numbers[0] != 98)
			print(' ', 1);
	}
	if (numbers[1] < 99)
		numbers[1]++;
	else if (numbers[0] < 99)
	{
		numbers[0]++;
		numbers[1] = 0;
	}
}

void	ft_print_comb2(void)
{
	int	numbers[2];

	numbers[0] = 0;
	numbers[1] = 1;
	while (numbers[0] < 99)
	{
		compar_numbers(numbers);
	}
}
