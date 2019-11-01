/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:47:21 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/01 11:21:30 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

void	write_hexa(int c)
{
	char	e;

	if (c < 0)
		c = 256 + c;
	e = (c / 16 < 10) ? '0' + c / 16 : 'a' + c / 16 - 10;
	write(1, &e, 1);
	e = (c % 16 < 10) ? '0' + c % 16 : 'a' + c % 16 - 10;
	write(1, &e, 1);
}

void	print_hexa(char *str, unsigned int i, unsigned int size)
{
	unsigned int	j;

	j = i + 16;
	while (i < j && i < size)
	{
		write_hexa((int)str[i]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	if (i == size)
	{
		if (!(i % 2))
			write(1, "     ", 5);
		else
			write(1, "   ", 3);
	}
}

void	print_addr(void *addr)
{
	long long	add_val;
	long long	div;
	int			i;
	char		c;

	add_val = (long long)addr;
	i = 13;
	div = 16;
	while (i)
	{
		div *= 16;
		i--;
	}
	while (div)
	{
		c = (add_val / div < 10) ? add_val / div
			+ '0' : add_val / div + 'a' - 10;
		write(1, &c, 1);
		add_val = add_val % div;
		div = div / 16;
	}
	write(1, ": ", 2);
}

void	special_write(char *str, unsigned int i, unsigned int size)
{
	unsigned int	j;

	j = i + 16;
	while (i < j && i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	if (!size)
		return (addr);
	i = 0;
	str = (char *)addr;
	while (i < (size / 16) + 1)
	{
		print_addr(&addr[i * 16]);
		print_hexa(str, i * 16, size);
		special_write(str, i * 16, size);
		i++;
	}
	return (addr);
}
