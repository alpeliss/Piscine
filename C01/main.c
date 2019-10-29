/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:45:18 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/29 19:14:40 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	*p;
	int *q;
	int	*div;
	int	*mod;
	int	a;
	int	b;
	int	c;
	int d;

	c = 0;
	d = 0; 
	div = &c;
	mod = &d;
	a = 0;
	b = 0;
	p = &a;
	q = &b;
	printf("%d -> ", a);
	ft_ft(p);
	printf("%d\n", a);
	printf("a = %d et b = %d -> ", a, b);
	ft_swap(p, q);
	printf("a = %d et b = %d\n", a, b);
	a = 43;
	b = 5;
	ft_div_mod(a, b, div, mod);
	printf("a = %d, b = %d, a / b = %d et a %% b = %d\n", a, b, *div, *mod);
	return (0);
}
