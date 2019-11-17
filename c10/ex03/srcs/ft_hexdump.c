/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:18:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/17 22:02:44 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void print_spe_char(char c)
{
	write(1, "\\", 1);
	if (c == 10)
		write(1, "n", 1);
	if (c == 9)
		write(1, "t", 1);
}

static void	print_hex(char *line, int tmp)
{
	int	i;

	i = 0;
	write(1, "  ", 2);
	while (i < tmp)
	{
		if (line[i] >= 32 && line[i] <= 126)
		{
			write(1, " ", 1);
			write(1, &line[i], 1);
		}
		else
			print_spe_char(line[i]);
		if (i != tmp - 1)
			write(1, "  ", 2);
		i++;
	}
	while (i++ < 16)
		write(1, "    ", 4);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	char	*new_line;
	int		bit_count;
	int		tmp;
	int		j;

	j = 1;
	ac = ac + 1 - 1;
	line = (char *)malloc(16 * sizeof(char));
	new_line = (char *)malloc(16 * sizeof(char));
	fd = open(av[1], O_RDONLY);
	ft_putnbr_hex(0);
	bit_count = read(fd, line, 16);
	print_hex(line, bit_count);
	while ((tmp = read(fd, new_line, 16)))
	{
		if (ft_strcmp(line, new_line) || tmp < 16)
		{
			j = 1;
			ft_putnbr_hex(bit_count);
			print_hex(new_line, tmp);
			free (line);
			line = new_line;
			new_line = (char *)malloc(16 * sizeof(char));
		}
		else if (j)
		{
			j = 0;
			write(1, "*\n", 2);
		}
		bit_count += tmp;
	}
	ft_putnbr_hex(bit_count);
	write(1, "\n", 1);
	close (fd);
	free(line);
	free(new_line);
	return (0);
}
