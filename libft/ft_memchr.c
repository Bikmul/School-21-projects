/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:48:08 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/11 18:23:44 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*r;
	size_t	i;

	i = 0;
	r = (char *)s;
	while (i < n)
	{
		if ((char )c == r[i])
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
