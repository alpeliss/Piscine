/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:40:56 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/05 23:59:24 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

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

int		main(void)
{
	test_strdup("Test");
	printf("\n");
	test_range(45, 54);
	return (0);
}
