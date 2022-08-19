/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:38:12 by dtwanda           #+#    #+#             */
/*   Updated: 2022/03/24 12:38:13 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <sys/errno.h>
# include <string.h>
# include <fcntl.h>

char	**find_path(char **env);
char	*get_line(char *cmd, char **path);
void	check(int *fd1, int *fd2, char **argv);
void	error3(void);
void	check_arg(int argc);
void	error2(char *cmd);
void	error1(char *file);

#endif