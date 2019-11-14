/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:22:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/14 20:46:21 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));
int ft_any(char **tab, int(*f)(char*));
int ft_count_if(char **tab, int length, int(*f)(char*));

void	ft_putnbr(int a)
{
	char c;

	c = '0' + a;
	write(1, &c, 1);
}

int		plus_one(int i)
{
	return (i + 1);
}

int		test_b(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return(0);
	while (str[i])
	{
		if (str[i] == 'b')
			return (1);
		i++;
	}
	return (0);
}

int		test_a(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}


int	main(void)
{
	int		tab[11];
	char	**strs;
	int		i;
	int		*n_tab;

	i = 0;
	while (i < 10)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 10, &ft_putnbr);
	n_tab = ft_map(tab, 10, &plus_one);
	write(1, "\n", 1);
	ft_foreach(n_tab, 10, &ft_putnbr);
	write(1, "\n", 1);

	strs = malloc(5 * sizeof(char *));
	strs[0] = "sbs";
	strs[1] = "ttt";
	strs[2] = "bob";
	strs[3] = "svpb";
	strs[4] =  NULL;
	printf("%d\n", ft_any(strs, &test_a));
	printf("%d\n\n", ft_any(strs, &test_b));

	printf("%d\n", ft_count_if(strs, 5, &test_a));
	printf("%d\n", ft_count_if(strs, 5, &test_b));
	return (0);
}
