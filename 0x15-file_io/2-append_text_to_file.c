#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - apprnds text atbthe end of file.
 * @filename:file to append text.
 * @text_content: text to append
 *
 * Return: On success - 1, on failure - -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int t;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	t = write(fd, text_content, strlen(text_content));
	if (t == -1)
		return (-1);

	close(fd);

	return (1);
}
