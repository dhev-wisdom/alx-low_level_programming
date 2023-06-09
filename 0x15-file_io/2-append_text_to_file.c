#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - apprnds text atbthe end of file.
 * @filename:file to append text.
 * @text_content: text to append
 *
 * Return: On success - 1, on failure - -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);

	ptr = fopen(filename, "a+");
	if (ptr == NULL)
		return (-1);

	fprintf(ptr, "%s", text_content);
	fclose(ptr);

	return (1);
}
