/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:53:42 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/12 19:31:21 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_teste(void);

int main(void)
{
    char str[3] = "012";
   
    while (str[0] <= '7')
    {
        str[1] = str[0] + 1;
        while (str[1] <= '8')
        {
            str[2] = str[1] + 1;
            while(str[2] <= '9')
            {
                write(1, str, 3);
                if (str[0] != '7')
                    write(1, ", ", 2);
                str[2]++;
            }
            str[1]++;
        }
        str[0]++;
    }
    return (0);
}

/* void ft_teste(void)
{
    char ints[] = "012";
    
    while (ints[0] <= '7')
    {
        ints[1] = ints[1] + '1';
        while (ints[1] <= '8')
        {
            ints[2] = ints[2] + '1';
            while (ints[2] <= '9')
            {
                write(1, &ints, 3);
                if (ints[0] != '7')
                    write(1, ", ", 2);

                ints[2]++;
            }
            ints[1]++;
        }
        ints[0]++;
    }
} */

