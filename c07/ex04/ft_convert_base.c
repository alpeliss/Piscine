/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 04:15:16 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/07 15:39:22 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*itoa_base(long nb, char *base, int size_base);

int		atoi_check_base(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\t'
				|| base[i] == '\n' || base[i] == '\r' || base[i] == '\v'
				|| base[i] == '\f' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		find_val(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	size_base;
	int	i;
	int	m;
	int	total;

	if (!(size_base = atoi_check_base(base)))
		return (0);
	i = 0;
	total = 0;
	m = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	m = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (str[i] && find_val(str[i], base) >= 0)
	{
		total = total * size_base + find_val(str[i], base) * m;
		i++;
	}
	return (total);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*str;

	if (!atoi_check_base(base_from) || !atoi_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	str = itoa_base((long)nb, base_to, atoi_check_base(base_to));
	return (str);
}
