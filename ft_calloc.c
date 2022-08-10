/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:41:37 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/11 18:53:08 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*p;

	bytes = count * size;
	p = malloc(bytes);
	if (p)
		ft_memset(p, 0, bytes);
	return (p);
}
