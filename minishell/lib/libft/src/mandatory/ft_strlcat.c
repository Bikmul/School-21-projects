/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <dtwanda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:28:55 by dtwanda           #+#    #+#             */
/*   Updated: 2022/10/21 12:56:01 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that appends the null-terminated string 'src' to the end of 'dst',
 * appending at most 'dstsize' - strlen(dst) - 1 bytes and null-terminating
 * the result. The return value is the total length of the resulting string.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && len_dst + i + 1 < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (dstsize > 0 && dstsize > len_dst)
		dst[len_dst + i] = '\0';
	if (dstsize > len_dst)
		return (len_dst + len_src);
	else
		return (dstsize + len_src);
}
