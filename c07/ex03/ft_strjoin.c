/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 00:20:50 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/13 14:25:55 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	if (!dest || !src)
		return (dest);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		calc_size(char **strs, char *sep, int size)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep);
	return (total + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		res_size;
	int		i;

	res_size = calc_size(strs, sep, size);
	res = malloc(res_size * sizeof(char));
	if (size <= 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[res_size] = '\0';
	return (res);
}
