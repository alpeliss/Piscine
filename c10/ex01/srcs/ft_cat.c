/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:00:36 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 12:14:24 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

static int	msg_error(int err, char *file)
{
	if (err)
	{
		write(2, "cat: ", 5);
		write(2, file, ft_strlen(file));
		write(2, ": ", 2);
		write(2, strerror(err), ft_strlen(strerror(err)));
		write(2, "\n", 1);
		return (1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	int		fd;
	char	c[30720];
	int		i;
	int		tmp;

	while (ac == 1)
		print_line();
	i = 0;
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (!msg_error(errno, av[i]))
		{
			read(fd, &c, 1);
			if (!msg_error(errno, av[i]))
			{
				write(1, &c, 1);
				while ((tmp = read(fd, &c, 30720)))
					write(1, &c, tmp);
			}
		}
		close(fd);
		errno = 0;
	}
	return (0);
}
