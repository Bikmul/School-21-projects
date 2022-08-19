/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:09:54 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/23 02:17:01 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb1(t_all *all)
{
	t_node	*tmp;

	tmp = all->stack_a->next;
	all->stack_a->prev->next = all->stack_a->next;
	all->stack_a->next->prev = all->stack_a->prev;
	if (all->stack_b)
	{
		all->stack_a->prev = all->stack_b->prev;
		all->stack_a->next = all->stack_b;
		all->stack_b->prev->next = all->stack_a;
		all->stack_b->prev = all->stack_a;
		all->stack_b = all->stack_a;
	}
	else
	{
		all->stack_b = all->stack_a;
		all->stack_a->next = all->stack_b;
		all->stack_a->prev = all->stack_b;
	}
	all->stack_a = tmp;
}

void	pa1(t_all *all)
{
	t_node	*tmp;

	tmp = all->stack_b->next;
	all->stack_b->prev->next = all->stack_b->next;
	all->stack_b->next->prev = all->stack_b->prev;
	if (all->stack_a)
	{
		all->stack_b->prev = all->stack_a->prev;
		all->stack_b->next = all->stack_a;
		all->stack_a->prev->next = all->stack_b;
		all->stack_a->prev = all->stack_b;
		all->stack_a = all->stack_b;
	}
	else
	{
		all->stack_a = all->stack_b;
		all->stack_a->next = all->stack_a;
		all->stack_a->prev = all->stack_a;
	}
	all->stack_b = tmp;
}

void	pb(t_all *all, int flag)
{
	if (all->size_a == 0)
		return ;
	pb1(all);
	if (all->size_a == 1)
		all->stack_a = NULL;
	all->size_b++;
	all->size_a--;
	if (flag)
		write(1, "pb\n", 3);
}

void	pa(t_all *all, int flag)
{
	if (all->size_b == 0)
		return ;
	pa1(all);
	if (all->size_b == 1)
		all->stack_b = NULL;
	all->size_b--;
	all->size_a++;
	if (flag)
		write(1, "pa\n", 3);
}
