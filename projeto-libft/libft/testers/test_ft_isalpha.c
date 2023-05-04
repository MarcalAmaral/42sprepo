/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:35:06 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/03 22:30:38 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	main(void)
{	
	int	i;

	i = -1;
	while (i++ <= 127)
	{
		printf("%d %c ", ft_isdigit(i), i);
		printf("	%d %c\n", isdigit(i), i);
	}
	return (0);
}
