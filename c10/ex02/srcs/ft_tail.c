/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 14:37:51 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/17 16:03:18 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int	calc_size(char *file)
{
	int		fd;
	char	tmp;
	int		size_file;

	fd = open(file, O_RDONLY);
	read(fd, &tmp, 1);
	if (errno)
	{
		close(fd);
		errno = 0;
		return (-1);
	}
	size_file = 1;
	while (read(fd, &tmp, 1) && !errno)
		size_file++;
	close(fd);
	return (size_file);
}

static int	print_end_file(char *file, int nb)
{
	int		size_file;
	int		fd;
	char	*deb_file;
	char	*end_file;

	size_file = calc_size(file);
	fd = open(file, O_RDONLY);
	deb_file = malloc((size_file - nb) * sizeof(char));
	read(fd, deb_file, size_file - nb);
	free(deb_file);
	nb = (nb <= size_file) ? nb : size_file;
	end_file = malloc(nb * sizeof(char));
	read(fd, end_file, nb);
	write(1, end_file, nb);
	free(end_file);
	close(fd);
	return (0);
}

static int	check(int ac, char **av)
{
	int	i;

	if (ac < 4)
		return (0);
	if (ft_strcmp(av[1], "-c"))
		return (0);
	i = 0;
	while (av[2][i] && (av[2][i] == ' ' || (av[2][i] > 8 && av[2][i] < 14)))
		i++;
	if (av[2][i] == '-' || av[2][i] == '+')
		i++;
	if (av[2][i] < '0' || av[2][i] > '9')
		return (0);
	return (1);
}

int			main(int ac, char **av)
{
	int		i;
	int		nb;

	i = 3;
	if (!check(ac, av))
		return (0);
	nb = ft_atoi(av[2]);
	nb = (nb < 0) ? -nb : nb;
	while (i < ac)
	{
		if (ac > 4)
		{
			write(1, "==> ", 4);
			write(1, av[i], ft_strlen(av[i]));
			write(1, "<==\n", 4);
		}
		print_end_file(av[i], nb);
		if (ac > 4 && i < ac - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
