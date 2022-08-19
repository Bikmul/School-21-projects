/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:27:16 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/25 17:22:01 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_val(long r)
{
	if (r > 2147483647)
		r = -1;
	if (r < -2147483648)
		r = 0;
	return (r);
}

int	ft_atoi(const char *str)
{
	long		r;
	long		s;
	size_t		i;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'\
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	r = r * s;
	check_val(r);
	return ((int)r);
}
