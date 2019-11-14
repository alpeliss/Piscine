/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:22:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/14 19:25:50 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int a)
{
	char c;

	c = '0' + a;
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 10, &ft_putnbr);
}
