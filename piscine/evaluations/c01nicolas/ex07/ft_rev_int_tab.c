/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:00:57 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/13 17:22:17 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int i, int f)
{
	int	aux;

	aux = a[i];
	a[i] = a[f];
	a[f] = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		ft_swap(tab, i, f);
		i++;
		f--;
	}
}
