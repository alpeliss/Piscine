/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:01:42 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/19 12:07:57 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

static char	*add_letter(char line[30720], char letter)
{
	int	i;

	i = ft_strlen(line);
	line[i] = letter;
	line[i + 1] = '\0';
	return (line);
}

static char	get_letter(void)
{
	char	c;

	read(0, &c, 1);
	return (c);
}

static int	is_line(char *line)
{
	int	i;

	if (!line)
		return (0);
	else
	{
		i = 0;
		while (line[i] && line[i] != '\n')
			i++;
		if (!line[i])
			return (0);
		return (i);
	}
}

void		print_line(void)
{
	char	line[30720];
	char	temp;
	int		size;

	line[0] = '\0';
	temp = '\0';
	while (!(size = is_line(line)) && temp != '\n')
	{
		temp = get_letter();
		add_letter((line), temp);
	}
	write(1, line, size);
	write(1, "\n", 1);
}
