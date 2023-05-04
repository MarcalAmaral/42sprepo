/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manascim <manascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:26:13 by manascim          #+#    #+#             */
/*   Updated: 2023/03/13 10:29:47 by manascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb2(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	slot_1;
	int	slot_2;

	slot_1 = 0;
	slot_2 = 0;
	while (slot_1 <= 98)
	{
	slot_2 = slot_1 + 1;
		while (slot_2 <= 99)
		{
			print_comb2(slot_1 / 10 + '0');
			print_comb2(slot_1 % 10 + '0');
			print_comb2(' ');
			print_comb2(slot_2 / 10 + '0');
			print_comb2(slot_2 % 10 + '0');
			if ((slot_1 / 10 != 9) || (slot_1 % 10 != 8))
			{
				print_comb2(',');
				print_comb2(' ');
			}
		slot_2++;
		}
	slot_1++;
	}
}
