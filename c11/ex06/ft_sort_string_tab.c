/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:04:02 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/15 14:31:31 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strcmp(char *sa, char *sb)
{
	int	i;

	if (!sa && !sb)
		return (0);
	else if (!sa)
		return (-sb[0]);
	else if (!sb)
		return (sa[0]);
	i = 0;
	while (sa[i] && sa[i] == sb[i])
		i++;
	return (sa[i] - sb[i]);
}

static void	ft_sort(char **tab, int ac)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

void		ft_sort_string_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab)
		while (tab[i])
			i++;
	ft_sort(tab, i);
}
