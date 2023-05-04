/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:54:42 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/11 22:47:50 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int a[4][4];
    int i = 0, j = 0;

    while (i < 4) {
        j = 0;
        while(j < 4) {
            a[i][j] = i * j;
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            char c = a[i][j] + '0';
            write   (1, &c, 1);
            write   (1, " ", 1);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("%s\n", sizeof(a));

    return (0);
}