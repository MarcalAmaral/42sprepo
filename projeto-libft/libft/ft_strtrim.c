/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:39:05 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/24 20:31:03 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;

	
}

char	*erase_end(const char *s, char const *set)
{
	char	*ret;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	i = len_s;
	ret = (char *) s;
	
	while (*(ret + len_s) != *ret)
	{
		while (*(ret + len_s) != )
		len_s--
	}
}

char	*erase_begin(const char *s, char const *set)