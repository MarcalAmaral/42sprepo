/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:06:07 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/29 21:37:55 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && (nmemb * size) / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
