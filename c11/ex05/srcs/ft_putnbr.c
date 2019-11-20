/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 16:15:17 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 10:43:03 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	mini_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > -10 && nb < 10)
		mini_putnbr(nb);
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
}
