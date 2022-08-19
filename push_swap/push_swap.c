/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:24:46 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/23 02:18:49 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_all	*all;

	if (argc > 1)
	{
		all = pars(argv);
		sortirovka(all);
		free_stack(all);
	}
	return (0);
}

t_all	*pars(char **argv)
{
	t_all	*all;
	char	**arr;

	arr = get(argv);
	check(arr);
	repeated(arr);
	all = init(arr);
	add(all, arr);
	free_arr(arr, 0);
	return (all);
}

void	sortirovka(t_all *all)
{
	if (sort_true(all))
		free_stack(all);
	if (all->size_a < 6)
	{
		sort5(all);
		free_stack(all);
	}
	moveatob1(all);
	while (!(sort_true(all) && all->size_b == 0))
	{
		if (all->size_b > 0 && all->size_b < 6)
			sortbtoa5(all);
		else if (all->size_b >= 6)
			movebtoa(all);
		if (all->size_b == 0)
		{
			sortatob5(all, 0, 0, 0);
			moveatob(all);
		}
	}
}
