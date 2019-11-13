/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:49:37 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/13 15:04:09 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**strs;
	char 	*str;

	strs = (char **)malloc(10 * sizeof(char *));
	strs[0] = "uu";
	strs[1] = NULL;
	strs[2] = "eee";
	strs[3] = "rrrrrrr r";
	strs[4] = "";
	strs[5] = "";
	strs[6] = "";
	strs[7] = "";
	strs[8] = "";
	strs[9] = "";
	str = ft_strjoin(7, strs, " et ");
	printf("->%s<-\n", str);
	free(str);
	return (0);
}
