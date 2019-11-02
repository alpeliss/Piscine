/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 16:40:25 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 17:33:33 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	mini_putnbr_base(int nb, char *base)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	write(1, &base[nb], 1);
}

int		check_base(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (j);
}

void	putnbr_base(long nb, char *base, int size)
{
	if (nb > -size && nb < size)
		mini_putnbr_base(nb, base);
	else if (nb > 0)
	{
		putnbr_base(nb / size, base, size);
		putnbr_base(nb % size, base, size);
	}
	else
	{
		write(1, "-", 1);
		putnbr_base(-nb, base, size);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	if ((size_base = check_base(base)))
		putnbr_base((long)nbr, base, size_base);
}
