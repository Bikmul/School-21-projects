/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 04:33:08 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/23 02:18:16 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_all *all, int flag)
{
	int	p;

	if (all->size_a < 2)
		return ;
	p = all->stack_a->num;
	all->stack_a->num = all->stack_a->next->num;
	all->stack_a->next->num = p;
	p = all->stack_a->index;
	all->stack_a->index = all->stack_a->next->index;
	all->stack_a->next->index = p;
	p = all->stack_a->flag;
	all->stack_a->flag = all->stack_a->next->flag;
	all->stack_a->next->flag = p;
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_all *all, int flag)
{
	int		p;

	if (all->size_b < 2)
		return ;
	p = all->stack_b->num;
	all->stack_b->num = all->stack_b->next->num;
	all->stack_b->next->num = p;
	p = all->stack_b->index;
	all->stack_b->index = all->stack_b->next->index;
	all->stack_b->next->index = p;
	p = all->stack_b->flag;
	all->stack_b->flag = all->stack_b->next->flag;
	all->stack_b->next->flag = p;
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_all *all, int flag)
{
	if (all->size_a > 1 && all->size_b > 1)
	{
		sa(all, 0);
		sb(all, 0);
		if (flag)
			write(1, "ss\n", 3);
	}
}
