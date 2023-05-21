/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:06:07 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/20 20:56:58 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	alloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > 1)
		alloc = __SIZE_MAX__ / size;
	else
		alloc = __SIZE_MAX__;
	if (nmemb > alloc)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb);
	return (ptr);
}
