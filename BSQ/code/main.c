/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:09:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/18 11:38:00 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	char	*line;
	int		fd;
	
	if (ac == 1)
		fd = 0;
	else
		fd = open(av[1], O_RDONLY);
   	line = get_line(fd);
	write(1, line, ft_strlen(line));
	return (0);
}
