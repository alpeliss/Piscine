/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:41:32 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/31 17:42:05 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	*str1;
	char	*str2;

	str1 = "ewefwo";
	str2 = "ewe.fwo";
	printf("%d VS %d\n", ft_strcmp(str1, str2), strcmp(str1, str2));
	printf("%d VS %d", ft_strncmp(str1, str2, 0), strncmp(str1, str2, 0));
	return (0);
}
