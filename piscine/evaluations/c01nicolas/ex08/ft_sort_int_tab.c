/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:20:23 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/13 17:22:51 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i, int x)
{
	int	aux;

	aux = tab[i];
	tab[i] = tab[x];
	tab[x] = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size - 1)
	{
		x = i + 1;
		while (x < size)
		{
			if (tab[i] > tab[x])
			{
				ft_swap(tab, i, x);
			}
			x++;
		}
		i++;
	}
}
