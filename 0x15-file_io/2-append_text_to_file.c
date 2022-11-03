#include "main.h"

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

	if (filename == NULL || !filename)
		return (-1);

	if (text_content == NULL)
	{
		if (filename)
			return (1);
		else
			return (-1);
	}

	fd = open(filename, O_WRONLY);
	write(fd, text_content, sizeof(text_content));

	return (1);
}
