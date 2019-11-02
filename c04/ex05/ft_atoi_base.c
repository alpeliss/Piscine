/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 17:49:52 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 19:39:29 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	atoi_check_base(char *base)
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

int	find_val(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size_base;
	int	i;
	int	m;
	int	total;

	if (!(size_base = atoi_check_base(base)))
		return (0);
	i = 0;
	total = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	m = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		m = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] && find_val(str[i], base) >= 0)
	{
		total = total * size_base + find_val(str[i], base) * m;
		i++;
	}
	return (total);
}
