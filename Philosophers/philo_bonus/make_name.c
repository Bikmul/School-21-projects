/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_name.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:58:46 by dtwanda           #+#    #+#             */
/*   Updated: 2022/05/05 13:58:51 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		++i;
	return (i);
}

char	*make_n_name(char *name, int n)
{
	char	*result;
	int		num;
	int		i;

	i = 0;
	num = n;
	while (num)
	{
		num /= 10;
		++i;
	}
	result = malloc(sizeof(char) * (i + ft_strlen(name) + 1));
	if (result == NULL)
		return (NULL);
	num = -1;
	while (++num < i)
		result[num] = name[num];
	while (n)
	{
		result[i++] = n % 10 + '0';
		n /= 10;
	}
	result[i] = 0;
	return (result);
}
