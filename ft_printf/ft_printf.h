/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:07:55 by dtwanda           #+#    #+#             */
/*   Updated: 2021/11/14 17:14:39 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	put_c(char c, int *res);
int	put_s(char *s, int *res);
int	put_d(int n, int *res);
int	put_u(unsigned int n, int *res);
int	put_x(unsigned long long int n, int *res, int j);
int	put_p(unsigned long long int n, int *res);

#endif
