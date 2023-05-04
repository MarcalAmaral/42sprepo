/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c02ex09.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:06:03 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/23 11:14:00 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int a;
	
	i = 0;
	a = 1;
	
	while (*str)
	{
		if((str[i] >= 32) && (str[i] <= 45) && (str[a] >= 'a') && (str[a] <= 'z'))
			str[a] -= 32;
		i++;
		a++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(str));
}