/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:10:03 by r-afonso          #+#    #+#             */
/*   Updated: 2023/03/14 18:44:58 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char text, int comma, int numberDigits)
{
	if (comma == 1)
		write(1, ", ", numberDigits);
	else
		write(1, &text, numberDigits);
}

void	ft_putnbr(int nb)
{
	char	result;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		result = (nb % 10) + 48;
		write(1, &result, 1);
	}
}
