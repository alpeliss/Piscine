/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:20:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/30 14:29:35 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	*dest;
	char	*src;

	src = "Une courte phrase";
	dest = (char *)malloc(30 * sizeof(char));
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
