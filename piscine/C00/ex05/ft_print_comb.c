/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 02:18:39 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/17 14:41:47 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	set[3];

	set[0] = '0';
	while (set[0] <= '7')
	{
		set[1] = set[0] + 1;
		while (set[1] <= '8')
		{
			set[2] = set[1] + 1;
			while (set[2] <= '9')
			{
				write(1, &set, 3);
				if (set[0] != '7')
					write(1, ", ", 2);
				set[2]++;
			}
			set[1]++;
		}
		set[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
