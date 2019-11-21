/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 14:12:58 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/19 20:52:52 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void	first_line(char *buff, long *bit_count)
{
	if (!(*bit_count))
	{
		print_hex(buff, *bit_count);
		buff[33] = 'a';
		*bit_count = (ft_strlen(buff) > 16) ? 16 : ft_strlen(buff);
	}
}

static void	print_and_modif(char *buff, long *bit_count)
{
	int	i;
	int	j;

	if (ft_strncmp(buff, &buff[16], 16))
	{
		buff[33] = 'a';
		if (buff[16])
			print_hex(&buff[16], *bit_count);
	}
	else if (buff[33] == 'a')
	{
		buff[33] = 'b';
		write(1, "*\n", 2);
	}
	i = 0;
	j = 16;
	while (i < 16)
		buff[i++] = buff[j++];
	buff[16] = '\0';
	*bit_count += ft_strlen(buff);
}

static int	fill_buff(char *buff, int fd)
{
	int	size;
	int	tmp;

	size = ft_strlen(buff);
	tmp = read(fd, &buff[size], 32 - size);
	if (tmp < 32 - size)
	{
		tmp = (tmp < 0) ? 0 : tmp;
		buff[size + tmp] = '\0';
		return (0);
	}
	buff[32] = '\0';
	return (1);
}

static void	stuff(char **av)
{
	char	buff[34];
	int		i;
	int		fd;
	long	bit_count;

	i = 0;
	buff[0] = '\0';
	bit_count = 0;
	fd = open(av[i], O_RDONLY);
	while (av[i])
	{
		while (!fill_buff(buff, fd) && av[i])
		{
			close(fd);
			fd = open(av[++i], O_RDONLY);
		}
		first_line(buff, &bit_count);
		print_and_modif(buff, &bit_count);
	}
	ft_putnbr_hex(bit_count);
	write(1, "\n", 1);
}

int			main(int ac, char **av)
{
	char	**good_av;

	good_av = check_and_delete(ac, av, 2);
	if (good_av)
		stuff(good_av);
	return (0);
}
