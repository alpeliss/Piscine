/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:13:47 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 19:38:46 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	get_def_size(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] >= 32 && str[i] <= 126)
	{
		i++;
		j++;
		if (str[i] == ' ')
			j++;
		while (str[i] == ' ')
			i++;
	}
	return (j + 1);
}

static char	*get_def(char *str)
{
	int		i;
	int		j;
	char	*def;

	def = (char *)malloc(get_def_size(str) * sizeof(char));
	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
	{
		def[j] = str[i];
		i++;
		j++;
		if (str[i] == ' ')
			def[j++] = str[i];
		while (str[i] == ' ')
			i++;
	}
	def[j] = '\0';
	return (def);
}

static char	*find_def(char *word, char *file)
{
	int		i;
	char	*def;

	if ((i = ft_strstr(file, word)) < 0)
		return (NULL);
	while (file[i] != ':')
		i++;
	i++;
	while (file[i] == ' ')
		i++;
	if (file[i] < 33 || file[i] > 126)
		return (NULL);
	def = get_def(&file[i]);
	return (def);
}

static void	*big_num(char **dico, int j, char *file)
{
	if (!(dico[j++] = find_def("1000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000000000000000000", file)))
		return (free_dico(dico, j - 2));
	if (!(dico[j++] = find_def("1000000000000000000000000000000000000", file)))
		return (free_dico(dico, j - 2));
	return (&dico[0]);
}

char		**parse_file(char *file)
{
	char	*word;
	char	**dico;
	int		i;
	int		j;

	dico = (char **)malloc(42 * sizeof(char *));
	i = 0;
	j = 0;
	while (i <= 100)
	{
		word = ft_itoa(i);
		dico[j] = find_def(word, file);
		if (!(dico[j]))
			return (free_dico(dico, j - 1));
		j++;
		free(word);
		i = (i < 20) ? i + 1 : i + 10;
	}
	if (!big_num(dico, j, file))
		return (NULL);
	dico[41] = NULL;
	return (dico);
}
