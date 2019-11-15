/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:22:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/15 14:45:16 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));
int ft_any(char **tab, int(*f)(char*));
int ft_count_if(char **tab, int length, int(*f)(char*));
int ft_is_sort(int *tab, int length, int(*f)(int, int));
void ft_sort_string_tab(char **tab);
void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

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

int		comp(int a, int b)
{
	return (a - b);
}

void	p_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%3d", tab[i]);
		i++;
	}
}

void	p_strs(char **strs)
{
	int	i;

	if (strs)
	{
		i = -1;
		while (strs[++i])
			printf("%s\t", strs[i]);
	}
	printf ("\n");
}

int	cmp(char *sa, char *sb)
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
	printf("%d\n\n", ft_count_if(strs, 5, &test_b));

	tab[2] = 3;
	tab[4] = 2;
	p_tab(tab, 10);
	printf("\n%d\n", ft_is_sort(tab, 10, &comp));

	p_strs(strs);
	//	ft_sort_string_tab(strs);
	ft_advanced_sort_string_tab(strs, &cmp);
	p_strs(strs);
	return (0);
}
