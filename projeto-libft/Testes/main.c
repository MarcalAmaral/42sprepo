/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:40:11 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 20:45:17 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "helloworld.h"
#include "ft_strlen.h"

int main(void)
{
    printf("%s \n", helloworld());
    ft_strlen(helloworld());
    return (0);
}