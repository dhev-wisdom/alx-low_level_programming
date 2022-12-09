#include "main.h"

/**
 * main - copies the contents of a file to another
 * argc - number of arguments passed.
 * argv - array of arguments
 *
 * Return - Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int fd_r, fd_w, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);

	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((x = read(fd_r, buf, BUFSIZE)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Erroe: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}

	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(fd_r);
	n = close(fd_w);

	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (n < 0)
			dprint(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);

		exit(100);
	}

	return (0);
}
