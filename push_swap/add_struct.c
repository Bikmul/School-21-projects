/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:14:18 by dtwanda           #+#    #+#             */
/*   Updated: 2022/02/23 02:14:01 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add(t_all *all, char **arr)
{
	int	*not_sort;
	int	*sort;
	int	i;
	int	num;
	int	len;

	len = 0;
	i = -1;
	while (arr[++i])
		len++;
	not_sort = malloc(sizeof(int) * (len));
	sort = malloc(sizeof(int) * (len));
	i = 0;
	while (i < len)
	{
		num = ft_atoi(arr[i]);
		not_sort[i] = num;
		sort[i] = num;
		i++;
	}
	dopsort(all, sort, not_sort, len);
}

void	dopsort(t_all *all, int *sort, int *not_sort, int len)
{
	int	i;
	int	j;
	int	tmp;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		j = 0;
		while (j < (len - 1 - i))
		{
			if (sort[j] > sort[j + 1])
			{
				tmp = sort[j + 1];
				sort[j + 1] = sort[j];
				sort[j] = tmp;
				count++;
			}
			j++;
		}
		i++;
	}
	create_stack(all, sort, not_sort, len);
}

void	create_stack(t_all *all, int *sort, int *not_sort, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (not_sort[i] == sort[j])
			{
				lstadd_back(&all->stack_a, new_list(not_sort[i], j + 1));
				j++;
				break ;
			}
			j++;
		}
		i++;
	}
	free(not_sort);
	free(sort);
}
