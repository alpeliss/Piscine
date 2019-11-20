/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:00:43 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 11:15:36 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

static int	identical_sign(int a, int b)
{
	if ((a <= 0 && b <= 0) || (a >= 0 && b >= 0))
		return (1);
	return (0);
}

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sens;
	int	tmp;

	sens = 0;
	i = 0;
	if (length < 3)
		return (1);
	while (i < length - 1)
	{
		if ((tmp = f(tab[i], tab[i + 1])))
		{
			if (!sens)
				sens = tmp;
			else if (!identical_sign(sens, tmp))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
