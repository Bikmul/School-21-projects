/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:14:37 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/22 19:14:41 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_min_btoa(t_all *all)
{
	int	min;

	min = all->stack_a->prev->index + 1;
	if (all->stack_b->index == min)
	{
		pa(all, 1);
		push_down(all);
		return (1);
	}
	else if (all->stack_a->index == min)
		push_down(all);
	else if (all->stack_a->next->index == min)
	{
		sa(all, 1);
		push_down(all);
	}
	return (0);
}

void	movebtoa(t_all *all)
{
	int	i;

	min_max_med_b(all);
	i = all->size_b;
	while (i-- > 0)
	{
		if (search_min_btoa(all))
			continue ;
		if (all->stack_b->index > all->med)
		{
			all->stack_b->flag++;
			pa(all, 1);
		}
		else
		{
			all->stack_b->flag++;
			rb(all, 1);
		}
	}
}

void	moveatob(t_all *all)
{
	int	flag;
	int	min;

	flag = all->stack_a->flag;
	while (all->stack_a->flag == flag && flag != -1)
	{
		min = all->stack_a->prev->index + 1;
		if (all->size_b > 1)
			search_min_atob(all);
		if (all->stack_a->index == min)
			push_down(all);
		else
			pb(all, 1);
	}
}

void	push_down(t_all *all)
{
	all->stack_a->flag = -1;
	ra(all, 1);
}

void	search_min_atob(t_all *all)
{
	int	min;

	min = all->stack_a->prev->index + 1;
	if (all->stack_b->index == min)
	{
		pa(all, 1);
		push_down(all);
	}
	else if (all->stack_b->next->index == min)
	{
		sb(all, 1);
		pa(all, 1);
		push_down(all);
	}
	else if (all->stack_b->prev->index == min)
	{
		rrb(all, 1);
		pa(all, 1);
		push_down(all);
	}
	else if (all->stack_a->next->index == min)
	{
		sa(all, 1);
		push_down(all);
	}
}
