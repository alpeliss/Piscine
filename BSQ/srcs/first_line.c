/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:30:59 by namenega          #+#    #+#             */
/*   Updated: 2019/11/20 17:20:53 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map	*first_line(char *str)
{
	int		size;
	t_map	*x;

	if (!str || !(x = (t_map *)malloc(1 * sizeof(t_map))))
		return (ft_error());
	size = ft_strlen(str);
	if (size < 5)
	{
		free(x);
		return (ft_error());
	}
	x->vide = str[size - 4];
	x->obstacle = str[size - 3];
	x->plein = str[size - 2];
	x->line_nbr = ft_atoi(str, (size - 4));
	if ((x->vide == x->obstacle) || (x->vide == x->plein) ||
			(x->obstacle == x->plein) || (x->line_nbr < 1))
	{
		free(x);
		return (ft_error());
	}
	free(str);
	return (x);
}
