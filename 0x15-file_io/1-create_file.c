#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a function that creates a file
 * @filename: file to create
 * @text_content: what to write into the file
 *
 * Return: On success - 1, on failure - -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int y;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		y = write(fd, text_content, strlen(text_content));
		if (y < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}


