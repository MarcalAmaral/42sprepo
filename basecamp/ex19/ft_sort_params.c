/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 22:38:36 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/01 01:36:25 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char *arr[], int idx)
{
	char	*temp;

	temp = arr[idx];
	arr[idx] = arr[idx - 1];
	arr[idx - 1] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

void	print_array(char *arr[], int len)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	while (i < len)
	{	
		while (arr[i][c])
		{
			ft_putchar(arr[i][c]);
			c++;
		}
		ft_putchar('\n');
		c = 0;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	i = 0;
	while (i++, i < argc)
	{
		j = 0;
		while (j++, j < argc - i)
			if (ft_strcmp(argv[j], argv[j + 1]) == 1)
				ft_swap(argv, j + 1);
	}
	print_array(argv, argc);
}
