/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:38:17 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 13:56:31 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	int	fd;
	int	i;

	if (ac == 1 || ac > 3)
		return (write(1, "Error\n", 6));
	else if (ac == 2)
		fd = open("../ressources/dico", O_RDONLY);
	else
		fd = open(av[1], O_RDONLY);
	
}
