#include <string.h>
#include <stdio.h>
#include "ft_strlen.h"

size_t	ft_strlen(char *s)
{
	size_t	counter;

	counter = -1;
	while (counter++, *s)
		s++;
	printf("%lu \n", counter);
	return (counter);
}