#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * @nmemb: The  number of elements
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or funciton fails - NULL,
 * Otherwise - A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	memset(mem, 0, size * nmemb);

	return (mem);
}
