/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:46:14 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 00:14:42 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int n);
int		ft_checkn(int n);

void	ft_print_combn(int n)
{
	int		nmin;
	int		nmax;
	int		c;
	int		i;

	nmin = 0;
	nmax = 0;
	i = n;
	while (i > 0)
	{
		nmin = nmin * 10 + n - i;
		nmax = nmax * 10 + (10 - i);
		i--;
	}
	ft_putint(c);
	while (nmin != nmax + 1)
	{
		c = ft_checkn(nmin);
		if (c == 1)
		{
			ft_putint(nmin);
			write(1, "\n", 1);
		}
		nmin++;
	}
}

void	ft_putint(int n)
{
	char	c;

	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else if (n > 9)
	{
		ft_putint(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
}

int	ft_checkn(int n)
{
	int	last;
	int	last_but_one;

	last = 0;
	last_but_one = 0;
	if (n >= 0 && n <= 9)
	{
		return (1);
	}
	else if (n > 9)
	{
		last = n % 10;
		last_but_one = (n % 100) / 10;
		write(1, "last ", 5);
		ft_putint(last);
		write(1, "\n", 1);
		write(1, "last but one ", 13);
		ft_putint(last_but_one);
		write(1, "\n", 1);
		if (last <= last_but_one)
			return (0);
		ft_checkn(n / 10);
	}
	return (1);
}
