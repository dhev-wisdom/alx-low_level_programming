#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry poit
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 on sucess, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);
	unsigned char *ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}

	printf("\n");

	return (0);
}
