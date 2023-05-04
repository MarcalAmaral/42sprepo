/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manascim <manascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:12:05 by manascim          #+#    #+#             */
/*   Updated: 2023/03/13 10:29:38 by manascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char c, char b, char a)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
	if (c == 55 && b == 56 && a == 57)
	{
		write(1, "\n", 1);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	c = 48;
	while (c <= 57)
	{
		b = c + 1;
		while (b <= 57)
		{
			a = b + 1;
			while (a <= 57)
			{
				print_comb(c, b, a);
				a++;
			}
			b++;
		}
		c++;
	}
}
