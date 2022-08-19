/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:39:55 by dtwanda           #+#    #+#             */
/*   Updated: 2022/03/24 12:39:56 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error1(char *file)
{
	ft_putstr_fd("\033[31mError:\e[0m ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

void	error2(char *cmd)
{
	ft_putstr_fd("\033[31mError:\e[0m command not found: ", 2);
	ft_putstr_fd(cmd, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

void	check_arg(int argc)
{
	if (argc != 5)
	{
		ft_putstr_fd("Error:\e Wrong number of arguments.\n", 2);
		exit(EXIT_SUCCESS);
	}
}

void	error3(void)
{
	perror("\033[31mError:\e[0m ");
	exit(EXIT_FAILURE);
}

void	check(int *fd1, int *fd2, char **argv)
{
	*fd1 = open(argv[1], O_RDONLY);
	if (*fd1 == -1)
		error1(argv[1]);
	*fd2 = open(argv[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (*fd2 == -1)
		error1(argv[4]);
}
