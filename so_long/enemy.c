/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:23 by dtwanda           #+#    #+#             */
/*   Updated: 2022/03/01 18:24:25 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	rename_enemy(t_vars *vars, char a, char b)
{
	int	i;
	int	j;

	i = -1;
	while (++i < vars->count)
	{
		j = -1;
		while (++j < vars->length)
		{
			if (vars->arr[i][j] == a)
			{
				vars->arr[i][j] = b;
				if (a == 'V' && b == 'K')
					move_enemy(vars, i, j);
			}
		}
	}
}
