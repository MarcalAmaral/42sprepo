/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:34 by myokogaw          #+#    #+#             */
/*   Updated: 2023/03/12 12:06:56 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void    ft_putchar(char c); */

    void    ft_putchar(char c);
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int index;

    index = 0;

    while (str[index] != '\0') {

        ft_putchar(str[index]);
        index++;
    }
}

/* int     main(void)
{
    char str[] = "Hello World!";
    ft_putstr(str);
} */