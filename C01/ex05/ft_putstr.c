/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:56:45 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/29 19:58:45 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
 	write(1, str, i);	
}
