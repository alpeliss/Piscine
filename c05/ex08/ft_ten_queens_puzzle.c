/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 17:43:18 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/03 18:23:41 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:50:17 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/03 17:42:53 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"

int		test_pos(char *str)
{
	int	i;	
	int	j;

	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			if (str[j] == str[i])
				return (0);
			if (str[j] == str[i] + (j - i))
				return (0);
			if (str[j] == str[i] - (j - i))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*next_pos(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '9')
			str[i] = '0';
		else
		{
			str[i] = str[i] + 1;
			return (NULL);
		}
		i++;
	}
	return (NULL);
}

void	solve(char *str, int *i)
{
	write(1, "a\n", 2);
	if (test_pos(str))
	{
		*i = *i + 1;
		write(1, str, 10);
		write(1, "\n", 1);
	}
	write(1, "b\n", 2);
	next_pos(str);
	write(1, str, 10);
	write(1, "\n", 1);
	if (str)
	{
		write(1, "e\n", 2);
		solve(str, i);
	}
}

int		ft_ten_queens_puzzle(void)
{
	int		i;
	int		j;
	int		combi;

	j = 0;
	combi = 0;
	str[j] = '\0';
	i = 0;
	solve(&combi, &i);
	return (i);
}
