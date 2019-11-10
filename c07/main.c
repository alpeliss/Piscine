/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:40:56 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/07 18:15:55 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

void	test_strdup(char *s1)
{
	printf("-%s-\n-%s-\n", strdup(s1), ft_strdup(s1));
	printf("-%s-\n-%s-\n", strdup(""), ft_strdup(""));
}

void	test_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = ft_range(min, max);
	i = 0;
	while (i + min < max)
	{
		printf("%5d", tab[i]);
		i++;
	}
}

void	test_ultim_range(int min, int max)
{
	int	**tab;
	int	i;

	tab = (int **)malloc(sizeof(int *));
	ft_ultimate_range(tab, min, max);
	i = 0;
	while (i + min < max)
	{
		printf("%5d", tab[0][i]);
		i++;
	}
}

void	test_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	
	str = ft_strjoin(size, strs, sep);
	printf("-%s-\n", str);
}

void	test_convert_base(char *nbr, char *base_from, char *base_to)
{
	printf("%s", ft_convert_base(nbr, base_from, base_to));
}

void	test_split(char *str, char *charset)
{
	char **tab;
	int	i;

	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s-\n", tab[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	ac = ac + 1 - av[0][0];
	test_strdup("Test");
	printf("\n");

	test_range(45, 54);
	printf("\n\n");

	test_ultim_range(10, 20);
	printf("\n\n");
	
	char	*str;

	str = "bo";
	test_strjoin(3, av, NULL);
	printf("\n\n");

	test_convert_base("\0\t\n\r\v\f--+++++-45", "0123456789", "0123456789ABCDEF");
	printf("\n\n");

	test_split("    une phrase    toute simple", " ");
	return (0);
}
