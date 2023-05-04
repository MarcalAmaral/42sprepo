/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:24:49 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/12 12:28:57 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	f_char;

	f_char = 'a';
	while (f_char <= 'z')
	{
		write(1, &f_char, 1);
		f_char++;
	}
}

// Função main para visualizar o resultado da função ft_print_alphabet.
int main(void)
{
	ft_print_alphabet();
	return (0);
}
