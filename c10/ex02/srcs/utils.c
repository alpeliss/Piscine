/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:31:59 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/17 16:00:54 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	total;

	i = 0;
	total = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	m = 1;
	if (str[i] == '-')
	{
		m = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0') * m;
		i++;
	}
	return (total);
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
