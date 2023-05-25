/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_trim_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:31:33 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/24 22:33:52 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	identify_diff(char const *s, char const *set);

int	main(void)
{
	char	*s;
	char	*set;
	size_t	i;
	size_t	j;

	s = "HHHHHHHHHWelWeloe eWoerld!";
	set = "HW";
	i = 0;
	j = 0;
	printf("%d \n", identify_diff(s, set));
	while (*set)
	{
		while (s[i] != '\0')
		{
			if (s[i] == *set)
				printf("%c \n", s[i]);
			i++;
		}
		i = 0;
		set++;
	}
	return (0);
}

int	identify_diff(char const *s, char const *set)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (*set)
	{
		while (s[i] != '\0')
		{
			if (s[i] == *set)
				j++;
			i++;
		}
		i = 0;
		set++;
	}
	return (j);
}
