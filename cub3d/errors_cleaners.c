/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_cleaners.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <dtwanda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:41:22 by dtwanda           #+#    #+#             */
/*   Updated: 2022/11/01 16:12:23 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	error(char *err)
{
	write(2, err, ft_strlen(err));
	exit(1);
}

void	cleaner(char **spl)
{
	int	i;

	i = 0;
	while (spl[i])
	{
		free(spl[i]);
		i++;
	}
	free(spl);
}
