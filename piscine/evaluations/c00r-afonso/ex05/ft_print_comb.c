/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:28:21 by r-afonso          #+#    #+#             */
/*   Updated: 2023/03/14 18:38:20 by r-afonso         ###   ########.fr       */
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

void	compar_numbers(int *numbers)
{
	if (numbers[2] > numbers[1] && numbers[1] > numbers[0])
	{
		print(numbers[0] + 48, 0);
		print(numbers[1] + 48, 0);
		print(numbers[2] + 48, 0);
		if (numbers[0] != 7)
			write(1, ", ", 2);
	}
	if (numbers[2] < 9)
	{
		numbers[2]++;
	}
	else if (numbers[1] < 9)
	{
		numbers[1]++;
		numbers[2] = 0;
	}
	else if (numbers[0] < 9)
	{
		numbers[0]++;
		numbers[1] = 0;
		numbers[2] = 0;
	}
}

void	ft_print_comb(void)
{
	int	numbers[3];

	numbers[0] = 0;
	numbers[1] = 1;
	numbers[2] = 2;
	while (numbers[0] < 8)
	{
		compar_numbers(numbers);
	}
}
