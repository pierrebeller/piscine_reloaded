#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(int fd)
{
	char *buff;

	while (read(fd, buff, 1) != 0)
		write(1, buff, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 20);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ft_display_file(fd);
	return (0);
}
