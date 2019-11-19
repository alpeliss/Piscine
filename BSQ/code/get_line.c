/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:21:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/18 11:38:51 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static char	*add_letter(char *str, char c)
{
	int		i;
	char	*new;

	new = (char *)malloc((ft_strlen(str) + 2) * sizeof(char));
	i = 0;
	if (str)
	{
		while (str[i])
		{
			new[i] = str[i];
			i++;
		}
	}
	if (str)
		free(str);
	new[i++] = c;
	new[i] = '\0';
	return (new);
}

char		*get_line(int fd)
{
	char	c;
	char	*line;
	int		i;

	c = '*';
	line = NULL;
	i = 0;
	while (c != '\n' && read(fd, &c, 1) > 0 && c)
		line = add_letter(line, c);
	return (line);
}
