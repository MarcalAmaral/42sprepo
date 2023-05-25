/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:06:07 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/24 19:14:51 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	alloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	alloc = nmemb * size;
	if (alloc / nmemb != size)
		return (NULL);
	ptr = malloc(alloc);
	if (ptr != NULL)
		ft_bzero(ptr, alloc);
	return (ptr);
}
