/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:16:33 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/15 13:54:25 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void			do_op(long a, long b, void (*f[5])(long, long), char c)
{
	if (c == '+')
		f[0](a, b);
	else if (c == '-')
		f[1](a, b);
	else if (c == '*')
		f[2](a, b);
	else if (c == '/')
		f[3](a, b);
	else if (c == '%')
		f[4](a, b);
}

int				main(int ac, char **av)
{
	long	val_a;
	long	val_b;
	void	(*f[5])(long, long);

	f[0] = &p_add;
	f[1] = &p_sub;
	f[2] = &p_mul;
	f[3] = &p_div;
	f[4] = &p_mod;
	if (ac == 4)
	{
		if (!av[2] || !av[2][0] || av[2][1] || (av[2][0] != '+'
					&& av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%'))
			return (0);
		val_a = ft_atol(av[1]);
		val_b = ft_atol(av[3]);
		do_op(val_a, val_b, f, av[2][0]);
	}
	return (0);
}
