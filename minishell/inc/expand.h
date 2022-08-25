/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlunchla <tlunchla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:09:56 by tlunchla          #+#    #+#             */
/*   Updated: 2022/08/19 13:44:32 by tlunchla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPAND_H
# define EXPAND_H

# include "global.h"
# include "cmd.h"

# define WILDCARD	-1
# define VAR_SPACE	-1

int		expand_var(t_c_scmd *c_scmd);
int		expand_wildcard(t_c_scmd *c_scmd);

int		expand_var_splitting(t_list **l_token);

int		expand_var_token_list(t_list *l_token);
bool	expand_token_is_wildcard(t_list *token);
char	*expand_pattern_get(t_list *token);
char	*expand_wildcard_append_str(char *wildcard, t_list *token);
char	**expand_files_current_dir(void);
void	expand_wildcard_replace_connected(t_list **l_token, t_list *old,
			t_list *new);
int		expand_wildcard_list(t_list	**l_token, char **files);

#endif
