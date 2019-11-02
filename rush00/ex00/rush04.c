/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 14:20:21 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 14:20:25 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_line(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i + 1 < x)
			ft_putchar('B');
		else
			ft_putchar('C');
		i++;
	}
}

void	print_middle_line(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y - 2)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0)
				ft_putchar('B');
			else if (i + 1 < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	print_last_line(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i + 1 < x)
			ft_putchar('B');
		else
			ft_putchar('A');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_first_line(x);
		ft_putchar('\n');
		print_middle_line(x, y);
		if (y >= 2)
		{
			print_last_line(x);
			ft_putchar('\n');
		}
	}
}
