/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 23:20:06 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/06 00:07:38 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	size_t	string_lenght(const char *s);

char	*ft_strdup(const char *s)
{
	int			i;
	size_t		lenght;
	char		*n_string;

	i = -1;
	lenght = string_lenght(s);
	n_string = (char *) malloc(lenght * sizeof(char) + 1);
	while (i++, i != lenght)
		n_string[i] = s[i];
	n_string[i] = '\0';
	return (n_string);
}

static	size_t	string_lenght(const char *s)
{
	size_t	counter;

	counter = -1;
	while (counter++, *s)
		s++;
	return (counter);
}

int	main(void)
{
	printf("%s \n", strdup("Hello World!"));
	printf("%s \n", ft_strdup("Hello World!"));
	return (0);
}
