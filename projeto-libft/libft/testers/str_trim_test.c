/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_trim_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:31:33 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/26 00:10:43 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* int	main(void)
{
	char	*s;
	char	*set;
	size_t	i;
	size_t	j;

	s = "HHHHHHHHHWelWeloe eWoerld!";
	set = "HW";
	i = 0;
	j = 0;
	printf("%s \n", identify_diff(s, set));
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
} */

int	main(void)
{
	char	*s1;
	char	*set;
	size_t	s_string;
	size_t	end_string;
	char	*ptr;
	size_t	alloc;

	s1 = "abcdba";
	set = "acb";
	s_string = 0;
	end_string = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + s_string)))
		s_string += 1;
	while (ft_strchr(set, *(s1 + end_string - 1)))
		end_string -= 1;
	alloc = end_string - s_string;
	ptr = (char *) ft_calloc(alloc + 2, sizeof(char));
	ptr = ft_substr(s1, s_string, alloc);
	printf("%lu \n", s_string);
	printf("%lu \n", end_string);
	printf("%lu \n", ft_strlen(ptr));
	printf("%s \n", ptr);
}
