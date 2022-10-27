#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: if big edndian - 0, otherwise - 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
