/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:34:56 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/14 00:51:00 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_size_string(char *str);

int main(void)
{
    char *str;
    char a;

    str = "Hello World";

    ft_size_string(str);
    while (*str != '\0')
    {   
        write(1, &*str, 1);
        str++;
    }
/*     while (*str != '\0')
    {   
        printf("%p\n", str);
        str++;
    } */
}
/* 
void ft_size_string(char *str)
{
    char i;
    char *str1;
    int size;
    i = 0;
    while (*str != '\0')
    {
        str1[i] = *str;
        i++;
        size = sizeof(str1);
    }
    write(1, &size, sizeof(int));
} */