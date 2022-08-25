/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:06:17 by dtwanda           #+#    #+#             */
/*   Updated: 2021/11/14 16:01:37 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_d(int n, int *res)
{
	if (n == -2147483648)
		put_s("-2147483648", res);
	else if (n < 0)
	{
		put_c('-', res);
		put_d(-n, res);
	}
	else if (n > 9)
	{
		put_d(n / 10, res);
		put_d (n % 10, res);
	}
	else
		put_c(n + 48, res);
	return (*res);
}