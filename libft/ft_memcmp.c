/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:22:14 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/12 16:49:36 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*r1;
	unsigned char	*r2;

	i = 0;
	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	while (i < n)
	{
		if (r1[i] != r2[i])
			return ((int)(r1[i] - r2[i]));
		i++;
	}
	return (0);
}
