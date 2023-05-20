/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:34:30 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/20 18:05:57 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// malloc(0) return 0?
/* int	main(void)
{
	int	*s;

	s = (int *) malloc(0);
	printf("%d \n", *s);
	printf("%p \n", s);
	free(s);
	return (0);
}
 */

// Veryfing values of SIZE_MAX & ((SIZE_MAX * n > 1 & n < 0) & (SIZE_MAX / n > 1 & n < 0))
/* int	main(void)
{
	size_t	n;
	size_t	n1;

	n = 30;
	n1 = -30;
	printf("%lu \n", SIZE_MAX); // 2 ** 64;
	printf("%lu \n", SIZE_MAX * n); // Return SIZE_MAX - n if (n > 1);
	printf("%lu \n", SIZE_MAX * n1); // Return n * -1;
	printf("%lu \n", SIZE_MAX / n); // Return SIZE_MAX / n;
	printf("%lu \n", SIZE_MAX / n1); // Return 1;
	printf("%lu \n", SIZE_MAX - 1);
	return (0);
}
 */

int	main(void)
{
	size_t	test_size;

	test_size = SIZE_MAX;
	printf("%lu \n", ~(test_size << 1));
	return (0);
}
