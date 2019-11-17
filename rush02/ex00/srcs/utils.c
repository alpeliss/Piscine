/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:18:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 20:34:47 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int			ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
			{
				while (str[i + j] == ' ')
					j++;
				if (str[i + j] == ':' && (i == 0 || str[i - 1] == '\n'))
					return (i);
			}
			j = 0;
		}
	return (-1);
}

static int	calc_size(long nb)
{
	int	size;

	size = 1;
	while (nb / 10)
	{
		size++;
		nb /= 10;
	}
	return (size + 1);
}

char		*ft_itoa(int nb)
{
	char	*str;
	int		i;
	long	div;

	str = (char *)malloc(calc_size(nb) * sizeof(char));
	div = 1;
	while (nb / div > 9)
		div *= 10;
	i = 0;
	while (div)
	{
		str[i] = nb / div + '0';
		nb = nb % div;
		div = div / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int			check_nb(char *nb)
{
	int len;

	len = 0;
	while (nb[len])
	{
		if (nb[0] == '0' && nb[1])
			return (0);
		else if (!(nb[len] >= '0' && nb[len] <= '9'))
			return (0);
		len++;
	}
	if (len > 39)
		return (0);
	return (len);
}
