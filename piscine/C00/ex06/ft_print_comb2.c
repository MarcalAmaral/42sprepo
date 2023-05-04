/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 02:36:13 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/17 18:59:42 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ex06(int a[]);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	set[3];

	set[0] = 0;
	while (set[0] <= 98)
	{
		set[2] = set[0] + 1;
		while (set[2] <= 99)
		{
			ft_print_ex06(set);
			set[2]++;
		}
		set[0]++;
	}
}

void	ft_print_ex06(int a[])
{
	a[1] = ' ';
	ft_putchar(48 + a[0] / 10);
	ft_putchar(48 + a[0] % 10);
	ft_putchar(a[1]);
	ft_putchar(48 + a[2] / 10);
	ft_putchar(48 + a[2] % 10);
	if (a[0] != 98 || a[2] != 99)
		write(1, ", ", 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int	main(void)
{
	ft_print_comb2();
	return (0);
} */
