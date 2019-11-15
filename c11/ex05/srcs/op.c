/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:34:10 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/15 13:43:38 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	p_add(long a, long b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	p_sub(long a, long b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	p_mul(long a, long b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	p_div(long a, long b)
{
	if (b)
		ft_putnbr(a / b);
	else
		write(1, "Stop : division by zero", 23);
	write(1, "\n", 1);
}

void	p_mod(long a, long b)
{
	if (b)
		ft_putnbr(a % b);
	else
		write(1, "Stop : modulo by zero", 21);
	write(1, "\n", 1);
}
