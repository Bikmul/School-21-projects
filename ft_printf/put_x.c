/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:29:18 by dtwanda           #+#    #+#             */
/*   Updated: 2021/11/14 16:04:57 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_x(unsigned long long int n, int *res, int j)
{
	if (n >= 16)
	{
		put_x(n / 16, res, j);
		put_x(n % 16, res, j);
	}
	else if (n > 9 && n < 16)
	{
		if (j == 1)
			put_c(n % 10 + 97, res);
		else
			put_c(n % 10 + 65, res);
	}
	else
		put_c(n % 10 + 48, res);
	return (*res);
}
