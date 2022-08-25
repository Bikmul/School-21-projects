/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:04:16 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/26 12:52:27 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	func(t_all *all, char *line)
{
	if (!ft_strncmp(line, "pa\n", 3))
		pa(all, 0);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(all, 0);
	else if (!ft_strncmp(line, "sa\n", 3))
		sa(all, 0);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(all, 0);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(all, 0);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra(all, 0);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(all, 0);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(all, 0);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(all, 0);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(all, 0);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(all, 0);
	else
		error();
}

static void	checker(t_all *all)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		func(all, line);
	}
	if (sort_true(all))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(line);
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

int	main(int argc, char **argv)
{
	t_all	*all;

	if (argc > 1)
	{
		all = pars(argv);
		checker(all);
		free_stack(all);
	}
	return (0);
}