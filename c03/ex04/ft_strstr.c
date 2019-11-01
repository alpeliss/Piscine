/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 12:31:35 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/01 13:29:40 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str || !to_find)
		return (NULL);
	if (!to_find[0])
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
