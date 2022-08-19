/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:36:52 by dtwanda           #+#    #+#             */
/*   Updated: 2022/04/01 15:32:03 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child1(int *pipe_fd, char **argv, char **env, int fd1)
{
	char	**cmd;
	char	**path;
	char	*line;

	dup2(fd1, 0);
	dup2(pipe_fd[1], 1);
	cmd = ft_split(argv[2], ' ');
	path = find_path(env);
	line = get_line(cmd[0], path);
	close(fd1);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	execve(line, cmd, env);
}

void	child2(int *pipe_fd, char **argv, char **env, int fd2)
{
	char	**cmd;
	char	**path;
	char	*line;

	dup2(pipe_fd[0], 0);
	dup2(fd2, 1);
	cmd = ft_split(argv[3], ' ');
	path = find_path(env);
	line = get_line(cmd[0], path);
	close(fd2);
	close(pipe_fd[1]);
	close(pipe_fd[0]);
	execve(line, cmd, env);
}

void	pipex(char **argv, char **env)
{
	int		fd1;
	int		fd2;
	pid_t	pid;
	int		pipe_fd[2];

	check(&fd1, &fd2, argv);
	if (pipe(pipe_fd) == -1)
		error3();
	pid = fork();
	if (pid == -1)
		error3();
	if (pid == 0)
		child1(pipe_fd, argv, env, fd1);
	pid = fork();
	if (pid == -1)
		error3();
	if (pid == 0)
		child2(pipe_fd, argv, env, fd2);
	close(fd1);
	close(fd2);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	wait(0);
	wait(0);
}

int	main(int argc, char **argv, char **env)
{
	check_arg(argc);
	pipex(argv, env);
	return (0);
}
