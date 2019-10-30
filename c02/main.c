/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:20:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/30 15:13:01 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);

int		main(void)
{
	char	*dest;
	char	*dest2;
	char	*src;

	src = "Une courte phrase";
	dest = (char *)malloc(30 * sizeof(char));
	ft_strcpy(dest, src);
	printf("-%s-\n", dest);
	dest2 = (char *)malloc(30 * sizeof(char));
	ft_strncpy(dest2, src, 4);
	printf("-%s-\n", dest2);	
	ft_strncpy(dest2, src, 0);
	printf("-%s-\n", dest2);
	ft_strncpy(dest2, src, 29);
	printf("-%s-\n", dest2);	
	ft_strncpy(dest2, NULL, 29);
	printf("-%s-\n", dest2);
	printf("%d", ft_str_is_alpha("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"));
	printf("%d", ft_str_is_alpha(""));
	printf("%d%d%d\n", ft_str_is_alpha("!"), ft_str_is_alpha("["), ft_str_is_alpha("~"));
	printf("%d%d", ft_str_is_numeric(""), ft_str_is_numeric("0123456789"));
	printf("%d%d\n", ft_str_is_numeric("+"), ft_str_is_numeric(";"));
}
