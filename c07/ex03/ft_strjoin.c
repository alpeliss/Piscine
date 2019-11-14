/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:41:10 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/14 18:55:53 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int		ft_count(int size, char **strs, char *sep)
{
	int i;
	int count;

	count = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	if (count <= 0)
		return (0);
	return (count + 1);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	int		i;
	char	*tab;

	tab = malloc(ft_count(size, strs, sep) * sizeof(char));
	if (size == 0)
		return (tab);
	i = 0;
	a = 0;
	while (a < size)
	{
		b = -1;
		if (strs[a])
			while (strs[a][++b])
				tab[i++] = strs[a][b];
		b = -1;
		if (sep)
			while (sep[++b] && a < size - 1)
				tab[i++] = sep[b];
		a++;
	}
	tab[i] = '\0';
	return (tab);
}
