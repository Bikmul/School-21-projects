/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:02:04 by dtwanda           #+#    #+#             */
/*   Updated: 2022/03/24 14:02:06 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**find_path(char **env)
{
	char	**arr;
	int		i;

	i = 0;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5))
		{
			arr = ft_split(env[i] + 5, ':');
			if (!arr)
				error3();
			return (arr);
		}
		i++;
	}
	return (NULL);
}

char	*get_line(char *cmd, char **path)
{
	char	*tmp;
	char	*line;
	int		i;

	i = 0;
	while (path[i])
	{
		tmp = ft_strjoin(path[i], "/");
		line = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(line, F_OK) == 0)
			return (line);
		else
			free(line);
		i++;
	}
	error2(cmd);
	return (NULL);
}
