/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:31:59 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/19 20:58:05 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	if (!s1)
		return (-s2[i]);
	if (!s2)
		return (s1[i]);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

static void	error_message(char *file)
{
	char	*str;

	str = strerror(errno);
	write(2, "hexdump: ", 9);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
}

int			check_fd(char *file, int i)
{
	int		fd;
	char	c;

	errno = 0;
	fd = open(file, O_RDONLY);
	if (errno || fd < 0)
	{
		if (i)
			error_message(file);
		close(fd);
		errno = 0;
		return (0);
	}
	read(fd, &c, 1);
	if (errno || fd < 0)
	{
		if (i)
			error_message(file);
		close(fd);
		errno = 0;
		return (0);
	}
	close(fd);
	return (1);
}
