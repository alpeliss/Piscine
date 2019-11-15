#include "ft_cat.h"

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

int		main(int ac, char **av)
{
	int	fd;
	char	c;
	int	i;

	if (ac < 2)
		print_line();
	else if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (!msg_error(errno, av[i]))
			{
				read(fd, &c, 1);
				if (!msg_error(errno, av[i]))
				{
					write(1, &c, 1);
					while (read(fd, &c, 1))
						write(1, &c, 1);
				}
			}
			close (fd);
			errno= 0;
			i++;
		}
	}
	return (0);
}
