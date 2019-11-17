/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:38:17 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 20:28:17 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*nb;
	char	**dico;

	if (ac == 1 || ac > 3)
		return (write(1, "Error\n", 6));
	else if (ac == 2)
		dico = make_intern_dico();
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			return (write(1, "Dict Error\n", 11));
	}
	nb = (ac == 2) ? av[1] : av[2];
	if (!(check_nb(nb)))
		return (write(1, "Error\n", 6));
	if (ac == 3 && !(dico = get_dico(fd)))
		return (write(1, "Dict Error\n", 11));
	print_nb(nb, dico);
	if (ac == 3)
		free_dico(dico, 40);
	if (ac == 2)
		free(dico);
	return (0);
}
