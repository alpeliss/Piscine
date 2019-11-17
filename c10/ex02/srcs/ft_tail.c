#include "ft_tail.h"

static int	msg_error(int err, char *file)
{
	if (err)
	{
		write (2, "cat: ", 5);
		write(2, file, ft_strlen(file));
		write(2, ": ", 2);
		write(2, strerror(err), ft_strlen(strerror(err)));
		write(2, "\n", 1);
		return (1);
	}
	return (0);
}

static int	calc_size_file(int fd, char *file)
{
	int	size_file;
	int	c;

	read(fd, &c, 1);
	size_file = 0; 
	if (!msg_error(errno, file))
	{
		while (read(fd, &c, 1))
			size_file++;
		return (size_file);
	}
	return (-1);
}

int		main(int ac, char **av)
{
	int	fd;
	int	i;
	int	size_file;
	char	*line;

	i = 3;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (!msg_error(errno, av[i]))
			size_file = calc_size_file(fd, av[i]);
		close (fd);
		errno = 0;
		if (size_file >= 0)
		{
			read(fd, NULL, size_file - 10);
			line = malloc(10 * sizeof(char));
			read(fd, line, 10);
			write(1, line, 10);
			free(line);
		}
		i++;
	}
	return (0);
}
