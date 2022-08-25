/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlunchla <tlunchla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:09:56 by tlunchla          #+#    #+#             */
/*   Updated: 2022/08/19 13:01:01 by tlunchla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "global.h"
# include "cmd.h"
# include "token.h"

t_list	*parser(t_list *l_token);

int		parser_cmd_group_merge(t_list **l_cmd);

int		parser_heredoc(t_list *l_token);

int		parser_cmd_pipeline_merge(t_list **l_cmd);

t_list	*parser_scmd_tokens(t_list *l_token);

#endif
