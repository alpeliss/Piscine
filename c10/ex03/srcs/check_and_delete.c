/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:59:07 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 14:40:35 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	**check_and_delete(int ac, char **av, int i)
{
	char	**good_av;
	int		j;
	int		size;

	if (ac < 3 || ft_strncmp(av[1], "-C", 2))
		return (NULL);
	size = 0;
	while (i < ac)
	{
		size += check_fd(av[i], 1);
		i++;
	}
	if (!size)
		return (NULL);
	good_av = (char **)malloc((size + 1) * sizeof(char *));
	i = 2;
	j = 0;
	while (i < ac)
	{
		if (check_fd(av[i], 0))
			good_av[j++] = av[i];
		i++;
	}
	good_av[j] = NULL;
	return (good_av);
}
