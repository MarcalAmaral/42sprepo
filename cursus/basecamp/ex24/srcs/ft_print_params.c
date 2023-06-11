/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 00:17:16 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 01:37:45 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	while (i < argc)
	{	
		while (argv[i][c])
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		c = 0;
		i++;
	}
	return (0);
}
