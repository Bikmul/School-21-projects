/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <dtwanda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:36:41 by dtwanda           #+#    #+#             */
/*   Updated: 2022/11/01 16:12:23 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*s2;
	unsigned long	size;

	size = 0;
	while (s1[size])
		size++;
	s2 = (char *)malloc(size + 1);
	if (s2)
	{
		size = 0;
		while (s1[size])
		{
			s2[size] = s1[size];
			size++;
		}
		s2[size] = '\0';
	}
	return (s2);
}
