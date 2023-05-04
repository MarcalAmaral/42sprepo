/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:03:49 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/19 02:56:27 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	l;

	i = 0;
	l = size - 1;
	while (i < l)
	{
		temp = tab[i];
		tab[i] = tab[l];
		tab[l] = temp;
		i++;
		l--;
	}
}
