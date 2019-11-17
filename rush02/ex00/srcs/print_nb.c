/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikryvenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:48:06 by ikryvenk          #+#    #+#             */
/*   Updated: 2019/11/16 20:17:54 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static void	print_deci(char *nb, char **dico, int *i)
{
	int pos;

	if (nb[0] == '1')
	{
		if (*i)
			write(1, " ", 1);
		*i = *i + 1;
		write(1, dico[10 + nb[1] - '0'], ft_strlen(dico[10 + nb[1] - '0']));
	}
	else
	{
		if (nb[0] != '0')
		{
			if (*i)
				write(1, " ", 1);
			*i = *i + 1;
			pos = 20 + nb[0] - '2';
			write(1, dico[pos], ft_strlen(dico[pos]));
		}
		print_unity(++nb, dico, i);
	}
}

static void	print_hundr(char *nb, char **dico, int *i)
{
	if (nb[0] != '0')
	{
		print_unity(nb, dico, i);
		if (*i)
			write(1, " ", 1);
		*i = *i + 1;
		write(1, dico[28], ft_strlen(dico[28]));
	}
	print_deci(++nb, dico, i);
}

static void	print_wall(int nb_wall, char **dico, int *i)
{
	if (nb_wall > 0)
	{
		if (*i)
			write(1, " ", 1);
		*i = *i + 1;
		write(1, dico[28 + nb_wall], ft_strlen(dico[28 + nb_wall]));
	}
}

static void	print_alot(char *nb, char **dico, int *i)
{
	int wall;
	int len_nb;
	int cpt;

	len_nb = ft_strlen(nb);
	wall = ((ft_strlen(nb) - 1) / 3);
	while (len_nb > 0)
	{
		cpt = len_nb % 3;
		if (cpt == 0)
			print_hundr(nb, dico, i);
		else if (cpt == 2)
			print_deci(nb, dico, i);
		else if (cpt == 1)
			print_unity(nb, dico, i);
		if (cpt == 0)
			cpt += 3;
		nb = nb + cpt;
		if (!(*(nb - 1) == '0' && *(nb - 2) == '0' && *(nb - 3) == '0'))
			print_wall(wall, dico, i);
		wall--;
		len_nb = len_nb - cpt;
	}
}

void		print_nb(char *nb, char **dico)
{
	int len_nb;
	int	i;

	i = 0;
	len_nb = ft_strlen(nb);
	if (len_nb == 1)
	{
		if (nb[0] == '0')
			write(1, dico[0], ft_strlen(dico[0]));
		else
			print_unity(nb, dico, &i);
	}
	if (len_nb == 2)
		print_deci(nb, dico, &i);
	if (len_nb == 3)
		print_hundr(nb, dico, &i);
	if (len_nb > 3)
	{
		print_alot(nb, dico, &i);
	}
	write(1, "\n", 1);
}
