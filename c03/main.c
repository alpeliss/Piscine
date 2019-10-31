/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:41:32 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/31 17:26:10 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "stdio.h"

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char	*str1;
	char	*str2;

	str1 = "";
	str2 = "ewefwo";
	printf("%d VS %d", ft_strcmp(str1, str2), strcmp(str1, str2));
	return (0);
}
