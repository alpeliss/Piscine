/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 07:13:03 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/06 07:25:31 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "stdlib.h"

char				*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	if (!(copy = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int					ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (!(tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		if (!(tab[i].copy = ft_strdup(av[i])))
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	tab[i].size = 0;
	tab[i].copy = 0;
	return (tab);
}
