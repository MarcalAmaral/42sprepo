/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 22:53:30 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 01:12:55 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	return (r = nb * ft_recursive_factorial(nb - 1));
}
