/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:48:18 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/09 18:24:31 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpybuffer(t_vars *vars)
{
	while (1)
	{
		ft_lstadd_back(&vars->head, ft_lstnew(vars->buffer[vars->iter]));
		if (vars->buffer[vars->iter] == '\0' || vars->buffer[vars->iter] = '\n')
			break ;
		vars->iter++;
		vars->len++;
		if (vars->iter == vars->bytes_read)
		{
			vars->iter = 0;
			vars->bytes_read = read(vars->fd, vars->buffer, BUFFER_SIZE);
			if (vars->bytes_read <= 0)
				break ;
		}
	}
	vars->len++;
	vars->iter++;
	return (ft_returnline(vars));
}

char		*get_next_line(int fd)
{
	static t_vars	vars;

	if (vars.iter == vars.bytes_read)
	{
		vars.iter = 0;
		while (vars.iter <= BUFFER_SIZE)
		{
			vars.buffer[vars.iter] = 0;
			vars.iter++;	
		}
		vars.iter = 0;
		vars.len = 0;
		vars.fd = fd;
		vars.bytes_read = read(fd, vars.buffer, BUFFER_SIZE);
	}
	if (vars.bytes_read <= 0)
		return (NULL);
	return (ft_cpybuffer(&vars));
}