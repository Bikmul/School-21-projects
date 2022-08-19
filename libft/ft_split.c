/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:53:19 by dtwanda           #+#    #+#             */
/*   Updated: 2021/10/21 13:57:44 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hmw(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*malstr(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**str;

	if (!s)
		return (NULL);
	k = hmw(s, c);
	str = (char **)malloc(sizeof(char *) * (k + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (++i < k)
	{
		while (s[0] == c)
			s++;
		str[i] = malstr(s, c);
		if (!str)
			return (NULL);
		s = s + ft_strlen(str[i]);
	}
	str[i] = 0;
	return (str);
}
