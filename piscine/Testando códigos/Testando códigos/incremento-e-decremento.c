/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incremento-e-decremento.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:15:05 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/13 23:34:14 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    int b;
    int a;
    int c;
    int d;

    b = 10;
    a = 10;
    c = 0;
    d = 0;

    while(b != 0)
    {
        printf("Pré-decrementando váriavel  %d\n", --b);
        printf("Visualizando decrementação %d\n\n", b);
    }
    while(a != 0)
    {
        printf("Pós-decrementando váriavel  %d\n", a--);
        printf("Visualizando decrementação %d\n\n", a);
    }

    while(c != 10)
    {
        printf("Pré-incrementando váriavel  %d\n", ++c);
        printf("Visualizando incrementação %d\n\n", c);
    }        
    while(d != 10)
    {
    printf("Pós-incrementando váriavel  %d\n", d++);
    printf("Visualizando incrementação %d\n\n", d);
    }
    return (0);
}