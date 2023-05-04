/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testec0101.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:40:30 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/18 21:35:13 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 400;
}

/* int	main(void)
{
	int	*a;
	int	**b;
	int	c;

	c = 300;
	a = &c;
	b = &a;
	printf("%d	%p\n", *a, a);
	printf("%d	%p\n", **b, b);
	write(1, "\n", 1);
	*a = 250;
	printf("%d	%p\n", *a, a);
	printf("%d	%p\n", **b, b);
	write(1, "\n", 1);
	**b = 200;
	printf("%d	%p\n", *a, a);
	printf("%d	%p\n", **b, b);
	write(1, "\n", 1);
	return (0);
} */

int	main(void)
{	
	int	*nbr0;
	int	**nbr1;
	int	***nbr2;
	int	****nbr3;
	int	*****nbr4;
	int	******nbr5;
	int	*******nbr6;
	int	********nbr7;
	int *********nbr;
	int	a;

	nbr0 = &a;
	nbr1 = &nbr0;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr = &nbr7;
	a = 10;
	ft_ultimate_ft(nbr);
	printf("%d	%p\n", *********nbr, nbr);
	return (0);
}
