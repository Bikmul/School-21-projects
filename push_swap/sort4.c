/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:14:45 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/23 02:21:39 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3atob(t_all *all)
{
	int	a;
	int	b;
	int	c;

	if (all->size_b == 0)
		return ;
	a = all->stack_b->index;
	b = all->stack_b->next->index;
	c = all->stack_b->prev->index;
	if (b > a && b > c)
		rrb(all, 1);
	else if (a > b && a > c)
		rb(all, 1);
	a = all->stack_b->index;
	b = all->stack_b->next->index;
	if (a > b)
		sb(all, 1);
}

void	pn(t_all *all, int flag)
{
	sort3atob(all);
	if (all->stack_a->index > all->stack_a->next->index && \
		all->stack_a->flag == all->stack_a->next->flag)
		sa(all, 1);
	while (all->size_b != 0)
	{
		if (all->stack_a->index > all->stack_b->index || \
			all->stack_a->flag != flag)
		{
			pa(all, 1);
			push_down(all);
		}
		else
			push_down(all);
	}
	while (all->stack_a->flag == flag && flag != -1)
		push_down(all);
}

void	sortatob5(t_all *all, int flag, int min, int i)
{
	t_node	*tmp;

	min = all->stack_a->prev->index + 1;
	flag = all->stack_a->flag;
	tmp = all->stack_a;
	while (tmp->flag == flag && flag != -1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= 5)
	{
		while (i > 2)
		{
			if (all->stack_a->index == min)
			{
				push_down(all);
				min++;
			}
			else
				pb(all, 1);
			i--;
		}
		pn(all, flag);
	}
}

void	pn2(t_all *all, int flag)
{
	sort3atob(all);
	if (all->stack_a->index > all->stack_a->next->index && \
		all->stack_a->flag == all->stack_a->next->flag)
		sa(all, 1);
	while (all->size_b != 0)
	{
		if (all->stack_a->index > all->stack_b->index || \
			all->stack_a->flag == -1)
		{
			pa(all, 1);
			push_down(all);
		}
		else
			push_down(all);
	}
	while (all->stack_a->flag == flag && flag != -1 && \
			all->stack_a->index +1 == all->stack_a->prev->index)
		push_down(all);
}

void	sortbtoa5(t_all *all)
{
	int		flag;
	int		min;
	int		i;
	t_node	*tmp;

	i = all->size_b;
	min = all->stack_a->prev->index + 1;
	flag = all->stack_a->flag;
	tmp = all->stack_a;
	while (i > 3)
	{
		if (all->stack_b->index == min)
		{
			pa(all, 1);
			push_down(all);
			min++;
		}
		else
			pa(all, 1);
		i--;
	}
	pn2(all, flag);
}
