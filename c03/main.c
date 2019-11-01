/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:41:32 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/01 13:29:51 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);

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
	src = " melo";
	dest = (char *)malloc(100 * sizeof(char));
	dest[0] = 'm';
	dest[1] = 'e';
	dest[2] = 'l';
	dest[3] = 'i';
	dest[4] = '\0';
	printf("%s-\n", ft_strcat(dest, src));
	printf("%s-\n", ft_strcat(dest, src));
	printf("%s-\n", ft_strcat(dest, src));
	printf("%s-\n", ft_strncat(dest, src, 0));
	printf("%s-\n", ft_strncat(dest, src, 1));
	printf("%s-\n", ft_strncat(dest, src, 2));
	printf("%s-\n", ft_strncat(dest, src, 3));
	printf("%s-\n", ft_strncat(dest, src, 4));
	printf("%s-\n", ft_strncat(dest, src, 5));
	printf("%s-\n", ft_strncat(dest, src, 6));
	printf("%s-\n", ft_strncat(dest, src, 100));
	printf("%s\n", strstr("ddhdhh", "dh"));
	printf("%s\n", ft_strstr("ddhdhh", "dh"));
	return (0);
}
