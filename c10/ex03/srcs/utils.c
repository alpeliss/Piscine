/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:31:59 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/18 20:25:02 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *sa, char *sb)
{
	int	i;

	if (!sa && !sb)
		return (0);
	else if (!sb)
		return (sa[0]);
	else if (!sa)
		return (-sb[0]);
	i = 0;
	while (sa[i] && sa[i] == sb[i])
		i++;
	return (sa[i] - sb[i]);
}

static void	putnbr_hex(long nb, char *base)
{
	if (nb < 16)
		write(1, &base[nb], 1);
	else if (nb > 0)
	{
		putnbr_hex(nb / 16, base);
		putnbr_hex(nb % 16, base);
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
	putnbr_hex(nbr, "0123456789abcdef");
}

char		*ft_strndup(char *src, int n)
{
	{
		int		i;
		char	*copy;

		if (!src)
			return (NULL);
		i = 0;
		if (!(copy = (char *)malloc((n + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (i < n)
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
