/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:29:38 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/12 12:33:48 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	l_char;

	l_char = 'z';
	while (l_char >= 'a')
	{
		write(1, &l_char, 1);
		l_char--;
	}
}

// Função main para visualizar o resultado da função ft_print_reverse_alphabet.
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
