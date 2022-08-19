/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:11:12 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/11 17:45:35 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[t] && ((i + t + 1) < dstsize))
	{
		dst[i + t] = src[t];
		t++;
	}
	if (i != dstsize)
		dst[i + t] = '\0' ;
	return (i + ft_strlen(src));
}
