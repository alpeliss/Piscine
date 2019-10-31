/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:02:17 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/31 20:39:11 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int		is_printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

void	hexa_print(int c)
{
	char	e;

	if (c < 0)
		c = 256 + c;
	write(1, "\\", 1);
	e = (c / 16 < 10) ? '0' + c / 16 : 'a' + c / 16 - 10;
	write(1, &e, 1);
	e = (c % 16 < 10) ? '0' + c % 16 : 'a' + c % 16 - 10;
	write(1, &e, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (is_printable(str[i]))
				write(1, &str[i], 1);
			else
				hexa_print((int)str[i]);
			i++;
		}
	}
}
