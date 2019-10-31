/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:47:21 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/31 12:01:18 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				add_val;

	i = size;
	add_val = (int)addr;
	printf("%d\n", add_val);
	return (addr);
}

int	main(void)
{
	char	*str;

	str = "Bonjour les aminches.\t\n\tc est fou\ttout\tce au on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	ft_print_memory(str, 40);
	return (0);
}
