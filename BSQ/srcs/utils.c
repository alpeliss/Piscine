/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:35:33 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 17:00:03 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

int		free_tab(char **tab, int i, int err)
{
	while (i >= 0 && tab[i])
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	if (err)
		write(1, "map error\n", 10);
	return (0);
}

int		ft_atoi(char *str, int j)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && j)
	{
		result = result * 10 + (str[i] - '0');
		i++;
		j--;
	}
	return (result);
}

void	*ft_error(void)
{
	write(1, "map error\n", 10);
	return (NULL);
}

int		ft_int_error(void)
{
	write(1, "map error\n", 10);
	return (0);
}
