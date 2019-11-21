/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:18:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 14:27:44 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void	putnbr_hex(long nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
		write(1, &base[nb], 1);
	else if (nb > 0)
	{
		putnbr_hex(nb / 16);
		putnbr_hex(nb % 16);
	}
}

void		ft_putnbr_hex(long nb)
{
	int	size;
	int	nbr;

	nbr = nb;
	size = 1;
	while (nb / 16)
	{
		size++;
		nb /= 16;
	}
	write(1, "0000000", 7 - size);
	putnbr_hex(nbr);
}

static void	write_hexa(int c)
{
	char	e;

	if (c < 0)
		c = 256 + c;
	e = (c / 16 < 10) ? '0' + c / 16 : 'a' + c / 16 - 10;
	write(1, &e, 1);
	e = (c % 16 < 10) ? '0' + c % 16 : 'a' + c % 16 - 10;
	write(1, &e, 1);
}

static void	print_hexa(char *line)
{
	int	i;
	int	j;

	i = 0;
	write(1, "  ", 2);
	while (line[i] && i < 16)
	{
		write_hexa((int)line[i]);
		if (i != 15 && line[i + 1])
			write(1, " ", 1);
		if (i == 7)
			write(1, " ", 1);
		i++;
	}
	j = i;
	while (i < 16)
	{
		if (j < 8)
			write(1, " ", 1);
		j = 10;
		write(1, "   ", 3);
		i++;
	}
	write(1, "\n", 1);
}

void		print_hex(char *line, long nb)
{
	ft_putnbr_hex(nb);
	print_hexa(line);
	if (nb == 0)
		nb += ft_strlen(line);
}
