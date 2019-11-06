/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 07:30:02 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/06 07:35:52 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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
	else
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			ft_putnbr(-nb);
		}
	}
}

void	ft_putstring(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
			i++;
		write(1, str, i);
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstring(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstring(par[i].copy);
		i++;
	}
}
