/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:20:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/30 17:45:31 by alpeliss         ###   ########.fr       */
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

int		main(void)
{
	char	*dest;
	char	*dest2;
	char	*src;
	char	*src2;
	int		i;

	src2 = "Une courte phrase";
	src = "42mots Cinquante+Et+Un Quarante-Deux;";
	dest = (char *)malloc(30 * sizeof(char));
	ft_strcpy(dest, src);
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
	printf("%d%d", ft_str_is_alpha("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"),ft_str_is_alpha(""));
	printf("%d%d%d\n", ft_str_is_alpha("!"), ft_str_is_alpha("["), ft_str_is_alpha("~"));
	printf("%d%d", ft_str_is_numeric(""), ft_str_is_numeric("0123456789"));
	printf("%d%d\n", ft_str_is_numeric("+"), ft_str_is_numeric(";"));
	printf("%d%d",  ft_str_is_lowercase(""),  ft_str_is_lowercase("qwertyuiopasdfghjklzxcvbnm"));
	printf("%d%d\n",  ft_str_is_lowercase("A"),  ft_str_is_lowercase("}"));
	printf("%d%d",  ft_str_is_uppercase(""),  ft_str_is_uppercase("QWERTYUIOPASDFGHJKLZXCVBNM"));
	printf("%d%d\n",  ft_str_is_uppercase("!"),  ft_str_is_uppercase("v"));
	printf("%d%d",  ft_str_is_printable(""),  ft_str_is_printable("134didqw$%^*9h;'{}|]["));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("->%s\n", dest);
	printf("->%s\n",  ft_strupcase(dest));
	printf("->%s\n",  ft_strlowcase(dest));
	ft_strupcase("");
	ft_strlowcase("");
	printf("->%s", ft_strcapitalize(dest));
	printf("src->%s\ndest->%s\n", src, dest);
	i = strlcpy(dest, src, 0);
	printf("%d  ->%s", i, dest);
}
