/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:47:35 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/17 14:36:18 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t l)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)d;
	p2 = (unsigned char *)s;
	if (!d && !s)
		return (d);
	if (s < d)
		while (l--)
			p1[l] = p2[l];
	else
		while (l--)
			*p1++ = *p2++;
	return (d);
}
