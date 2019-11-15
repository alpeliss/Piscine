/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:37:57 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/15 14:43:12 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_advanced_sort(char **tab, int ac, int (*cmp)(char *, char *))
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
			if (cmp(tab[j], tab[i]) < 0)
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

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	if (tab)
		while (tab[i])
			i++;
	ft_advanced_sort(tab, i, cmp);
}
