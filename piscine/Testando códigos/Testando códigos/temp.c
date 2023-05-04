/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:37:52 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/12 21:37:51 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);

int     main(void)
{
    char abacate[] = "Eh bom!";
    char *index0 = &abacate[0];
    printf("%p", index0);  
}

void ft_putstr(char *str)
{   
    int index;
    
    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}