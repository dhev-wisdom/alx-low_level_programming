#include "main.h"

/**
 * create_file - creates a function that creates a file
 * @filename: file to create
 * @text_content: what to write into the file
 * Return: On success - , on failure - -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = creat(filename, 0600);
		return (1);
	}

	if (filename)
		return (1);

	fd = creat(filename, 0600);
	write(fd, text_content, sizeof(text_content));
	if (fd < 0)
		return (-1);

	return (1);
}


