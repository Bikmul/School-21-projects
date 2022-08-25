/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <dtwanda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:24:00 by dtwanda           #+#    #+#             */
/*   Updated: 2022/10/21 10:20:14 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that erases the data in the next 'n' bytes of memory starting from
 * the location pointed to by 's', by writing null bytes to that area.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
}
