/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:41:32 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 17:47:48 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(int ac, char **av)
{
	char	*str1;
	char	*str2;
	char	*dest;
	char	*src;
	char	*d1;
	char	*d2;
	int		i;

	str1 = "1111";
	str2 = "11111";
	i = ac;
	printf("%s\n%s\n%s\n", av[1], av[2], av[3]);
	printf("%d VS %d\n", ft_strcmp(str1, str2), strcmp(str1, str2));
	printf("%d VS %d\n", ft_strncmp(av[1], av[2], atoi(av[3])), strncmp(av[1], av[2], atoi(av[3])));

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

	d1 = (char *)malloc(100 * sizeof(char));
	d2 = (char *)malloc(100 * sizeof(char));
	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 2), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 2), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 1), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 1), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 2), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 2), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 3), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 3), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 4), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 4), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 9), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 9), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 15), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 15), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 0), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 0), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", -1), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", -1), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 1000000000), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 1000000000), d2);

	printf("%u->%s\n", ft_strlcat(d1, "", 1), d1);
	printf("%lu->%s\n", strlcat(d2, "", 1), d2);

	printf("%u->%s\n", ft_strlcat(d1, "0123456789", 1), d1);
	printf("%lu->%s\n", strlcat(d2, "0123456789", 1), d2);


	return (0);
}
