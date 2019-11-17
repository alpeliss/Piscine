#include "sys/stat.h"
#include "sys/types.h"
#include <fcntl.h>
#include "unistd.h"

int	main(int ac, char **av)
{
	int	fd;
	char	c;

	if (ac < 2)
		return (write(2, "File name missing.\n", 19));
	else if (ac > 2)
		return (write(2, "Too many arguments.\n", 20));
	else if ((fd = open(av[1], O_RDONLY)) < 0) 
		return (write(2, "Cannot read file.\n", 18));
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close (fd);
	return (0);
}
