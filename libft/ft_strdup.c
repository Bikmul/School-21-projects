/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:21:53 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/13 16:23:42 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
