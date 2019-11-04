/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 17:43:18 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/04 20:09:20 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	print_result(int damier[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (damier[i][j] == 1)
			{
				c = '0' + j;
				write(1, &c, 1);
				j = 10;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	moove_dame(int damier[10][10], int raw, int col)
{
	int	i;
	int	j;

	i = (damier[raw][col] == 0) ? -1 : 1;
	j = 0;
	while (j < 10)
	{
		damier[raw][j] += i;
		damier[j][col] += i;
		if (raw - j >= 0 && col - j >= 0)
			damier[raw - j][col - j] += i;
		if (raw + j < 10 && col + j < 10)
			damier[raw + j][col + j] += i;
		if (raw - j >= 0 && col + j < 10)
			damier[raw - j][col + j] += i;
		if (raw + j < 10 && col - j >= 0)
			damier[raw + j][col - j] += i;
		j++;
	}
	damier[raw][col] = (i == 1) ? 0 : 1;
}

void	solve(int damier[10][10], int *nb_results, int raw)
{
	int	i;

	i = 0;
	if (raw == 10)
	{
		*nb_results = *nb_results + 1;
		print_result(damier);
	}
	else
	{
		while (i < 10)
		{
			if (damier[raw][i] == 0)
			{
				moove_dame(damier, raw, i);
				solve(damier, nb_results, raw + 1);
				moove_dame(damier, raw, i);
			}
			i++;
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int		i;
	int		j;
	int		damier[10][10];

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			damier[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	solve(damier, &i, 0);
	return (i);
}
