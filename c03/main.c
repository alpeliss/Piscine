/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:41:32 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/31 18:40:00 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	*str1;
	char	*str2;
	char	*dest;
	char	*src;
	int		i;

	str1 = "vvaioa";
	str2 = "vvaoa";
	i = 5;
	printf("%d VS %d\n", ft_strcmp(str1, str2), strcmp(str1, str2));
	printf("%d VS %d\n", ft_strncmp(str1, str2, i), strncmp(str1, str2, i));
	src = " melo\n";
	dest = (char *)malloc(15 * sizeof(char));
	dest[0] = 'm';
	dest[1] = 'e';
	dest[2] = 'l';
	dest[3] = 'i';
	dest[4] = '\0';
	printf("%s", ft_strcat(dest, src));
	return (0);
}
