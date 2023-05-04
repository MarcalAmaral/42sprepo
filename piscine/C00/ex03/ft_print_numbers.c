/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:34:03 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/12 12:36:03 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	f_num;

	f_num = '0';
	while (f_num <= '9')
	{
		write(1, &f_num, 1);
		f_num++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
