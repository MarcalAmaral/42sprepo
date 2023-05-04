/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:12:20 by nprudenc          #+#    #+#             */
/*   Updated: 2023/03/13 22:27:37 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	char	letter;

	while (*str != '\0')
	{
		letter = *str;
		printf("Endereço de letter: %p\n", &letter);
		printf("Endereço de    str: %p\n", &str);
		printf("Conteúdo de letter: %c\n", letter);
		printf("Conteúdo de    str: %c\n", *str);
		str++;
		printf("Conteúdo de letter: %c\n", letter);
		printf("Conteúdo de    str: %c\n\n", *str);
//		write(1, &letter, 1);
	char *str = "String"
	char str[] = "String"
	}
}
