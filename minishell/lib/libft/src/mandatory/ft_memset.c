/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <dtwanda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:12:43 by dtwanda           #+#    #+#             */
/*   Updated: 2022/10/21 10:56:03 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that fills the first 'len' bytes of the memory area pointed to
 * by 's' with the constant byte 'c'.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	size_t			i;

	dst = b;
	i = 0;
	while (i < len)
	{
		dst[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
