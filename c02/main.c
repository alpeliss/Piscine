/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:20:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 15:08:54 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	char	*dest;
	char	*dest1;
	char	*dest2;
	char	*src;
	char	*src1;
	char	*src2;
	int		i;
	int		j;
	char	*memory;
	char	*str;
	char	c;

	src2 = "Une courte phrase";
	src1 = "Une courte phrase";
	src = "MMMMMMMMMMM";
	dest = (char *)malloc(30 * sizeof(char));
	dest1 = (char *)malloc(30 * sizeof(char));
	ft_strcpy(dest, src);
	ft_strcpy(dest1, src);
	printf("-%s-\n", dest);
	dest2 = (char *)malloc(30 * sizeof(char));
	ft_strncpy(dest2, src2, 4);
	printf("-%s-\n", dest2);	
	ft_strncpy(dest2, src2, 0);
	printf("-%s-\n", dest2);
	ft_strncpy(dest2, src2, 29);
	printf("-%s-\n", dest2);	
	ft_strncpy(dest2, NULL, 29);
	printf("-%s-\n", dest2);
/*	printf("%d%d", ft_str_is_alpha("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"),ft_str_is_alpha(""));
	printf("%d%d%d\n", ft_str_is_alpha("!"), ft_str_is_alpha("["), ft_str_is_alpha("~"));
	printf("%d%d", ft_str_is_numeric(""), ft_str_is_numeric("0123456789"));
	printf("%d%d\n", ft_str_is_numeric("+"), ft_str_is_numeric(";"));
	printf("%d%d",  ft_str_is_lowercase(""),  ft_str_is_lowercase("qwertyuiopasdfghjklzxcvbnm"));
	printf("%d%d\n",  ft_str_is_lowercase("A"),  ft_str_is_lowercase("}"));
	printf("%d%d",  ft_str_is_uppercase(""),  ft_str_is_uppercase("QWERTYUIOPASDFGHJKLZXCVBNM"));
	printf("%d%d\n",  ft_str_is_uppercase("!"),  ft_str_is_uppercase("v"));
	printf("%d%d",  ft_str_is_printable(""),  ft_str_is_printable("134didqw$%^*9h;'{}|]["));*/
/*	printf("%d\n", ft_str_is_printable("\n"));
	printf("->%s\n", dest);
	printf("->%s\n",  ft_strupcase(dest));
	printf("->%s\n",  ft_strlowcase(dest));*/
	ft_strupcase("");
	ft_strlowcase("");
//	printf("\n%s\n", dest);
//	printf("->%s", ft_strcapitalize(dest));
//	printf("\nsrc->%s\ndest->%s\n", src2, dest);
	i = strlcpy(dest, src2, 78);
	j = ft_strlcpy(dest1, NULL, 78);
//	printf("%d  ->%s\n", i, dest);
//	printf("%d  ->%s", j, dest1);
	i = 1;
	str =(char *)malloc(256 * sizeof(char));
	while (i < 256)
	{
		c = i;
		str[i - 1] = c;
		i++;
	}
	ft_putstr_non_printable(str);
//	printf("\n%s\n", str);
//	printf("\n\n");
	memory = "Bonjour les aminches.\t\n\tc est fou\ttout\tce au on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	ft_print_memory(&i, 255);
}
