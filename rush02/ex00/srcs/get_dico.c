/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dico.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:56:45 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 19:27:39 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

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

static char	*get_file(int fd)
{
	char	c;
	char	*file;

	c = '*';
	file = NULL;
	while (read(fd, &c, 1) > 0 && c)
		file = add_letter(file, c);
	return (file);
}

char		**get_dico(int fd)
{
	char	**dico;
	char	*file;

	file = get_file(fd);
	dico = parse_file(file);
	free(file);
	return (dico);
}
