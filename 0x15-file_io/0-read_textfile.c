#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buf;
	ssize_t i;
	ssize_t y;

	if (!filename)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		fclose(fptr);
		return (0);
	}

	i = fread(buf, sizeof(char), letters, fptr);
	if (i < 0)
	{
		free(buf);
		fclose(fptr);
		return (0);
	}

	buf[letters] = '\0';
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		fclose(fptr);
		return (0);
	}

	free(buf);
	fclose(fptr);
	return (y);
}
