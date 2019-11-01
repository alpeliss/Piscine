/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:45:18 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/01 12:26:09 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

void	r_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int 	main(void)
{
	int	*p;
	int *q;
	int	*div;
	int	*mod;
	int	tab[6];
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
	*p = 45;
	*q = 6;
	printf("p = %d et q = %d -> ", *p, *q);
	ft_ultimate_div_mod(p, q);
	printf("p = %d et q = %d\n", *p, *q);
	ft_putstr("Bonjour je suis un calamar\n");
	printf("Bonjour -> %d\n", ft_strlen("Bonjour"));
	tab[0] = 45;
	tab[1] = 4;
	tab[2] = 145;
	tab[3] = 78;
	tab[4] = -15;
	tab[5] = 15;
	r_tab(tab, 5);
	ft_rev_int_tab(tab, 5);
	r_tab(tab, 5);
	ft_sort_int_tab(tab, 5);
	r_tab(tab, 5);
	return (0);
}
