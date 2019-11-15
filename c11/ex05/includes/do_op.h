/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:10:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/15 14:11:05 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include "unistd.h"

long	ft_atol(char *str);
void	ft_putnbr(long nb);
void	p_add(long a, long b);
void	p_sub(long a, long b);
void	p_mul(long a, long b);
void	p_div(long a, long b);
void	p_mod(long a, long b);

#endif
