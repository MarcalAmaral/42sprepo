/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frarodri <frarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:08:38 by frarodri          #+#    #+#             */
/*   Updated: 2023/03/12 14:48:16 by frarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(int piscine_um, int piscine_dois)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = (piscine_um / 10) + '0';
	b = (piscine_um % 10) + '0';
	c = (piscine_dois / 10) + '0';
	d = (piscine_dois % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x, y);
			if (x != 98 || y != 99)
			{
				write(1, ",", 2);
			}
			y++;
		}
		x++;
	}
}
