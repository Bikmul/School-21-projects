/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:45:10 by dtwanda           #+#    #+#             */
/*   Updated: 2022/01/30 20:06:14 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h> // для printf (после удалить)
# include <stdlib.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_node
{
	int				num;
	int				index;
	int				flag;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_all
{
	t_node			*stack_a;
	t_node			*stack_b;
	int				size_a;
	int				size_b;
	int				min;
	int				med;
	int				max;
	int				min_a;
}					t_all;

t_all	*pars(char **argv);
void	sortirovka(t_all *all);
char	**get(char **av);
void	repeated(char **av);
void	check(char **arr);
void	free_arr(char **arr, int flag);
void	error(void);
t_all	*init(char **arr);
t_node	*new_list(int num, int index);
void	lstadd_back(t_node **stack_a, t_node *new);
void	free_stack(t_all *all);
void	add(t_all *all, char **arr);
void	dopsort(t_all *all, int *sort, int *not_sort, int len);
void	create_stack(t_all *all, int *sort, int *not_sort, int len);
void	pb(t_all *all, int flag);
void	pa(t_all *all, int flag);
void	pb1(t_all *all);
void	pa1(t_all *all);
void	sa(t_all *all, int flag);
void	sb(t_all *all, int flag);
void	ss(t_all *all, int flag);
void	ra(t_all *all, int flag);
void	rb(t_all *all, int flag);
void	rr(t_all *all, int flag);
void	rra(t_all *all, int flag);
void	rrb(t_all *all, int flag);
void	rrr(t_all *all, int flag);
int		sort_true(t_all *all);
void	sort3a(t_all *all);
void	sort3b(t_all *all);
void	sort5(t_all *all);
int		short_cut(t_all *all);
int		search_min_btoa(t_all *all);
void	movebtoa(t_all *all);
void	moveatob(t_all *all);
void	search_min_atob(t_all *all);
void	push_down(t_all *all);
void	sortatob5(t_all *all, int flag, int min, int i);
void	sortbtoa5(t_all *all);
void	sort3atob(t_all *all);
void	moveatob1(t_all *all);
void	min_max_med_a(t_all *all);
void	min_max_med_b(t_all *all);
void	move_down(t_all *all);

#endif