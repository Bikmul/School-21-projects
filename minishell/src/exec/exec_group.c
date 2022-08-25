/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlunchla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:09:56 by tlunchla          #+#    #+#             */
/*   Updated: 2022/04/29 16:09:58 by tlunchla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"
#include "cmd.h"

int	exec_group(t_list *l_cmd, t_list *l_free)
{
	int	pid;
	int	status;

	pid = fork();
	if (pid == -1)
		return (print_error_errno(SHELL_NAME, NULL, NULL));
	if (pid == 0)
	{
		status = exec_recursive(cmd_content(l_cmd)->l_element, true, l_free);
		exec_free_all(NULL, l_free);
		exit(status);
	}
	return (exec_wait_pid(pid, NULL));
}
