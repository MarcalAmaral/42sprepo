/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:52:43 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/08 22:16:08 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int digit1, int digit2);

void	ft_print_comb2(void)
{
	int	digit1;
	int	digit2;

	digit1 = 0;
	while (digit1 <= 98)
	{
		digit2 = 1;
		while (digit2 <= 99)
		{
			if (digit1 != digit2 && digit1 < digit2)
				write_comb(digit1, digit2);
			digit2++;
		}
		digit1++;
	}
}

void	write_comb(int digit1, int digit2)
{
	char	a[7];

	a[0] = digit1 / 10 + '0';
	a[1] = digit1 % 10 + '0';
	a[2] = ' ';
	a[3] = digit2 / 10 + '0';
	a[4] = digit2 % 10 + '0';
	a[5] = ',';
	a[6] = ' ';
	if (digit1 == 98 && digit2 == 99)
		write(1, a, 5);
	else
		write(1, a, 7);
}
