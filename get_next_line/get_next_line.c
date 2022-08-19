/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:53:09 by dtwanda           #+#    #+#             */
/*   Updated: 2021/11/07 18:20:08 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fline(char *str)
{
	int		i;
	char	*fstr;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	fstr = (char *)malloc(sizeof(char) * (i + 2));
	if (!fstr)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		fstr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		fstr[i] = str[i];
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}

char	*newstr(char *str)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!newstr)
		return (NULL);
	i++;
	while (str[i])
		newstr[j++] = str[i++];
	newstr[j] = '\0';
	free(str);
	return (newstr);
}

char	*l_to_r(int fd, char *str)
{
	char	*buf;
	int		bytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(str, '\n') && bytes != 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = l_to_r(fd, str);
	if (!str)
		return (NULL);
	line = fline(str);
	str = newstr(str);
	return (line);
}
