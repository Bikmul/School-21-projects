/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:10:46 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/12 16:17:40 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t		i;
	char		*p1;
	const char	*p2;

	i = 0;
	p1 = (char *)d;
	p2 = (char *)s;
	if (!n || d == s)
		return (d);
	while (n--)
	{
		p1[i] = p2[i];
		i++;
	}
	return (d);
}	
