/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:22:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/14 20:13:13 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));

void	ft_putnbr(int a)
{
	char c;

	c = '0' + a;
	write(1, &c, 1);
}

int		plus_one(int i)
{
	return (i + 1);
}

int	main(void)
{
	int	tab[10];
	int	i;
	int	*n_tab;

	i = 0;
	while (i < 10)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 10, &ft_putnbr);
	n_tab = ft_map(tab, 10, &plus_one);
	write(1, "\n", 1);
	ft_foreach(n_tab, 10, &ft_putnbr);
}