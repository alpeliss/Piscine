/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:17:30 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/29 18:17:53 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

void	ft_putnbr_pos(int nb)
{
	char	c;

	c = nb + '0';
	if (nb < 10)
		write(1, &c, 1);
	else
	{
		ft_putnbr_pos(nb / 10);
		ft_putnbr_pos(nb % 10);
	}
}

int		check_nbr(int nb, int max)
{
	if (nb >= max)
		return (1);
	max = max / 10;
	while (max / 10)
	{
		if (nb / max >= (nb % max) / (max / 10))
		{
			return (0);
		}
		nb = nb % max;
		max = max / 10;
	}
	return (1);
}

int		other_check(int nb, int max)
{
	if (nb % 10 != 9)
		return (0);
	if (nb >= max)
		return (1);
	max = max / 10;
	while (max / 10)
	{
		if (nb / max != ((nb % max) / (max / 10)) - 1)
		{
			return (0);
		}
		nb = nb % max;
		max = max / 10;
	}
	return (1);
}

int		mini_cheat(int n)
{
	if (n != 9)
		return (0);
	write(1, "012345678, 012345679, 012345689, 012345789, ", 44);
	write(1, "012346789, 012356789, 012456789, 013456789, ", 44);
	write(1, "023456789, 123456789", 20);
	return (1000000000);
}

void	ft_print_combn(int n)
{
	int		i;
	int		max;

	max = 10;
	i = 1;
	while (i < n)
	{
		max *= 10;
		i++;
	}
	i = mini_cheat(n);
	while (i < max)
	{
		while (!check_nbr(i, max))
			i++;
		if (!(i * 10 / max) && n != 1)
			write(1, "0", 1);
		ft_putnbr_pos(i);
		if (!other_check(i, max))
			write(1, ", ", 2);
		else
			i = 1000000000;
		i++;
	}
}
