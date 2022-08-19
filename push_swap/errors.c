/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:44:09 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/23 02:15:44 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_SUCCESS);
}

void	free_arr(char **arr, int flag)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
	if (flag)
		error();
}

void	check(char **arr)
{
	int			i;
	int			j;
	long long	num;

	i = -1;
	while (arr[++i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == '-')
				j++;
			if (!(ft_isdigit(arr[i][j])))
				free_arr(arr, 1);
			j++;
		}
		num = ft_atoi(arr[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			error();
			free_arr(arr, 1);
		}
	}
}

char	**get(char **av)
{
	int		i;
	char	*line;
	char	*tmp;
	char	**arr;

	line = ft_strdup(av[1]);
	i = 1;
	while (av[++i])
	{
		tmp = line;
		line = ft_strjoin(line, " ");
		free(tmp);
		tmp = line;
		line = ft_strjoin(line, av[i]);
		free(tmp);
	}
	arr = ft_split(line, ' ');
	free(line);
	return (arr);
}

void	repeated(char **arr)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (ft_atoi(arr[i]) == ft_atoi(arr[j]))
				free_arr(arr, 1);
			j++;
		}
		i++;
	}
}
